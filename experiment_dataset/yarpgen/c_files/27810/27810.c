/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((((var_7 ^ var_14) ? var_7 : var_3)), (!var_16)));
    var_21 -= var_3;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_22 |= (((var_1 ? var_3 : 35184372088831)));
                arr_5 [i_1] [i_1] = (var_8 / 65535);
                var_23 += (var_16 % var_14);
                arr_6 [i_1] = 35184372088835;

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    arr_10 [i_0] [i_1] [i_1] = var_12;
                    var_24 = (max(var_24, (((var_16 ? 11 : 2147483647)))));
                    var_25 = (-127 - 1);
                    arr_11 [i_2] [i_1] [i_1] [i_0] = ((min((((0 ? var_10 : var_11))), (243 | var_19))));
                }
                for (int i_3 = 2; i_3 < 7;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 9;i_5 += 1)
                        {
                            {
                                arr_18 [i_0] [i_0] [i_1] [i_3] [i_1] [i_5 - 1] = (((var_8 + var_6) / ((var_10 ? var_17 : var_5))));
                                arr_19 [i_5 - 3] [i_1] [i_5 - 3] = ((17 ? ((var_11 + (var_5 - 2147483647))) : (((29 - var_10) - 239))));
                                var_26 ^= (var_3 * 32760);
                                var_27 += var_9;
                            }
                        }
                    }

                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        arr_23 [i_0 - 1] [2] [i_1] = ((var_2 * ((13711676226422522239 ? 3151174193302662346 : 13711676226422522256))));
                        arr_24 [i_0] [i_1] [i_1] [i_6] [i_3] = var_3;

                        for (int i_7 = 1; i_7 < 7;i_7 += 1)
                        {
                            var_28 -= 12288;
                            var_29 = (((((((var_0 * (-127 - 1)))) ? var_19 : var_2)) * var_11));
                        }
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            var_30 |= var_13;
                            var_31 = var_9;
                            var_32 = ((((min(var_0, (-127 - 1)))) ? var_3 : ((var_16 ? (9 && 6149) : (11 || 4294967285)))));
                            arr_30 [i_0] [i_1] [i_1] [5] [3] [i_0 - 1] = var_10;
                            var_33 = var_2;
                        }
                        for (int i_9 = 3; i_9 < 6;i_9 += 1)
                        {
                            var_34 ^= (((var_2 << (var_8 - 214823421))));
                            arr_34 [i_1] [i_6] [i_1] = var_18;
                            arr_35 [i_0] [i_1] [i_0 - 1] [i_1] [i_9] = ((var_18 | (((var_4 ? var_18 : var_12)))));
                        }
                        var_35 = (((var_6 * var_3) | ((var_15 ? ((var_11 >> (var_16 - 4748))) : -32756))));

                        for (int i_10 = 1; i_10 < 1;i_10 += 1)
                        {
                            var_36 = (max(var_36, var_18));
                            arr_38 [i_0] [i_1] [i_3 + 1] [i_6] [i_10 - 1] [i_10] [i_10] = var_13;
                            arr_39 [i_1] [i_1] [i_3] [i_0] [i_0 - 1] [i_3] [i_1] &= -1;
                        }
                        for (int i_11 = 1; i_11 < 1;i_11 += 1)
                        {
                            var_37 |= (var_8 + var_15);
                            var_38 = var_14;
                            arr_43 [i_0 + 1] [i_1] [i_3] [i_1] [4] = var_6;
                            var_39 = (min(var_39, ((max(var_3, var_17)))));
                        }
                    }
                    for (int i_12 = 2; i_12 < 8;i_12 += 1)
                    {
                        var_40 += (((var_11 ? 32752 : var_14)) - ((0 ? 2147483647 : ((var_9 ? var_2 : var_18)))));

                        /* vectorizable */
                        for (int i_13 = 1; i_13 < 6;i_13 += 1)
                        {
                            var_41 = -1;
                            arr_48 [i_1] [i_1] [i_3] [i_12] [i_0] [i_1] = 4026509752081514679;
                        }
                        /* vectorizable */
                        for (int i_14 = 1; i_14 < 6;i_14 += 1)
                        {
                            arr_51 [i_14 - 1] [i_12] [i_1] [i_1] [i_0 - 2] = var_8;
                            var_42 |= var_7;
                        }
                        for (int i_15 = 2; i_15 < 9;i_15 += 1)
                        {
                            var_43 = (min(var_43, (((64 * ((16 ? -25491 : 235)))))));
                            var_44 = (((var_18 && var_2) ? var_9 : ((var_12 ? var_19 : ((var_17 ? var_10 : 31))))));
                        }
                        /* vectorizable */
                        for (int i_16 = 1; i_16 < 9;i_16 += 1)
                        {
                            var_45 -= (var_13 == -32765);
                            var_46 = (var_10 & 11);
                        }
                        var_47 = ((((25491 ? var_6 : -1)) << (((~var_7) + 266))));
                        var_48 ^= (-2147483647 - 1);
                    }
                    for (int i_17 = 1; i_17 < 6;i_17 += 1)
                    {
                        arr_59 [i_1] [i_3 + 3] [i_17] = var_1;
                        arr_60 [i_1] [i_1] [i_3] [5] = (min(((var_9 ? (1006632960 + -29614) : var_10)), (1 || -1)));
                        var_49 = var_11;
                        var_50 = ((-(32759 + 2)));
                        var_51 |= (((var_14 || var_11) - var_8));
                    }
                    for (int i_18 = 0; i_18 < 10;i_18 += 1)
                    {
                        var_52 = (max(var_52, ((((var_6 + var_13) % var_10)))));
                        var_53 = (!var_11);
                        var_54 ^= ((((var_14 + var_4) ? (((-1 ? var_17 : var_16))) : ((25500 ? var_18 : var_19)))) % var_12);
                    }
                    arr_64 [i_1] = var_17;
                }
            }
        }
    }
    var_55 = (max(var_55, (((((((var_17 ? var_13 : var_0)))) ? var_6 : (var_16 | var_19))))));
    #pragma endscop
}
