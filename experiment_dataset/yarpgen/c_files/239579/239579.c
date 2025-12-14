/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [0] = (((((var_15 ? var_5 : var_6))) ? var_11 : ((var_14 ? var_10 : var_3))));
        arr_4 [i_0] [i_0] = ((((min(((var_12 ? var_12 : var_1)), (~32)))) ? (((32767 | 87) ? (max(var_2, var_7)) : (var_10 | var_15))) : ((((~var_7) ? ((var_11 ? var_13 : var_5)) : var_6)))));
        var_16 -= (((((((min(var_5, var_8))) ? -var_2 : (var_10 * var_10)))) ? (((var_11 ? var_5 : -33))) : (((((var_10 ? var_9 : var_10))) * ((var_1 ? var_6 : var_3))))));
        var_17 *= ((((var_6 + ((var_15 ? var_7 : var_2))))) ? var_12 : (((((var_14 ? var_5 : var_5))) + ((var_15 ? var_2 : var_8)))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_18 |= ((-(((var_4 / var_8) ? var_0 : -var_2))));
        arr_7 [i_1] = ((~(((var_13 & var_7) ? ((var_3 ? var_6 : var_8)) : (var_1 | var_2)))));
        var_19 = ((((max((min(var_8, var_14)), var_1))) || (-33 || -3190513361187301191)));
    }
    var_20 = var_6;
    var_21 |= (max((((var_15 ^ var_15) << var_6)), var_9));

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_22 = ((((((((var_3 ? var_4 : var_5))) ? var_14 : (((var_12 ? var_0 : var_7)))))) ? ((var_2 ? var_4 : var_15)) : var_0));
        var_23 = (((var_9 - var_9) - (((((var_4 ? var_4 : var_7))) ? ((var_5 ? var_6 : var_4)) : var_6))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_24 = (max((((var_0 - var_12) ? var_3 : (((max(var_10, var_14)))))), 1232845437));
        var_25 += (((((((var_6 ? var_2 : var_7))) ? ((0 ? var_6 : 225332512)) : var_13)) - var_9));
    }
    for (int i_4 = 3; i_4 < 16;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            arr_16 [i_4] = (((((225332512 ? 12288 : 1))) ? (((((var_5 ? var_0 : var_2))) ? var_0 : ((var_1 ? var_1 : var_10)))) : (min((var_15 ^ var_12), var_1))));
            var_26 += ((-(var_6 + var_1)));
            arr_17 [i_4] [i_4] = (((var_4 * var_9) / var_7));
        }
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            arr_21 [i_4] [i_6] &= ((14916 ^ 1) ? (((var_8 ? var_14 : ((var_4 ? var_11 : var_3))))) : (min(((var_7 ? var_8 : var_12)), (((var_7 ? var_0 : var_0))))));

            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                arr_25 [i_4] [i_4] = (var_15 / var_9);
                arr_26 [i_4 + 2] [i_4] [i_7] = ((((-((var_14 ? var_10 : var_15)))) / (((((var_1 ? var_15 : var_10))) ? (var_9 / var_15) : ((var_0 ? var_15 : var_12))))));
                var_27 &= ((((((var_2 ? var_1 : var_6))) ? (var_4 + var_1) : -var_12)));
                arr_27 [i_4] [i_4] = (1 / -1199414683);
            }
            var_28 *= var_10;
            var_29 = (min(var_29, (0 ^ 1)));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    {
                        arr_36 [i_4] [i_4] [i_9] [i_9] [i_9] [i_9] = ((var_10 ? var_8 : var_9));
                        arr_37 [i_10] [i_10] [i_4] [i_10] = (((var_6 || var_4) && var_13));
                    }
                }
            }
            var_30 = ((var_8 ? (((var_8 ? var_14 : var_0))) : var_8));
        }
        /* LoopNest 2 */
        for (int i_11 = 2; i_11 < 17;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 19;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 19;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            {
                                var_31 = (max(var_31, ((-(((var_9 + var_2) ? var_10 : ((var_0 ? var_6 : var_2))))))));
                                var_32 = (max(var_32, ((~(var_7 | var_13)))));
                                var_33 = (max(var_33, ((((((~((var_1 ? var_11 : var_8))))) ? (min(var_0, (var_15 & var_4))) : ((((var_15 | var_7) | ((var_11 ? var_14 : var_1))))))))));
                                arr_50 [10] [i_11] [i_12] [i_4] [i_14] [i_14] = var_12;
                                var_34 -= (((var_5 | var_15) | ((var_0 ? var_13 : var_9))));
                            }
                        }
                    }

                    for (int i_15 = 2; i_15 < 18;i_15 += 1)
                    {
                        arr_54 [i_15 + 1] [i_15 + 1] [i_4] [i_15 - 2] [i_15 - 2] [i_15 - 1] = var_3;
                        var_35 += ((((((var_5 & var_15) ^ ((var_1 ? var_5 : var_0))))) ? ((var_9 & (var_8 ^ var_8))) : ((((~var_9) | (var_6 ^ var_9))))));
                    }
                    for (int i_16 = 0; i_16 < 19;i_16 += 1)
                    {
                        var_36 += (var_9 - var_3);
                        arr_59 [i_4] [i_11] [i_11 + 1] [i_4] [i_16] = ((1203769189 ? (((~var_4) | (var_0 ^ var_2))) : (((~var_10) | ((var_1 ? var_9 : var_5))))));
                    }
                    for (int i_17 = 0; i_17 < 19;i_17 += 1)
                    {
                        var_37 = ((((var_0 && var_12) || (((var_11 ? var_4 : var_1))))) && ((!(((var_0 ? var_5 : var_5))))));
                        var_38 -= (max(((((((var_6 ? var_10 : var_13))) ? (max(var_1, var_9)) : var_14))), -var_1));
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 19;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 19;i_19 += 1)
                        {
                            {
                                arr_67 [i_4] [i_19] [i_18] [i_4] [i_4] = (((((var_14 ? var_7 : var_5))) ? var_15 : ((var_2 ? var_9 : var_3))));
                                var_39 = (max(var_39, (((var_6 ? ((min((~var_9), (~var_5)))) : (max(((var_10 ? var_8 : var_5)), ((((var_0 + 2147483647) >> (var_12 + 8869)))))))))));
                                var_40 = (min(var_8, (((((max(var_12, var_8))) ? var_13 : (var_10 + var_5))))));
                                var_41 ^= (((((((var_7 ? var_6 : var_15))) || var_2)) || var_5));
                            }
                        }
                    }
                    arr_68 [i_4] = var_14;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_20 = 0; i_20 < 19;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 19;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 19;i_22 += 1)
                {
                    {
                        arr_78 [i_21] [14] [i_20] [i_21] &= var_14;
                        var_42 += (((((((var_7 ? var_2 : var_1))) ? ((var_11 ? var_7 : var_5)) : ((var_6 ? var_3 : var_10))))) ? (!var_4) : (max(var_13, var_11)));
                    }
                }
            }
        }
        var_43 = (max(var_43, 4168131530838553009));
    }
    var_44 = ((((((((var_3 ? var_10 : var_9))) ? (~var_7) : (((var_15 << (var_14 - 241))))))) ? var_3 : (((~(~var_15))))));
    #pragma endscop
}
