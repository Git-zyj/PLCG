/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_13 = (min(((max(32767, (-2147483647 - 1)))), (var_6 + var_2)));
        var_14 = (max((max(var_12, var_0)), ((max(2458384816, 32767)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_8 [i_0 + 1] [i_0] [i_1] [i_2] [i_3] [i_2] = max((max(var_9, var_7)), (var_3 < var_2));
                        arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] = (-32750 * 0);
                        var_15 = (((((((236 - -5078) > var_2)))) != var_11));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 12;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_21 [i_0] [i_0] [i_5] [i_5] [i_6] = (var_12 - 4);
                            var_16 = var_10;
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_17 = (min(4032, 1836582465));
                            var_18 = var_8;
                            var_19 += ((var_2 % (1799434562 ^ -56)));
                            arr_26 [i_0] [i_6] = var_5;
                        }
                        var_20 = (max(var_20, var_3));
                    }
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        var_21 = (max(var_21, ((((min(var_9, var_1)) & (max(var_2, var_8)))))));
                        var_22 += var_6;
                    }
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        var_23 = (((min(var_12, var_2)) | (var_8 - var_4)));
                        arr_32 [i_0] [i_4] [i_4 + 2] [i_5] [i_5] [i_10] = (var_7 != (var_9 != var_9));
                        arr_33 [i_0] [i_4] [i_4] [i_5] [i_10] = (min(var_7, ((((max(var_9, var_11)) != (var_8 ^ var_2))))));
                        arr_34 [i_0] [i_4] [i_4] [i_5] [3] = (max(1050175407, 47582));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_24 = (2038493059835901918 < -5086);
                        var_25 = (var_6 | var_0);
                    }
                    arr_37 [1] [i_4] [i_0 - 2] = ((var_3 * (((((max(var_12, var_9)) == (var_4 == var_9)))))));
                    arr_38 [i_0 + 1] [i_0 + 1] [i_0] = var_11;
                }
            }
        }
    }
    for (int i_12 = 3; i_12 < 22;i_12 += 1)
    {
        var_26 *= var_6;
        var_27 = var_6;
        var_28 = (max(-5078, -5557992886322398763));
        var_29 = (min(var_8, var_3));
    }
    for (int i_13 = 0; i_13 < 22;i_13 += 1)
    {
        var_30 = (3911314848 ^ -9077223535271022281);
        arr_44 [i_13] = var_6;
        arr_45 [i_13] [i_13] = (var_6 == var_6);
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 22;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                {
                    var_31 = (var_9 ^ var_8);
                    arr_50 [i_13] [i_14] [i_15] = (3244791907 <= -6229);
                    arr_51 [i_15] [i_14] [i_13] [i_13] = var_6;
                }
            }
        }
    }
    var_32 = ((min(var_1, (min(var_11, var_5)))) + var_11);

    for (int i_16 = 0; i_16 < 13;i_16 += 1)
    {
        var_33 = (max(var_33, var_8));
        var_34 = (min((var_7 % var_2), (var_6 == var_9)));
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 20;i_17 += 1)
    {

        for (int i_18 = 0; i_18 < 20;i_18 += 1) /* same iter space */
        {

            for (int i_19 = 1; i_19 < 17;i_19 += 1)
            {
                arr_60 [i_17] [i_18] [i_19] = var_1;
                var_35 |= (var_8 != var_9);
            }
            for (int i_20 = 0; i_20 < 20;i_20 += 1)
            {

                for (int i_21 = 0; i_21 < 1;i_21 += 1)
                {
                    var_36 |= var_12;
                    var_37 = var_4;
                    arr_68 [10] [i_20] [i_20] [i_20] = var_8;
                }
                var_38 ^= ((var_12 << (var_3 - 7358089710053416346)));
            }

            for (int i_22 = 2; i_22 < 18;i_22 += 1)
            {
                var_39 = (var_6 ^ var_4);
                var_40 = (var_2 && var_5);
                arr_71 [7] [i_18] = var_7;
            }
            for (int i_23 = 1; i_23 < 19;i_23 += 1)
            {
                var_41 = (min(var_41, (var_2 + var_10)));
                /* LoopNest 2 */
                for (int i_24 = 3; i_24 < 19;i_24 += 1)
                {
                    for (int i_25 = 0; i_25 < 1;i_25 += 1)
                    {
                        {
                            var_42 = (var_8 > var_9);
                            arr_80 [i_17] [i_23] [4] [i_17] [i_25] = (var_11 + var_3);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_26 = 0; i_26 < 20;i_26 += 1)
                {
                    for (int i_27 = 0; i_27 < 20;i_27 += 1)
                    {
                        {
                            arr_86 [i_17] [i_18] [i_23] [i_26] [i_23] = (var_5 != var_11);
                            arr_87 [i_23] [i_23] = (var_9 < var_5);
                            var_43 += var_11;
                            arr_88 [i_23] [i_18] [i_23 + 1] [i_26] [i_26] [2] = (var_11 < var_7);
                            var_44 = (var_4 | var_4);
                        }
                    }
                }
            }
            for (int i_28 = 1; i_28 < 16;i_28 += 1)
            {

                for (int i_29 = 1; i_29 < 19;i_29 += 1)
                {
                    var_45 &= (var_4 || var_3);
                    var_46 = (var_10 && var_7);

                    for (int i_30 = 4; i_30 < 19;i_30 += 1)
                    {
                        var_47 -= (var_7 | var_10);
                        var_48 = (var_10 + var_7);
                        arr_96 [i_30] [i_28] [i_28 + 1] [i_28] [i_17] = (((var_4 | var_4) - (var_2 < var_4)));
                    }
                    for (int i_31 = 0; i_31 < 20;i_31 += 1)
                    {
                        var_49 = var_2;
                        var_50 = (var_2 - var_2);
                        var_51 = var_9;
                        var_52 = (max(var_52, var_12));
                        var_53 = (var_12 | var_9);
                    }
                    for (int i_32 = 0; i_32 < 20;i_32 += 1)
                    {
                        arr_102 [i_29] [i_18] [i_28] [i_29] [i_28] [i_18] [19] = var_6;
                        arr_103 [i_32] [i_28] [i_28] [i_28] [i_17] = var_5;
                    }
                }
                for (int i_33 = 2; i_33 < 19;i_33 += 1)
                {
                    var_54 = (var_7 && var_12);
                    var_55 = (var_5 <= var_12);
                    arr_108 [i_17] [i_18] [i_28] [i_33] = var_11;
                    arr_109 [i_28] [i_18] [i_18] [i_33] = var_5;
                }
                arr_110 [i_28] [i_28] [i_17] = var_0;
            }
            var_56 = var_12;
        }
        for (int i_34 = 0; i_34 < 20;i_34 += 1) /* same iter space */
        {
            arr_115 [6] [6] [i_34] = var_12;
            var_57 = var_0;
            arr_116 [i_17] [18] [6] = (var_11 <= var_0);
        }
        for (int i_35 = 0; i_35 < 20;i_35 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_36 = 1; i_36 < 1;i_36 += 1)
            {
                for (int i_37 = 0; i_37 < 20;i_37 += 1)
                {
                    {
                        arr_125 [6] [i_35] [i_36 - 1] [i_37] &= (var_4 && var_5);
                        var_58 = (max(var_58, (var_3 && var_11)));
                    }
                }
            }
            var_59 -= (var_0 * var_1);
            var_60 &= var_11;
        }
        var_61 &= (var_12 - var_5);
    }
    for (int i_38 = 0; i_38 < 1;i_38 += 1)
    {
        arr_128 [i_38] = ((((min(var_1, var_1))) * (((((min(var_10, var_0))) && var_10)))));
        arr_129 [i_38] [i_38] = (((max(var_5, var_7)) != (((-5557992886322398763 || (-9223372036854775807 - 1))))));
        var_62 = var_5;
    }
    var_63 = var_11;
    #pragma endscop
}
