/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 74;
    var_21 = ((-(!-var_3)));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (max((((-(((arr_1 [19]) + (arr_1 [i_0])))))), (max(var_4, (var_7 / var_16)))));
        var_22 = ((!((max((arr_1 [i_0]), 14686926065385333660)))));
        arr_3 [i_0] = ((max((arr_0 [i_0]), ((65535 ? -3534 : 2)))));
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        var_23 = var_2;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    var_24 -= ((-(max((arr_5 [i_3] [i_3]), var_11))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 18;i_5 += 1)
                        {
                            {
                                var_25 = (arr_4 [i_1 + 2]);
                                var_26 ^= (min((!255), 2090315525));
                                var_27 = var_13;
                                var_28 = (min((((65519 ? 65532 : 15))), ((~(max(-17179869184, (arr_16 [i_1] [i_1 + 1] [i_1 - 1] [i_1] [i_1 + 1])))))));
                            }
                        }
                    }
                }
            }
        }
        var_29 &= (arr_9 [i_1] [i_1] [i_1 + 1] [6]);
        arr_17 [i_1] [i_1 + 1] = 47;
        var_30 = var_8;
    }
    var_31 = (((!((min(var_6, var_3))))));
    #pragma endscop
}
