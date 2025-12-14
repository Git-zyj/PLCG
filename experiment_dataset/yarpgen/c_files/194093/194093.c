/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((2091087523 - var_12) * (((1 ? var_16 : var_19)))));
    var_21 = (max(var_21, (-2147483647 - 1)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
            {
                var_22 -= var_7;

                for (int i_3 = 1; i_3 < 16;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 1; i_4 < 15;i_4 += 1)
                    {
                        var_23 = -2147483642;
                        var_24 ^= (var_5 <= var_6);
                        var_25 = (max(var_25, (((20299 ? (-32767 - 1) : -3495777354913825291)))));
                    }

                    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                    {
                        var_26 = var_8;
                        var_27 = (max(var_27, (var_3 / 3495777354913825290)));
                    }
                    for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                    {
                        var_28 = (-var_11 & 4398046511104);
                        var_29 = (max(var_29, var_0));
                        var_30 = (min(var_30, (3495777354913825290 ^ 3495777354913825280)));
                    }
                    var_31 = (2147483647 || var_18);
                }
                for (int i_7 = 1; i_7 < 16;i_7 += 1) /* same iter space */
                {
                    arr_21 [i_0] [i_0] [i_0] [i_0] [14] [i_0] = 4294967285;
                    var_32 = (max(var_32, ((2147483647 ? var_17 : var_14))));
                }
                for (int i_8 = 1; i_8 < 16;i_8 += 1)
                {
                    var_33 ^= (((-2147483647 - 1) - (var_5 - var_9)));

                    for (int i_9 = 3; i_9 < 13;i_9 += 1)
                    {
                        var_34 *= (27691 | 768481284);
                        var_35 = var_0;
                        var_36 = (((var_15 != 768481284) / 4294967280));
                    }
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        arr_31 [i_0] [i_1] [i_8] [i_8] [i_0] = (2147483647 | var_5);
                        var_37 = (min(var_37, ((((var_17 >= var_8) << ((((var_14 ? 10186 : var_6)) - 10161)))))));
                        arr_32 [i_8] [i_2] [i_2] [8] = (-9223372036854775807 - 1);
                    }
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        var_38 = (!var_8);
                        var_39 -= (((-32767 - 1) ? 29947 : (-32767 - 1)));
                        arr_35 [i_8] [i_8] [i_2] [i_2] [i_2] = ((-69 >= (((-32767 - 1) ? 1129991891 : -9223372036854775806))));
                        var_40 = (3495777354913825290 ? 2834958098284996533 : 6144);
                    }
                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        var_41 = (min(var_41, 24381));
                        arr_38 [13] [i_8] [i_8] [i_2] [i_1] [i_8] [i_0] = ((~(69 ^ -42)));
                        arr_39 [i_0] [i_1 + 2] [i_1] [i_1] [i_8] [i_8] = var_12;
                        var_42 = ((-69 >= -17706) | var_10);
                    }
                    var_43 = ((!(((3945441909 ? 1129991891 : 0)))));

                    for (int i_13 = 0; i_13 < 17;i_13 += 1)
                    {
                        var_44 ^= (-34 != 17236188058116322157);
                        var_45 = var_6;
                        var_46 = (max(var_46, var_3));
                    }
                }
            }
            for (int i_14 = 0; i_14 < 17;i_14 += 1) /* same iter space */
            {
                arr_46 [i_14] [10] [i_0] |= 0;
                var_47 = -69;
            }
            var_48 -= ((var_12 ? 17236188058116322150 : 69));
        }
        for (int i_15 = 0; i_15 < 17;i_15 += 1)
        {
            var_49 = var_12;
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 17;i_16 += 1)
            {
                for (int i_17 = 3; i_17 < 14;i_17 += 1)
                {
                    {
                        var_50 &= var_9;
                        var_51 = (var_6 + var_1);
                    }
                }
            }
            arr_56 [i_0] [i_15] = var_3;
        }
        for (int i_18 = 1; i_18 < 16;i_18 += 1)
        {
            var_52 = (max(var_52, (-32767 - 1)));
            var_53 = (max(var_53, var_6));
            var_54 = -58;

            for (int i_19 = 0; i_19 < 17;i_19 += 1)
            {
                var_55 = (min(var_55, (!15611785975424555083)));
                var_56 = (min(var_56, (var_8 < var_7)));
            }
            for (int i_20 = 0; i_20 < 17;i_20 += 1)
            {
                var_57 -= 18446744073709551615;

                for (int i_21 = 0; i_21 < 17;i_21 += 1)
                {
                    arr_69 [i_21] [i_18] [i_18] [13] = -69;

                    for (int i_22 = 0; i_22 < 17;i_22 += 1)
                    {
                        var_58 += ((36 ? (1 < var_1) : var_18));
                        arr_72 [i_0] [i_0] [16] [i_0] [i_0] [i_18] = -76;
                        var_59 = (-3495777354913825291 % 9223372036854775781);
                    }
                    for (int i_23 = 2; i_23 < 13;i_23 += 1)
                    {
                        var_60 = ((var_3 ? var_8 : var_12));
                        var_61 = (33292288 - var_4);
                    }
                }
                for (int i_24 = 0; i_24 < 17;i_24 += 1)
                {

                    for (int i_25 = 1; i_25 < 13;i_25 += 1) /* same iter space */
                    {
                        arr_82 [i_0] [i_18] [i_24] [i_24] [i_18] = 1210556015593229466;
                        var_62 = ((1764934139 / (13362600356880689 - var_19)));
                    }
                    for (int i_26 = 1; i_26 < 13;i_26 += 1) /* same iter space */
                    {
                        var_63 = (((var_14 & 4248732587577780103) <= var_5));
                        var_64 = (2147483647 > var_6);
                    }
                    var_65 = (min(var_65, var_13));
                    var_66 += var_12;
                }
            }
        }

        for (int i_27 = 0; i_27 < 17;i_27 += 1)
        {
            var_67 = (min(var_67, var_8));
            var_68 *= (((11500 | var_12) % var_1));
            var_69 = 17236188058116322143;
            var_70 = (min(var_70, var_1));
        }
    }
    /* LoopNest 3 */
    for (int i_28 = 1; i_28 < 19;i_28 += 1)
    {
        for (int i_29 = 0; i_29 < 20;i_29 += 1)
        {
            for (int i_30 = 2; i_30 < 17;i_30 += 1)
            {
                {
                    arr_95 [i_28] [11] [i_28] [i_30] = var_12;
                    var_71 ^= ((var_6 % ((min(4194303, var_5)))));
                }
            }
        }
    }
    #pragma endscop
}
