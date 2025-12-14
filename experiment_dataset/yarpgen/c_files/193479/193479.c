/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((var_8 ? ((var_1 ? var_12 : var_15)) : -30931))) ? (!var_10) : var_17));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_21 = (((((-24 ? 0 : var_14))) ? (((var_7 ? (arr_1 [i_3] [i_2]) : (arr_3 [6] [6] [i_4])))) : (((arr_11 [i_0 + 1] [i_1] [i_2] [i_3] [i_4]) ? (arr_11 [i_0 + 4] [i_1] [i_2] [i_3] [i_4]) : var_0))));
                                arr_12 [i_4] [i_3] [i_2] [i_1 - 1] [i_0] = ((236 ? 980476963 : 3190406077));
                                var_22 = ((84 ? var_18 : 4974807029341263904));
                                var_23 = (max(var_23, (1104561217 + 3190406077)));
                                var_24 = 2147483642;
                            }
                        }
                    }
                    var_25 = (((arr_6 [i_1 - 4]) ? 2 : 252));
                    var_26 ^= ((4573480633555520667 ? 123 : ((12949434011294471614 ? -2147483642 : var_3))));
                    var_27 -= (((arr_0 [i_2]) ? 53 : var_6));
                    var_28 = (min(var_28, (((var_9 ? var_2 : (arr_4 [i_0 - 1] [i_0 - 1] [i_2]))))));
                }

                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_29 = (min(var_29, (((17573 ? -4573480633555520668 : 20)))));
                                var_30 = ((-(((arr_15 [i_0] [4] [i_0]) ? (arr_15 [i_7] [i_5] [i_1]) : (arr_15 [i_6] [i_5] [0])))));
                                arr_21 [9] [i_0 + 4] [10] [i_5] [i_6] [i_7] = ((((((arr_8 [i_0] [i_0 - 1] [i_6] [8] [i_6] [i_6]) - var_0))) ? (((arr_8 [i_0] [i_0 + 3] [7] [i_5] [i_5] [i_7]) ? var_6 : (arr_8 [i_0 + 3] [i_0 + 1] [i_6] [i_7] [i_7] [i_7]))) : (1104561208 ^ var_7)));
                                arr_22 [i_6] = (((((0 ? (!282610264) : 20))) ? 13224322807460252886 : (((250 ? 24 : ((1 ? 1 : (-9223372036854775807 - 1))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 4; i_8 < 9;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            {
                                var_31 = ((4573480633555520647 ? ((~(arr_4 [i_0] [i_1 - 3] [i_8 + 4]))) : ((var_16 ? var_10 : (arr_7 [i_1 - 2] [i_1] [i_1] [i_1])))));
                                var_32 = ((1104561206 + ((1 ? 126 : 18446744073709551615))));
                                var_33 = 1;
                                arr_28 [10] [i_0] [i_1 + 1] [i_5] [i_8 + 2] [i_9] = ((((((~(arr_27 [i_0 + 3] [i_1 - 3] [i_1 - 3]))) + 2147483647)) << ((((((-127 - 1) ? var_7 : 1348007711))) - 31))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
