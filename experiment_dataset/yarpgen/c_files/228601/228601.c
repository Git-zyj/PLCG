/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = 1;
        arr_3 [i_0] [i_0] = (((arr_0 [i_0 - 1]) || var_3));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 18;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {
                arr_16 [i_1] [i_1] [i_2] [i_3] = ((+(((arr_1 [i_1]) + (arr_10 [i_2 + 1])))));
                arr_17 [i_1] [i_1] = ((((var_9 >> (var_10 + 64))) | (arr_13 [i_1 + 1])));
            }
            var_15 = (min(var_15, var_13));
        }
        for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                var_16 += ((var_4 == (arr_12 [i_5] [i_4])));

                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    var_17 = (max(var_17, ((((arr_19 [i_6]) <= (88 % var_8))))));
                    arr_25 [i_1] [i_4] [i_5] [i_6] [9] = (3097712413 >= 18156937843041825353);
                    arr_26 [i_1] [i_1] [i_1] [i_5] [i_6] = (((~var_13) || (arr_11 [i_1] [i_4] [i_1])));
                }
                arr_27 [i_1 - 1] [i_1] [i_5] = ((-((~(arr_8 [i_1])))));
            }

            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    var_18 = (~(arr_8 [i_1]));
                    var_19 = (max(var_19, (~var_1)));
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        {
                            arr_36 [i_10] [i_1] [i_1] [i_1] [i_1] = 2;
                            var_20 = (min(var_20, ((((var_9 / var_4) ? (((arr_15 [i_4] [i_4]) % var_10)) : (var_6 < var_13))))));
                        }
                    }
                }
            }
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                var_21 = (-(arr_1 [i_1 + 2]));
                arr_41 [i_1] [i_1] [i_1] [i_1] = (!1);
            }
            for (int i_12 = 0; i_12 < 20;i_12 += 1)
            {
                arr_46 [i_1 + 1] [i_4] [i_4] [i_12] &= (~var_1);
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        {
                            var_22 -= ((-(!54)));
                            var_23 = (((17404890106714150705 ? 104 : 10)));
                        }
                    }
                }

                for (int i_15 = 0; i_15 < 20;i_15 += 1)
                {
                    var_24 *= (127 * 1);
                    var_25 = -54;
                    var_26 = ((~(arr_30 [i_1])));
                }
                arr_54 [i_1 - 1] [i_1 - 1] [i_12] [i_1] = (((39 + 20025) != ((var_11 ? var_11 : -38))));
            }
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 20;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 20;i_17 += 1)
                {
                    {

                        for (int i_18 = 2; i_18 < 17;i_18 += 1)
                        {
                            var_27 = ((-97 ? 263559620 : var_4));
                            var_28 -= (((arr_8 [i_16]) ? -73 : -2144242127));
                            arr_63 [i_1] [i_4] [i_1] [i_1] [i_17] [i_18] = (arr_14 [i_1]);
                            arr_64 [i_1] [i_17] [i_4] [i_4] [i_4] [i_1] = (118 == 0);
                            var_29 += (((var_7 >> (((arr_37 [i_18 + 2] [i_16] [i_16] [i_1]) - 45278)))));
                        }
                        var_30 ^= 0;
                        var_31 &= (arr_4 [i_4]);
                        var_32 = ((((-(arr_10 [i_1]))) ^ var_2));
                        var_33 += (arr_0 [i_16]);
                    }
                }
            }
            arr_65 [i_1] = ((0 ? -109 : 1));
        }
        for (int i_19 = 0; i_19 < 20;i_19 += 1) /* same iter space */
        {
            var_34 = (max(var_34, (((~(arr_29 [i_1 + 1] [i_19] [i_19] [i_1 + 1]))))));
            arr_68 [i_1] [i_1] = var_3;
            arr_69 [i_1] [i_1] [i_19] = ((-(arr_47 [i_1] [i_19] [i_19] [i_19])));
            arr_70 [i_19] [i_1] [i_1 + 2] = ((~((var_6 ? var_1 : -1))));

            for (int i_20 = 1; i_20 < 18;i_20 += 1) /* same iter space */
            {

                for (int i_21 = 2; i_21 < 19;i_21 += 1)
                {
                    var_35 = (((arr_33 [i_21 - 2] [1] [i_1] [i_1 + 2] [i_1]) ? ((((arr_20 [i_1] [i_1] [i_1]) == (arr_66 [i_1] [i_19] [i_19])))) : (arr_34 [i_20] [i_20 + 2] [i_20 + 1] [i_20] [i_1])));
                    var_36 = (!var_8);
                }
                var_37 = (!4279);
                var_38 = (!var_8);
                arr_76 [i_1] [i_19] [i_1] = 62;
                /* LoopNest 2 */
                for (int i_22 = 3; i_22 < 18;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 20;i_23 += 1)
                    {
                        {
                            var_39 = (~var_11);
                            var_40 ^= (-110 + var_3);
                        }
                    }
                }
            }
            for (int i_24 = 1; i_24 < 18;i_24 += 1) /* same iter space */
            {
                var_41 = ((-(arr_14 [i_1])));
                var_42 = ((2 ? (!var_4) : var_0));
                var_43 = 3;
            }
        }
        for (int i_25 = 0; i_25 < 20;i_25 += 1)
        {
            arr_86 [i_1] [i_25] [i_1] = 104;
            var_44 = (arr_37 [i_25] [i_25] [i_1] [i_25]);
            var_45 = -1;

            for (int i_26 = 0; i_26 < 20;i_26 += 1)
            {
                arr_89 [i_1] = ((((var_2 ? (arr_53 [i_1 - 1] [i_1] [i_1] [i_1]) : (arr_39 [i_1 + 2]))) >= 0));
                var_46 ^= (arr_83 [i_1 - 1] [i_1 + 2] [i_1] [i_1 + 2]);
            }
            for (int i_27 = 0; i_27 < 20;i_27 += 1)
            {
                var_47 = ((-(arr_55 [i_1])));
                var_48 = (((arr_19 [i_1]) || var_5));
                var_49 = (min(var_49, (((((-118 ? 9201 : 0)) / (arr_87 [i_1] [i_27]))))));
                var_50 = (arr_53 [i_1] [i_1] [i_1] [i_1]);
            }
            var_51 = (((var_8 != 16) & ((-9202 ? var_14 : var_0))));
        }
        arr_93 [i_1] = ((~((var_2 ? 7689156790553380921 : var_14))));
        arr_94 [i_1] = (3340468656370025399 == -9202);
        var_52 = (min(var_52, (((65535 + (arr_34 [i_1] [i_1] [i_1] [i_1] [10]))))));
    }
    var_53 = (max(var_3, (var_9 / var_2)));
    var_54 = (((-39 ? 1 : 224)));
    #pragma endscop
}
