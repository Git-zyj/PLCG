/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_16 = (min(var_16, (((((0 ? (arr_3 [i_1 - 2] [i_4]) : (arr_3 [i_1 - 3] [i_0])))) == (arr_11 [i_0] [i_0] [i_2] [i_0] [i_3] [i_0] [i_4])))));
                                var_17 &= (((max(var_14, 3445546336))));
                            }
                        }
                    }
                    var_18 = ((((((arr_1 [i_1] [i_1 - 2]) ? 8521215115264 : (var_14 - 672094274)))) ? -1252901334414133269 : (arr_2 [i_1 - 1] [i_1 - 1])));
                    var_19 = (arr_1 [5] [i_1]);
                    var_20 = ((!(((arr_2 [i_1 + 1] [i_1]) && (arr_2 [i_1 - 3] [i_1])))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_21 = (min(9007197107257344, 27907));
                                var_22 -= (((var_10 != 2571034421) ? ((max(var_8, (arr_5 [i_5 - 2] [i_5 - 2] [i_5 - 2] [i_5])))) : (((arr_5 [i_5 - 1] [i_5 - 1] [i_2] [i_5]) ? -9223372036854775781 : (arr_5 [i_5 - 1] [i_5 - 1] [i_2] [i_5 + 1])))));
                                arr_18 [i_0] [i_0] [i_2] [i_2] [i_6] = ((8521215115264 ? (arr_17 [i_0] [i_5 - 1]) : ((((arr_13 [4] [i_1 - 1] [4] [i_1 - 1] [i_5 + 1]) + 27893)))));
                            }
                        }
                    }
                }
                arr_19 [i_0] = (arr_17 [i_0] [i_0]);
                var_23 += (arr_2 [i_1] [i_1]);
                arr_20 [i_0] [i_1] [i_1 - 3] = ((~(((arr_4 [i_1 + 2]) / 65520))));
            }
        }
    }
    var_24 = (((((2336408358 ? var_2 : (max(2615965779, var_7))))) ? var_10 : (((max(8857, var_9))))));
    var_25 = var_12;
    #pragma endscop
}
