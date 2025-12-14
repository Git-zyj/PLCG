/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_19 = -21;
        arr_2 [i_0] = (max(((!(((255 ? 1 : 67))))), (!var_8)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [i_0] [i_4] = (min(((min(var_10, var_13))), (min(14492247677583647786, 20))));
                                var_20 = ((max(var_16, var_14)));
                                var_21 = 3401793772;
                                arr_15 [i_4] [i_2] [i_3 + 1] &= ((((!((max(-26, (-2147483647 - 1)))))) ? ((max(1, 0))) : (max((~2), -8))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        arr_19 [i_0] = (max(3401793772, 3954496396125903853));

                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_22 = ((-((-(max(0, var_7))))));
                            var_23 = (max(var_23, ((min(((~(min(511, 16902)))), (~127))))));
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_24 = (-9223372036854775807 - 1);
                            var_25 = (min((max((max(-1107547622, var_12)), 13)), (max(2147483647, var_5))));
                            arr_26 [i_0] [i_1] [i_1] [i_5] [i_5] [i_0] = ((~(min((max(1469819979, 0)), (((-21 ? 2047 : -16902)))))));
                            arr_27 [i_0] [i_0] [i_1] [i_2] [i_0] [i_2] [i_7] = (max(((((max(var_3, -4))) ? (~var_4) : -2449472566747294953)), (max(var_11, (~-427001108452885202)))));
                        }
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            arr_31 [i_0] [i_0] [2] [2] = (min(-32164, 3802269894));
                            arr_32 [i_0] [i_5] [i_2] [i_0] [i_8] &= var_5;
                            arr_33 [i_0] [10] [i_0] [i_0] [i_0] = (max(((min(151778513, (max(var_4, var_14))))), (max((min(6512536554632849857, 1)), 6))));
                            var_26 = -2;
                        }
                    }
                    for (int i_9 = 3; i_9 < 11;i_9 += 1)
                    {

                        for (int i_10 = 3; i_10 < 12;i_10 += 1)
                        {
                            var_27 = var_11;
                            var_28 = ((max(var_13, 32762)));
                        }
                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            var_29 = max(var_2, (max((min(var_14, var_14)), 3802269894)));
                            arr_43 [i_0] [i_2] = (!((min(var_12, var_16))));
                            arr_44 [i_0] [i_0] [i_0] [i_9] [i_11] = 43123;
                        }
                        for (int i_12 = 2; i_12 < 13;i_12 += 1)
                        {
                            var_30 = (max(var_30, -28672));
                            var_31 *= ((min(28672, var_14)));
                            arr_48 [i_0] [i_0] [i_0] [i_2] [i_2] [i_9] [12] = (((!1) ? 1 : 16384));
                        }

                        for (int i_13 = 0; i_13 < 14;i_13 += 1)
                        {
                            arr_51 [i_0] = ((-(max(124, 692562617))));
                            var_32 = (max(var_32, 427001108452885184));
                            arr_52 [i_0] [i_0] = ((-1924157903 ? 2497488532 : (max(0, (min(var_14, var_13))))));
                        }
                        for (int i_14 = 0; i_14 < 14;i_14 += 1)
                        {
                            arr_56 [i_14] [i_0] [i_2] [i_0] [i_0] = ((-(min((max(var_11, var_16)), 120))));
                            var_33 -= (~1);
                            arr_57 [i_0] [i_0] [i_1] [i_0] = (max((max(2098, 766856547481477541)), -var_3));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
