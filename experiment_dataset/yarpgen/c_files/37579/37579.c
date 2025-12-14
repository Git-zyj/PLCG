/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [i_0] = (max((((-(arr_2 [i_0] [i_1] [i_0])))), (max((var_1 / var_5), (arr_0 [i_1] [i_2])))));
                    var_14 = (((var_6 || 10968) && ((var_2 || (!var_10)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_1] [i_2] [i_3] [1] [i_1] &= var_0;
                                var_15 *= var_1;
                                var_16 = (min(var_16, ((min(((((min(1, var_0))) ? -70368744177663 : var_12)), var_3)))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_0] [8] = ((1 ? 29 : 16198586));
                        var_17 = (max(var_17, var_13));
                    }
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        var_18 += ((-(var_8 / 22746)));
                        var_19 |= ((((((min(var_3, 11931220267619730794)) == var_1))) & ((((((arr_13 [i_0]) ? var_10 : (arr_7 [i_0] [i_1] [i_0])))) ? 42789 : var_2))));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_20 = (max(var_20, ((((((3458764513820540928 / (arr_22 [i_0] [i_2] [i_7])))) ? (((arr_22 [i_0] [i_1] [i_7]) ? (arr_22 [i_0] [2] [i_0]) : var_11)) : (((22735 || (arr_22 [i_0] [i_1] [i_2])))))))));
                        var_21 &= ((4 | (max(65535, (max(-1240625108479473251, 0))))));
                    }
                }
            }
        }
    }
    var_22 = ((65532 ? (max(var_13, var_1)) : 57999));
    #pragma endscop
}
