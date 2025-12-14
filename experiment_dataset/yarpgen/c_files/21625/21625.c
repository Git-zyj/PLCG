/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_3 ? ((var_2 * (var_3 / var_0))) : (((((max(var_0, var_9))) ? (~var_5) : var_9)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = ((((((var_2 ? var_10 : var_1))) ? (var_5 / var_5) : (~var_0))));
                    var_12 = -var_2;
                    arr_8 [i_1] [i_2 + 2] [i_1] [i_1] = ((!(((1 ? 30720 : 1)))));
                    var_13 = var_10;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 14;i_5 += 1)
            {
                {
                    var_14 = (max((~var_9), ((var_6 ? var_6 : var_10))));
                    var_15 &= var_0;
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            {
                                var_16 -= (max(var_4, var_8));
                                var_17 = (((max(-8106324335022489717, -9223372036854775798)) + (((-((var_1 ? var_3 : var_0)))))));
                                var_18 = (max(((((min(var_9, 1))))), ((var_0 >> ((var_9 >> (var_5 + 114)))))));
                            }
                        }
                    }

                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        var_19 = (max(var_19, var_1));
                        var_20 = (((-var_3 ? var_0 : var_6)));
                        var_21 = (max(var_21, (281474708275200 < var_2)));
                        arr_23 [i_3] [i_3] [i_3] = (~3742736534);
                    }
                    for (int i_9 = 2; i_9 < 14;i_9 += 1)
                    {
                        var_22 = (min(var_22, var_8));

                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            var_23 += ((((((var_1 - var_8) ? (!var_3) : ((min(var_8, var_1)))))) + ((var_6 ? var_3 : var_10))));
                            var_24 = var_2;
                            var_25 &= var_1;
                            var_26 = (min(((4595655694704845954 << (var_1 - 66))), ((((var_1 ? var_4 : var_9))))));
                            var_27 ^= (((var_5 / var_9) < var_4));
                        }
                        var_28 &= (!-14);
                    }
                    for (int i_11 = 4; i_11 < 13;i_11 += 1)
                    {
                        arr_32 [i_11] = var_0;
                        var_29 |= (((0 ^ 224) - (((var_8 ^ (var_3 < var_10))))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 2; i_12 < 21;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 22;i_13 += 1)
        {
            {
                arr_37 [1] = (min((!2956625703022602881), ((var_1 > ((19 ? 2400606398 : var_8))))));
                arr_38 [i_12] [i_13] = (var_2 ? (~3070629273) : (9231755745892347257 | var_9));
                var_30 += (~var_5);
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 22;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        {
                            arr_43 [i_15] = ((((869 ? var_6 : var_5))));
                            arr_44 [i_15] [20] = (min(3933887432, ((((var_0 <= var_1) == (var_8 < 2956625703022602881))))));
                        }
                    }
                }

                for (int i_16 = 3; i_16 < 20;i_16 += 1)
                {
                    arr_47 [i_16] = (((((var_6 + 2147483647) >> ((((min(var_7, -46))) + 68)))) != ((((~var_8) || ((min(var_0, var_10))))))));
                    arr_48 [i_16] [i_12] [8] = (!777888039);
                    var_31 = (max(var_31, var_1));
                }
                for (int i_17 = 1; i_17 < 20;i_17 += 1)
                {
                    var_32 = (((((min(var_4, var_7)))) > var_0));
                    var_33 += (min((var_1 >= var_9), ((122880 ? var_1 : var_10))));
                    arr_52 [i_17] [i_17] [i_13] [i_17] = -12957796485541908712;
                }
            }
        }
    }
    #pragma endscop
}
