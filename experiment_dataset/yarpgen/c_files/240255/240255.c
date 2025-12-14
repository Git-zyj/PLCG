/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~-16);
    var_18 = (min(((var_3 ? -5398 : var_11)), var_7));
    var_19 = (~3570438119);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 = 0;
        var_21 = 15;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    arr_10 [i_1] [i_1] [i_3] |= (~2);
                    var_22 ^= (2854848268 - 65526);
                    arr_11 [13] [i_2] [i_1] = (arr_4 [i_2] [i_2]);

                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_23 = (max(((((5540979547919218452 | var_8) && (arr_9 [i_1] [i_1] [i_1])))), (arr_8 [i_2])));
                        var_24 = 16;
                        arr_14 [i_2] [2] = ((6749078503605549785 ? var_2 : (((((-(arr_0 [i_1]))) != 15)))));
                        var_25 |= ((((min((var_9 % var_3), -16))) ? (~54) : ((~(!9)))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        var_26 = (54479 + var_5);
                        arr_17 [i_2] [i_1] |= ((var_5 & (((var_6 << (var_3 - 60508))))));
                        arr_18 [i_2] [i_2] [0] [i_5] = ((var_6 * (arr_0 [i_2 - 1])));
                    }
                    for (int i_6 = 3; i_6 < 19;i_6 += 1)
                    {
                        arr_23 [i_1] [i_1] [i_1] [i_3] [i_2] [i_6] = var_15;
                        arr_24 [i_1] [i_1] [i_1] [i_1] |= 2078520784;
                        var_27 = var_9;

                        for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
                        {
                            var_28 = (var_3 * var_7);
                            var_29 *= (((((arr_16 [i_1] [i_2 + 2] [i_1]) * (arr_16 [i_7] [i_2 + 1] [i_7])))) ? (((!(arr_16 [i_1] [i_2 + 1] [i_7])))) : ((max((arr_16 [i_1] [i_2 - 3] [i_1]), (arr_16 [i_1] [i_2 + 2] [i_7])))));
                        }
                        for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
                        {
                            var_30 ^= 0;
                            var_31 |= (arr_26 [i_1] [i_2] [i_3] [i_6] [i_8]);
                        }
                        var_32 *= (((max(var_13, (arr_12 [i_6 - 3] [i_3] [i_2] [i_1])))));
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            {
                                arr_35 [i_2] = ((!(65526 >= -10587)));
                                var_33 ^= (1 >> 15);
                                arr_36 [i_2] [i_9] [4] [i_3] [i_2 - 2] [i_2] = ((~((~((max(var_0, 34271)))))));
                                arr_37 [i_2] = (max((((var_8 / (arr_33 [i_1] [i_3] [i_9] [i_10])))), ((-(max((arr_31 [i_1] [i_2] [i_3] [i_2] [19]), var_12))))));
                                var_34 ^= ((!((!(((3652458134 ? (arr_9 [i_1] [i_1] [i_9]) : 50)))))));
                            }
                        }
                    }
                }
            }
        }
        arr_38 [i_1] [i_1] |= (-8932 <= 3277257923);
        var_35 = (max(49633, (54 >= var_15)));
    }
    #pragma endscop
}
