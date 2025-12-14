/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_12 = var_1;
        var_13 &= (arr_1 [i_0 - 1]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] = ((arr_1 [i_1 - 1]) ? (arr_1 [i_1 - 1]) : var_7);
        var_14 *= (((!var_5) && (arr_3 [0])));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {

        for (int i_3 = 2; i_3 < 17;i_3 += 1)
        {
            var_15 = ((!(arr_7 [i_3 - 2] [i_2] [i_2])));
            arr_10 [i_3] [i_2] = (min((max(8372224, -119)), (((~(arr_6 [i_3 + 1]))))));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {

            for (int i_5 = 1; i_5 < 19;i_5 += 1)
            {
                var_16 = ((((((arr_5 [i_2]) - (arr_13 [8] [i_4] [i_2]))) + (arr_3 [i_4]))));
                var_17 |= ((((max(var_8, var_5))) != (((arr_2 [i_2]) - (((!(arr_2 [i_2]))))))));
            }
            for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
            {
                arr_18 [i_2] [i_2] [i_4] = (((~(arr_11 [i_2] [i_4]))));
                arr_19 [i_4] [i_4] = ((((~((min(119, -38))))) << (var_0 - 2683839059)));
                arr_20 [i_2] [i_2] [i_4] [i_2] = (!-123);
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 18;i_8 += 1)
                    {
                        {
                            var_18 ^= -71;
                            var_19 = ((~(((~var_6) + ((((arr_21 [i_4]) != 1)))))));
                        }
                    }
                }
            }
            for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
            {
                var_20 = ((+((((max((arr_16 [i_2] [12] [i_2] [i_2]), (arr_8 [i_2] [i_4] [i_9])))) ? (arr_0 [i_9]) : (((arr_23 [i_2] [i_2] [i_4] [i_2]) ? (arr_22 [i_2] [i_2] [i_9] [i_2]) : var_10))))));

                for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
                {
                    var_21 = (max((((~(arr_22 [10] [10] [i_9] [i_4])))), (max(var_3, (arr_12 [i_2])))));
                    var_22 &= ((((min(var_4, var_10))) ? (min((arr_25 [i_2] [i_2] [i_4] [14] [i_9] [14]), 9223372036854775808)) : (arr_14 [13] [i_4] [i_4])));
                    var_23 = min((~var_3), -var_6);
                    var_24 = (-120 + 17438848519489725837);
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 20;i_11 += 1) /* same iter space */
                {
                    var_25 = -32767;
                    var_26 = (((arr_14 [i_2] [i_4] [11]) ^ (arr_14 [i_2] [i_4] [i_9])));
                    arr_33 [i_4] [i_4] [i_9] [i_11] = ((-(arr_1 [i_2])));
                    arr_34 [i_4] [17] [i_4] = (arr_0 [i_2]);

                    for (int i_12 = 3; i_12 < 17;i_12 += 1) /* same iter space */
                    {
                        arr_38 [0] [i_2] [6] [i_11] [14] [10] &= (arr_31 [i_12] [i_12 + 2] [i_12 - 2] [i_12 + 1] [i_12 + 2] [i_12 + 2]);
                        arr_39 [i_2] [i_2] [i_2] [i_4] [i_2] [i_2] = (arr_25 [i_2] [i_4] [i_9] [i_11] [7] [i_12 + 3]);
                        var_27 = var_9;
                        var_28 = var_6;
                        arr_40 [i_2] [i_2] [i_2] [i_2] [i_4] = -var_4;
                    }
                    for (int i_13 = 3; i_13 < 17;i_13 += 1) /* same iter space */
                    {
                        var_29 = (-(arr_43 [i_2] [i_4] [i_9] [1] [i_13 + 2]));
                        var_30 = (-((var_6 + (arr_22 [i_2] [i_2] [i_9] [i_4]))));
                        var_31 = ((arr_43 [i_13 + 2] [i_13 + 1] [i_13 - 2] [i_13 - 2] [i_13 - 3]) + (arr_31 [i_2] [i_2] [13] [i_11] [i_11] [i_9]));
                        var_32 = (((arr_32 [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_13 - 3]) ^ (!var_10)));
                        arr_45 [i_2] [i_4] [i_9] = (arr_36 [i_2] [i_2] [i_2] [8] [2] [i_2]);
                    }
                }
                for (int i_14 = 2; i_14 < 18;i_14 += 1)
                {
                    var_33 *= ((-(((arr_3 [i_2]) ^ (((max(var_4, var_2))))))));
                    var_34 = (min(var_34, ((((arr_41 [3] [i_14 + 1] [i_14 - 2] [i_14 - 2] [i_14 - 2]) | ((min((arr_41 [16] [i_14 - 2] [i_14 - 2] [8] [i_14 + 2]), (arr_41 [i_14 + 1] [i_14 + 1] [i_14 - 2] [i_14 - 1] [i_14 + 1])))))))));
                }
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    var_35 = (((arr_0 [i_2]) + (arr_31 [i_9] [i_4] [1] [i_15] [i_15] [i_2])));
                    var_36 = var_9;
                    var_37 = (((((-(arr_37 [1] [i_9] [i_2])))) + (min(var_11, (arr_37 [i_2] [i_2] [i_2])))));
                    arr_50 [i_4] = (1 - 3306209009);
                }
            }
            var_38 = (max(-5317917243390787744, 3306209009));
        }
        var_39 = (52 <= 228);
    }

    /* vectorizable */
    for (int i_16 = 3; i_16 < 16;i_16 += 1)
    {
        /* LoopNest 3 */
        for (int i_17 = 1; i_17 < 1;i_17 += 1)
        {
            for (int i_18 = 3; i_18 < 18;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 19;i_19 += 1)
                {
                    {
                        arr_62 [i_16 + 2] [i_17 - 1] [i_18 - 1] [i_19] &= ((!(!var_5)));
                        var_40 = (arr_15 [i_16 + 1] [i_18] [16]);
                        var_41 = ((0 ? 16051498256947580899 : (~-20034)));

                        for (int i_20 = 0; i_20 < 19;i_20 += 1)
                        {
                            var_42 = var_9;
                            arr_67 [i_17 - 1] [i_18] = (~1);
                            var_43 += (arr_15 [i_17 - 1] [i_19] [i_17 - 1]);
                            var_44 = ((!(arr_9 [i_16 - 2])));
                            var_45 = var_11;
                        }
                    }
                }
            }
        }
        var_46 &= (((((~var_7) + 2147483647)) >> (var_2 + 2024)));

        for (int i_21 = 0; i_21 < 1;i_21 += 1)
        {
            var_47 = (!(arr_9 [i_16 + 2]));
            arr_70 [i_21] [i_16 + 2] = (1738384181 && 0);
            var_48 = ((-((-(arr_1 [i_21])))));
        }
        for (int i_22 = 0; i_22 < 19;i_22 += 1)
        {
            /* LoopNest 2 */
            for (int i_23 = 1; i_23 < 15;i_23 += 1)
            {
                for (int i_24 = 3; i_24 < 18;i_24 += 1)
                {
                    {
                        arr_79 [3] [i_24] [i_23 + 2] [i_22] [i_16 + 3] [3] = ((((arr_44 [i_16 + 1] [i_24 + 1] [i_24 + 1] [i_24 - 3] [i_23 + 4] [i_16 - 1]) + 2147483647)) << (((((arr_44 [i_16 - 3] [i_22] [i_23] [i_24 + 1] [i_23 + 2] [i_16 + 2]) + 1852656690)) - 14)));
                        arr_80 [10] [i_22] [i_22] [i_22] = var_7;
                    }
                }
            }

            for (int i_25 = 0; i_25 < 19;i_25 += 1)
            {
                var_49 = (arr_73 [i_16 - 3] [i_22] [6]);
                var_50 = var_5;
                arr_84 [i_22] &= ((!(arr_74 [i_16 + 2] [1])));
                var_51 = (min(var_51, (arr_47 [i_16 - 2] [13] [i_16 - 2] [i_22] [i_22] [13])));
                /* LoopNest 2 */
                for (int i_26 = 0; i_26 < 19;i_26 += 1)
                {
                    for (int i_27 = 0; i_27 < 19;i_27 += 1)
                    {
                        {
                            var_52 = (max(var_52, ((((arr_73 [i_16 + 3] [i_16 + 3] [i_16 + 3]) + (arr_73 [i_16 + 3] [i_16 + 3] [i_16 + 3]))))));
                            var_53 = (((~(arr_56 [i_22] [i_25] [i_22]))));
                            var_54 |= (((arr_83 [i_22] [i_16 + 3] [i_16 - 1]) ? (arr_28 [i_16 - 1] [i_22]) : var_10));
                            arr_89 [i_26] [i_26] [i_26] |= (arr_46 [i_16 + 2] [i_22] [i_25] [i_25]);
                            var_55 -= ((((var_6 ? var_10 : var_10)) > (arr_12 [8])));
                        }
                    }
                }
            }

            for (int i_28 = 0; i_28 < 19;i_28 += 1)
            {
                var_56 = ((-(arr_3 [i_28])));
                var_57 = (min(var_57, -var_5));
                arr_92 [i_16 - 3] [i_22] [i_22] [i_22] = (arr_72 [i_16 + 2]);
            }
            var_58 = (min(var_58, var_3));
        }
    }
    var_59 = var_2;
    #pragma endscop
}
