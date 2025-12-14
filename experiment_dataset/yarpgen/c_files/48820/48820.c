/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= ((((((min(31, 0))) ? (((min(-1, var_1)))) : (max(0, 8)))) < (((0 | 65535) ? var_9 : ((var_3 ? var_8 : var_13))))));
    var_18 ^= (((((!1) ? var_9 : ((131071 ? var_1 : (-32767 - 1))))) < var_8));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (min(-5, ((1 ? (((0 << (var_0 + 483489946)))) : var_2))));
        var_20 = -1;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        var_21 = -0;

        for (int i_2 = 1; i_2 < 15;i_2 += 1) /* same iter space */
        {
            var_22 = ((((((arr_5 [i_1]) | -1))) ? (var_15 << var_11) : var_10));
            var_23 = (((arr_2 [i_1 + 2]) >> 12));
        }
        for (int i_3 = 1; i_3 < 15;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 2; i_4 < 16;i_4 += 1)
            {
                var_24 = (max(var_24, ((((arr_8 [i_4] [i_4]) ? 65508 : 0)))));

                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    var_25 = (((((arr_5 [14]) ? 0 : 0)) > (!-32765)));
                    var_26 = ((511 % ((1 + (arr_10 [i_5] [i_1] [i_1 + 2])))));
                    arr_16 [i_1] [i_1] [i_1] [i_1] [i_5] = (i_1 % 2 == zero) ? (((1 << (((arr_6 [i_1] [i_3 + 1] [i_1]) - 17451520604123234482))))) : (((1 << (((((arr_6 [i_1] [i_3 + 1] [i_1]) - 17451520604123234482)) - 17020995319876204565)))));

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_19 [i_1] [i_5] [i_4] [i_3 - 1] [i_3] [i_1] = ((arr_0 [i_4 - 2]) ? (arr_2 [i_1]) : -104);
                        arr_20 [i_6] [i_1] [i_1] [i_1] [i_1] = ((0 == (arr_5 [i_3 - 1])));
                        var_27 = (min(var_27, ((((arr_4 [i_1 + 2]) << (4294967292 - 4294967275))))));
                        var_28 = arr_15 [i_1] [i_3] [i_5];
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        arr_23 [i_1] [i_4] [i_4] [i_5] [i_1] = ((arr_18 [i_4 + 1] [i_5]) || (((63 ? 9 : 1))));
                        var_29 = (((((32764 ? 127 : (arr_15 [6] [6] [i_1])))) ? -9223372036854775784 : var_5));
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                    {
                        var_30 = ((arr_12 [i_4 + 1] [i_4] [i_8]) > (~0));
                        var_31 = (((-127 - 1) ? 0 : 24));
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                    {
                        arr_28 [i_1] [i_3] [0] [i_1] [15] = (arr_26 [15] [i_4 - 1] [i_4] [i_1 + 2] [i_3 - 1] [i_3 - 1]);
                        var_32 = ((0 ? (~0) : (arr_21 [i_1 + 1] [13] [i_1] [i_5] [i_9])));
                        var_33 = ((5 ? (arr_8 [i_1] [i_4 - 1]) : (arr_3 [i_1] [i_3 - 1])));
                        var_34 = 0;
                    }
                }
                for (int i_10 = 3; i_10 < 15;i_10 += 1)
                {
                    var_35 = (arr_3 [i_1] [i_4 - 2]);
                    var_36 = (-1 >= -65531);
                    var_37 = (min(var_37, var_14));
                    var_38 -= ((-(((!(arr_0 [i_1]))))));
                }
                var_39 = (max(var_39, (var_12 & -0)));
                arr_33 [i_1] [i_1] [i_1] [i_1] = (arr_3 [i_1] [1]);
            }
            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                var_40 = (max(var_40, (((-0 ? (4294967287 * 0) : (((0 ? (arr_15 [i_1] [i_3] [3]) : (arr_24 [i_11] [i_11])))))))));
                var_41 = (!var_9);
                arr_38 [i_1] [i_3 + 1] [i_3 + 1] = (arr_10 [i_1] [i_1] [i_11]);
            }
            for (int i_12 = 2; i_12 < 14;i_12 += 1)
            {
                var_42 = (((~var_7) ? 1 : (arr_35 [i_3 + 2] [i_3])));
                var_43 = var_8;
                var_44 = (((((-(-32767 - 1)))) ? (arr_2 [i_1 + 2]) : (~5)));
            }
            var_45 = var_13;
            var_46 = 18446744073709551601;
        }

        for (int i_13 = 0; i_13 < 17;i_13 += 1) /* same iter space */
        {
            var_47 = -2147483623;
            var_48 = 12;

            for (int i_14 = 3; i_14 < 15;i_14 += 1)
            {
                var_49 = (arr_42 [i_13]);
                var_50 ^= 12;
                var_51 = (!(-127 - 1));
                var_52 = var_5;
            }
            for (int i_15 = 2; i_15 < 15;i_15 += 1)
            {
                var_53 = (0 > 1);
                arr_49 [i_1] [i_13] [i_13] [6] = -2147483626;
                var_54 = (arr_43 [i_1] [i_15]);
            }
            for (int i_16 = 0; i_16 < 17;i_16 += 1)
            {
                var_55 -= (arr_45 [i_16]);
                var_56 ^= -8;
                arr_54 [i_1] [i_13] [i_1] = ((-0 ? 244 : var_8));
            }
            for (int i_17 = 0; i_17 < 17;i_17 += 1)
            {
                var_57 = (((arr_26 [i_17] [0] [16] [i_13] [i_1] [i_1]) ? -1 : (arr_5 [i_1 + 2])));
                var_58 = ((((((arr_31 [i_1 + 2] [i_1 + 2]) - 1))) ? (arr_13 [i_1] [i_1 + 1] [8] [4] [i_1 + 1] [i_1 + 2]) : 1));
                var_59 = ((((1 ? 6 : 32762)) * (arr_24 [i_1] [1])));

                for (int i_18 = 0; i_18 < 17;i_18 += 1)
                {
                    var_60 = arr_14 [i_1] [i_13] [i_17] [10];
                    var_61 = 127;
                    var_62 = 0;

                    for (int i_19 = 2; i_19 < 16;i_19 += 1)
                    {
                        var_63 ^= (0 >> 12);
                        var_64 = (+-18446744073709551614);
                    }
                    for (int i_20 = 4; i_20 < 15;i_20 += 1)
                    {
                        var_65 = -var_13;
                        var_66 = (+(((-127 - 1) * 0)));
                        arr_67 [i_1] [i_1] [i_1] [i_1] [i_1] = ((~(arr_7 [i_1 - 1] [i_1 + 2] [i_20 + 2])));
                    }
                    for (int i_21 = 2; i_21 < 16;i_21 += 1) /* same iter space */
                    {
                        var_67 = var_6;
                        arr_70 [i_1] [i_13] [i_17] = var_1;
                    }
                    for (int i_22 = 2; i_22 < 16;i_22 += 1) /* same iter space */
                    {
                        var_68 = ((arr_41 [5] [i_1 + 1]) ? 32767 : (((arr_43 [i_1] [i_1]) ? 27 : 3)));
                        var_69 = (((((var_0 ? 0 : 1))) ? -32756 : -var_0));
                        arr_73 [i_1] [i_13] [i_1] [i_13] [i_1] = -7;
                    }
                }
            }
        }
        for (int i_23 = 0; i_23 < 17;i_23 += 1) /* same iter space */
        {
            var_70 ^= arr_35 [i_23] [i_1 - 1];
            var_71 ^= (arr_47 [i_23] [i_1 + 2] [i_1]);
            arr_77 [i_1] [i_1] = var_7;
        }
        var_72 = (arr_75 [i_1] [12] [i_1]);
        var_73 = ((!(arr_53 [i_1 + 1] [i_1 + 1])));
    }
    #pragma endscop
}
