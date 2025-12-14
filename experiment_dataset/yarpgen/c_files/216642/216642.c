/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~var_5);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_13 = arr_4 [i_2];
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4 - 2] = (((((-63 ? 10 : var_9))) ? 28 : (~-32)));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                        {
                            var_14 += var_5;
                            var_15 = -var_10;
                            var_16 = (43 * var_3);
                        }
                        for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
                        {
                            var_17 = 110;
                            arr_23 [15] [i_1] [i_1] [i_1] [16] [i_5] [i_1] = (min(((10 ? 31 : 31)), ((var_8 % ((max(var_5, (arr_13 [i_0] [i_0 + 2]))))))));
                        }

                        for (int i_8 = 1; i_8 < 16;i_8 += 1)
                        {
                            var_18 = var_3;
                            var_19 = var_1;
                        }
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            var_20 = ((((max(63, 52))) ? ((~((((arr_25 [i_5]) < 64))))) : ((+((max((arr_22 [3] [i_1] [i_1] [i_1] [i_1]), var_7)))))));
                            arr_28 [i_5] [i_5] [i_5] [i_5] [i_0 + 2] = var_8;
                            arr_29 [i_0] [i_5] [i_1] [15] [15] [i_5] [15] = ((((max(116, 30))) ? -62 : -31));
                        }

                        for (int i_10 = 2; i_10 < 18;i_10 += 1)
                        {
                            arr_32 [i_0 - 2] [i_1] [i_2] [i_5] [i_10] [i_10] [i_5] = var_0;
                            arr_33 [i_10] [i_5] |= (((arr_22 [i_10 - 2] [i_10 + 1] [i_10 - 1] [i_10 - 2] [i_10 + 1]) ? ((min(var_2, -104))) : ((var_7 ? (arr_22 [i_10 - 1] [2] [i_10 + 1] [i_10 - 2] [i_10 + 1]) : var_9))));
                            arr_34 [i_2] [i_2] [i_5] [i_5] = var_0;
                            var_21 ^= max(var_3, (max(-34, var_6)));
                        }
                        for (int i_11 = 2; i_11 < 17;i_11 += 1) /* same iter space */
                        {
                            var_22 = (((arr_5 [i_2] [i_2]) ? (arr_7 [i_0] [i_0] [13] [i_0]) : var_9));
                            arr_37 [i_5] [2] [i_5] [i_5] = (min(((var_4 ? var_0 : var_8)), (arr_14 [i_0] [i_5] [i_0] [i_5])));
                        }
                        for (int i_12 = 2; i_12 < 17;i_12 += 1) /* same iter space */
                        {
                            var_23 = (~103);
                            var_24 = (~var_11);
                        }
                        var_25 ^= (((((((var_2 ? var_4 : 33)) & (~-34)))) ? var_0 : var_5));
                    }
                    for (int i_13 = 0; i_13 < 19;i_13 += 1) /* same iter space */
                    {
                        var_26 *= (((arr_38 [i_0] [i_0] [i_0] [i_0] [i_0 + 4] [i_0]) ? (((arr_38 [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_0] [i_0]) | var_9)) : ((max(31, -126)))));
                        var_27 = ((16 ? -123 : (arr_42 [i_0] [i_0] [i_0] [i_0])));
                        var_28 ^= var_9;
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 19;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 19;i_15 += 1)
                        {
                            {
                                var_29 = ((var_11 ? -var_4 : (arr_48 [i_15] [i_15] [i_2] [i_0 + 1] [i_0 + 1])));
                                arr_51 [0] [9] [0] [i_2] [i_2] [0] [9] = -86;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
