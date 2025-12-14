/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_7));
    var_20 = ((((((max(var_2, var_8))) >= (var_17 < var_11))) ? (((var_4 - var_16) ? -var_18 : var_17)) : (max(var_13, (var_18 & var_1)))));
    var_21 ^= (max((((((max(var_7, var_4))) >= (var_11 * var_11)))), (min(var_3, var_0))));
    var_22 = ((23753 ? 63 : -23780));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_23 += var_0;
            var_24 = ((var_0 ? var_9 : var_12));

            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                var_25 += ((var_7 ? var_8 : var_9));
                arr_7 [i_0] [i_0] [i_1] [i_0] = -var_1;
                arr_8 [i_0] [i_2] = ((var_0 ? var_13 : ((var_4 >> (var_6 - 52137)))));
                arr_9 [1] = var_3;
                arr_10 [i_1] [i_1] [i_1] [5] = ((var_8 ? var_2 : var_6));
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                arr_13 [i_0] [i_1] [i_3] [i_3] = var_17;

                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {

                    for (int i_5 = 1; i_5 < 13;i_5 += 1) /* same iter space */
                    {
                        var_26 = ((1 ? 7406811615989760191 : 23753));
                        var_27 = (max(var_27, -var_15));
                        arr_22 [i_0] [i_1] [i_3] [i_0] [i_3] [i_0 - 3] = (((((var_16 ? var_6 : var_6))) ? (var_2 >= 65535) : var_2));
                        var_28 = (0 >= 148);
                        var_29 = ((var_16 ? var_4 : ((var_16 ? var_17 : var_18))));
                    }
                    for (int i_6 = 1; i_6 < 13;i_6 += 1) /* same iter space */
                    {
                        var_30 = (((((var_2 ? var_7 : var_8))) ? var_10 : var_2));
                        var_31 = (var_13 && var_4);
                    }
                    var_32 = (max(var_32, var_9));
                    arr_27 [i_1] [i_1] [i_3] [i_1] [1] = ((var_1 ? var_14 : var_2));

                    for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                    {
                        arr_30 [i_7] [i_7] [i_3] [i_3] [i_1] [i_0 - 4] = var_0;
                        var_33 = (~var_10);
                    }
                    for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
                    {
                        var_34 = var_10;
                        var_35 = var_8;
                        arr_33 [i_3] [i_3] [i_3] [i_3] [i_3] = var_4;
                        var_36 = ((-var_18 ? var_14 : ((-2087 ? 64 : 11039932457719791425))));
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            var_37 = ((-1 ? ((32767 ? var_5 : 7010133211478383413)) : 2141232275));
            var_38 = var_18;
        }
        arr_36 [10] = (((var_9 + var_1) ? var_0 : ((var_7 ? var_2 : var_15))));

        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {

            for (int i_11 = 1; i_11 < 13;i_11 += 1)
            {
                var_39 += (((!var_10) ? (var_3 && var_8) : ((16670808468114712779 ? 11039932457719791442 : 11039932457719791441))));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        {
                            var_40 = (max(var_40, ((var_13 ? var_10 : var_9))));
                            var_41 &= (((var_16 && var_0) ? var_11 : (var_11 != var_16)));
                            arr_46 [2] [2] [i_11] [i_11] [i_11] [7] = (((((var_4 ? var_4 : var_3))) ? var_12 : var_12));
                        }
                    }
                }
                var_42 = ((var_3 ? (((var_16 ? var_2 : var_11))) : ((var_4 ? var_17 : var_18))));
            }
            for (int i_14 = 0; i_14 < 14;i_14 += 1)
            {
                arr_49 [i_14] [12] [i_0 - 3] [i_0] = ((var_11 ? var_2 : var_11));
                /* LoopNest 2 */
                for (int i_15 = 1; i_15 < 1;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 14;i_16 += 1)
                    {
                        {
                            var_43 &= var_5;
                            var_44 = var_8;
                            var_45 = ((var_9 ? ((var_7 ? var_6 : var_10)) : (var_1 < var_3)));
                        }
                    }
                }
                var_46 = ((((var_18 ? var_10 : var_18)) << (var_13 - 1881097115)));
            }
            arr_56 [i_10] = var_9;
        }
        for (int i_17 = 0; i_17 < 14;i_17 += 1)
        {
            var_47 = (((var_0 - var_10) ? var_5 : (~var_1)));

            for (int i_18 = 2; i_18 < 11;i_18 += 1)
            {
                arr_63 [i_18] [i_18] [i_18] [i_18 + 3] = ((var_7 > ((-2076 ? 2147483647 : 42))));
                arr_64 [4] [i_17] [i_0] [i_18 + 2] &= ((var_12 << (var_0 - 37)));
            }
            arr_65 [i_0] [i_17] |= ((var_7 ? -var_2 : ((var_9 ? var_0 : var_15))));
            var_48 = ((var_1 ? var_3 : var_13));
        }
    }
    #pragma endscop
}
