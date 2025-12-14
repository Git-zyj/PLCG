/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(((max(148, 1181076043))), (min(var_12, var_0))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_15 = ((170 * ((((65535 ? 1188914891 : 1))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = -2943175404882522840;
                        var_16 = (((72040001851883520 || 36249) % (arr_6 [i_1 + 1] [i_1 - 2] [i_2 - 2] [i_2])));
                        arr_11 [i_0] [i_0] [i_2] [i_1] = ((((((arr_7 [i_0] [i_0] [i_0] [i_3]) | (arr_2 [i_0])))) ? (~-70) : (arr_6 [8] [i_2 + 2] [i_2 + 1] [i_3])));
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                    {
                        arr_14 [15] [15] [i_1] = (max(((var_1 << (((arr_1 [i_0] [i_0]) - 32902)))), (arr_3 [i_1])));
                        var_17 += 255;
                        var_18 += (0 ? (((arr_9 [i_1 - 2]) | (arr_12 [i_1 - 1] [4] [i_2 + 1] [14] [i_2 - 2] [0]))) : -3128);

                        for (int i_5 = 2; i_5 < 15;i_5 += 1)
                        {
                            arr_17 [i_0] [i_1] [i_2 + 2] [i_1 - 2] [i_2 + 2] [i_1] = (arr_1 [i_1] [i_4]);
                            var_19 = arr_8 [i_1];
                        }
                        for (int i_6 = 2; i_6 < 17;i_6 += 1)
                        {
                            arr_22 [i_1] [i_1] [i_1] = var_7;
                            arr_23 [i_0] [i_1] [i_0] [i_0] [i_1] [i_0] = ((((((arr_2 [i_1 + 1]) ? ((((!(arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (max((arr_1 [i_0] [i_1]), var_1))))) && (0 && 69)));
                        }
                    }
                    for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
                    {
                        arr_28 [i_7] [i_1] [0] [i_1] [i_1] [i_0] = var_0;
                        var_20 = (arr_13 [i_7] [i_2 + 2] [i_2 + 2] [i_1] [i_0]);
                    }
                    arr_29 [i_1] [1] [i_1] [i_1] = (~var_3);
                }
            }
        }
    }
    var_21 = var_12;
    var_22 = (min(var_22, var_5));
    #pragma endscop
}
