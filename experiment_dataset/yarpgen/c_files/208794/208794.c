/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((var_7 == (0 && 0)));
        var_18 *= ((((((arr_1 [i_0]) > 1))) / (arr_1 [i_0 + 2])));
        var_19 = (arr_1 [i_0 + 1]);
    }

    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_20 = (max(var_20, (((((((max(251, (arr_3 [14])))) ? (((766684424 ? var_12 : 47031))) : (max(var_13, var_5)))) >> (((arr_4 [i_1]) - 4477301709959878996)))))));
        var_21 = (var_6 <= 65535);
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 16;i_3 += 1)
            {
                {
                    arr_11 [i_1] = max(-21, (!1));
                    var_22 -= ((((((arr_7 [i_3 + 1] [i_2 + 1]) / (arr_9 [i_3 - 3] [16] [i_1])))) > 4282141594));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 14;i_5 += 1)
                        {
                            {
                                var_23 = min((-var_8 & 23099), ((var_11 ? (arr_6 [6] [i_2 - 1] [i_2 + 4]) : 9223372036854775808)));
                                var_24 = (((((!var_2) && ((max(12, 22305)))))) >> ((254 ? (((!(arr_5 [i_3])))) : 2551)));
                                var_25 = (arr_10 [4] [i_3 + 2] [i_4]);
                                var_26 &= (((((var_8 & (((var_11 ? 4095 : var_12)))))) ? var_5 : (((((max(var_9, var_6))) & (arr_16 [i_2 - 3] [i_4] [i_4] [i_3] [9] [i_2 - 3] [i_1]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            {
                                var_27 = (arr_5 [i_3 - 1]);
                                var_28 = (((((min(var_17, (arr_17 [i_6] [i_3 + 2] [i_2]))))) <= (min(11, 14960840022599839378))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = var_3;
    var_30 -= ((-(max(var_10, (129 * var_3)))));
    #pragma endscop
}
