/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1 - 3] [i_1] = ((arr_5 [i_0]) ? ((((((-1699106445 + 2147483647) >> (-1483855915 + 1483855926)))) ? ((var_7 ? 1015790418 : 1579047575)) : (-1699106456 | 1388130153))) : (max(-787804112, -2135787867)));

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_11 = arr_9 [i_0 + 3] [i_1 + 2] [i_2] [i_3];
                            arr_17 [i_4] [i_1] [i_2] [i_2] [i_2] [i_1] [i_0] = -2147483639;
                            arr_18 [6] [i_0] [i_1 - 3] [i_1] [4] [15] [i_4] = (1908655527 ? -399505656 : -1);
                            var_12 = (((arr_12 [i_1]) != ((1483855914 ? -2011406297 : 535419950))));
                        }
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            var_13 = (-139377207 ? ((var_1 ? var_9 : (arr_6 [i_0]))) : (((arr_6 [i_0]) ? 1989893105 : 933907503)));
                            var_14 = (((((arr_6 [i_0 - 2]) + -1186837512)) > (arr_13 [17] [i_1] [i_2] [i_1])));
                            var_15 |= (((arr_4 [i_5] [i_5]) < ((-1306703265 ? var_6 : (arr_7 [18] [i_3])))));
                            arr_21 [i_1] = arr_9 [i_0] [i_0] [i_0 - 3] [i_0 - 3];
                        }
                        arr_22 [i_0 - 2] [i_1] [18] [i_3 + 4] |= (-1156944347 & 1483855914);
                    }
                    for (int i_6 = 4; i_6 < 21;i_6 += 1)
                    {
                        var_16 = arr_4 [i_0] [i_1 - 2];
                        arr_26 [i_0] [i_0] [i_1] = (((arr_4 [i_0] [i_1]) >= (arr_24 [i_1 - 4] [i_0 - 3] [i_0 - 3])));
                        var_17 = arr_12 [i_1];
                    }
                }
            }
        }
    }
    #pragma endscop
}
