/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            var_19 = (min(var_19, (arr_0 [i_0])));
            arr_4 [i_0] [i_0] = 18446744073709551611;

            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                var_20 = var_9;
                var_21 = (max(var_21, (65534 > 18446744073709551615)));
                /* LoopNest 2 */
                for (int i_3 = 3; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_22 -= -389788862;
                            var_23 = var_17;
                            arr_12 [i_4] [i_3] [i_2] [i_3] [i_3] [i_0] = (((((~389788844) + 2147483647)) >> (var_2 - 37)));
                        }
                    }
                }
                var_24 = ((-389788875 ? ((var_9 ? var_9 : (arr_8 [i_2] [i_2] [i_0] [i_0]))) : ((var_9 ? (arr_6 [i_0] [i_0]) : var_17))));
            }
            for (int i_5 = 1; i_5 < 13;i_5 += 1)
            {
                var_25 = (min(var_25, var_7));

                for (int i_6 = 2; i_6 < 14;i_6 += 1)
                {
                    var_26 = var_6;
                    var_27 = -var_12;

                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        arr_21 [i_0] [i_1] [i_0] [i_6] [i_1] &= (((arr_6 [i_5 - 1] [i_6 - 1]) ? var_3 : var_11));
                        var_28 = (arr_10 [i_5 + 1] [i_1 - 2] [i_6 + 1] [i_5 + 1] [i_6 + 1] [i_5 + 1] [i_6 + 1]);
                        var_29 = ((-(arr_2 [i_7] [i_1])));
                    }
                }
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    var_30 = ((var_3 >= ((var_17 ? 538983050 : var_10))));
                    arr_25 [i_5] [i_5] = -389788845;
                }
                arr_26 [i_5] [i_0] [i_5] = (+-10);
            }
            for (int i_9 = 1; i_9 < 15;i_9 += 1)
            {
                var_31 = (!538983050);

                for (int i_10 = 2; i_10 < 13;i_10 += 1)
                {
                    arr_32 [i_1] [i_1] [i_9] [i_10] [i_9] |= ((538983063 < (-5024691533877853618 % 317840669)));
                    var_32 ^= var_16;
                }
            }
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 16;i_12 += 1)
                {
                    {
                        var_33 = 4;

                        for (int i_13 = 3; i_13 < 13;i_13 += 1) /* same iter space */
                        {
                            arr_41 [i_0] [i_0] [i_11] [i_13] [i_11] = (!1265165662);
                            var_34 = (-9223372036854775807 - 1);
                        }
                        for (int i_14 = 3; i_14 < 13;i_14 += 1) /* same iter space */
                        {
                            var_35 += ((!(arr_23 [i_1] [i_1 - 2] [i_1] [i_1 - 1])));
                            var_36 = (max(var_36, (-51 <= 538983050)));
                            var_37 = var_16;
                        }
                        for (int i_15 = 0; i_15 < 16;i_15 += 1)
                        {
                            var_38 = -118;
                            var_39 = var_15;
                        }
                    }
                }
            }
            var_40 = (min(var_40, ((-(arr_20 [i_0] [i_1] [i_1] [i_1 + 1] [i_1] [i_1] [i_1])))));
        }
        arr_47 [i_0] = (-(37461 + -7957231204338741344));
        var_41 = (min(var_41, (~var_7)));
    }
    for (int i_16 = 4; i_16 < 10;i_16 += 1)
    {
        var_42 = 2143296155965006343;
        var_43 = arr_39 [i_16] [i_16];

        for (int i_17 = 0; i_17 < 12;i_17 += 1)
        {
            var_44 = (15946 ? ((-(min(var_10, var_17)))) : (var_0 - var_2));
            var_45 = (((arr_43 [i_16] [i_17] [i_17] [i_16 - 2]) + ((((min(var_11, -2133346863)))))));
        }
        for (int i_18 = 1; i_18 < 8;i_18 += 1)
        {

            for (int i_19 = 0; i_19 < 12;i_19 += 1)
            {
                arr_57 [i_18] = (min(((~(arr_49 [i_19] [i_19]))), (arr_31 [i_16] [i_18] [i_16])));

                for (int i_20 = 0; i_20 < 12;i_20 += 1)
                {
                    var_46 = ((!(arr_34 [i_16])));
                    arr_61 [i_18] [i_18] = var_14;
                    var_47 = var_18;
                    var_48 = ((((min((max(var_2, var_3)), var_6))) | var_3));
                }
                var_49 = (min(var_49, -389788845));
            }
            for (int i_21 = 0; i_21 < 12;i_21 += 1)
            {
                var_50 = (min((min(389788844, 3755984233)), var_13));
                arr_64 [i_16] [i_18] [i_18] [i_18] &= ((((((-2143296155965006344 ? 15946 : 31051)))) ? -var_18 : (min(43, 0))));
            }
            for (int i_22 = 3; i_22 < 11;i_22 += 1)
            {
                var_51 = (var_13 & var_14);
                var_52 = ((-317840670 | (min(2656952153200141377, (-7185 & var_10)))));
                var_53 = (min(var_53, var_8));
            }
            var_54 = var_15;
        }
    }
    var_55 &= ((((min(((min(-18, -10))), var_6))) ? var_7 : var_16));
    #pragma endscop
}
