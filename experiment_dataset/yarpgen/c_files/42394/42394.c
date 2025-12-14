/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += ((~(((min(34, var_15))))));
    var_19 ^= ((var_4 >> (((max((var_1 % var_14), (var_1 / var_10))) - 215))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, 22655));
                                var_21 = (arr_7 [i_1] [i_1] [i_4]);
                            }
                        }
                    }
                    var_22 += ((min((max((arr_2 [i_0] [i_1]), var_11)), (arr_8 [i_1] [i_2]))));
                    var_23 = (min(var_23, (!var_0)));
                }
                for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                {
                    var_24 *= (max((arr_15 [i_0] [i_0]), (max(((18446744073709551615 ? var_2 : -15102)), var_16))));
                    var_25 ^= var_2;
                    var_26 ^= 0;
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                {
                    var_27 = (((arr_16 [i_0] [i_0] [i_0] [i_0]) & (arr_7 [i_0] [i_0] [i_0])));
                    var_28 = ((((arr_6 [i_6]) ? var_16 : (arr_10 [i_1] [1] [i_1] [i_0] [i_0]))));

                    for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                    {
                        var_29 = (min(var_29, (((~(arr_14 [i_0] [i_1] [i_6]))))));
                        var_30 += ((arr_10 [i_0] [8] [i_1] [i_6] [i_7]) ? (arr_10 [i_6] [i_1] [i_6] [i_7] [i_1]) : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]));
                        var_31 = (((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0])));
                        var_32 &= (((((arr_18 [i_0] [20] [12]) ? (arr_14 [i_7] [9] [i_0]) : var_6)) << (((((arr_17 [i_7] [i_6] [i_1]) ? var_9 : -15120)) - 82))));
                    }
                    for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
                    {
                        var_33 = (min(var_33, (var_9 != 25860)));
                        var_34 ^= (arr_22 [i_0] [i_0] [1] [i_0]);
                        var_35 = (((arr_8 [i_0] [i_0]) & (((arr_5 [1]) % (arr_13 [i_0] [i_0] [i_6] [i_8])))));
                        var_36 = 24313;
                    }
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
                        {
                            var_37 ^= (arr_23 [6] [i_6] [6] [6]);
                            var_38 ^= (arr_7 [i_6] [i_6] [i_10]);
                            var_39 = ((((((arr_26 [i_10] [i_10] [i_10] [i_10] [i_10]) & (arr_9 [i_0] [i_1] [i_1] [i_1] [i_0])))) ? (arr_16 [i_0] [i_9] [i_6] [i_0]) : (arr_26 [i_0] [i_1] [i_6] [i_9] [i_10])));
                        }
                        for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
                        {
                            var_40 = (((arr_4 [i_1] [i_11]) > var_2));
                            var_41 *= 18446744073709551608;
                            var_42 = (min(var_42, 24313));
                            var_43 = arr_20 [i_11] [i_0] [i_6] [i_0] [i_0];
                        }
                        for (int i_12 = 0; i_12 < 24;i_12 += 1) /* same iter space */
                        {
                            var_44 = (arr_32 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_45 = (max(var_45, ((((~(arr_22 [i_9] [i_6] [22] [22])))))));
                            arr_34 [i_0] [i_1] [i_6] [i_0] [17] = (arr_31 [i_0] [i_1]);
                            var_46 = ((~(arr_12 [i_0] [i_0] [i_1] [i_1] [i_1])));
                        }
                        for (int i_13 = 0; i_13 < 24;i_13 += 1) /* same iter space */
                        {
                            var_47 = var_5;
                            var_48 ^= var_13;
                            var_49 ^= ((((((arr_1 [i_0]) ? (arr_35 [i_13] [i_1] [i_0]) : (arr_6 [1])))) && 41));
                        }

                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            arr_43 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] &= var_6;
                            var_50 = (!var_11);
                            var_51 = -29822;
                        }
                        for (int i_15 = 0; i_15 < 24;i_15 += 1)
                        {
                            var_52 ^= (((arr_8 [i_6] [i_9]) ? (arr_8 [i_1] [i_15]) : (arr_8 [i_15] [i_1])));
                            var_53 ^= var_1;
                        }
                    }
                    for (int i_16 = 0; i_16 < 24;i_16 += 1)
                    {
                        var_54 = (min(var_54, (arr_13 [i_0] [i_1] [i_6] [i_16])));
                        var_55 = var_8;

                        for (int i_17 = 0; i_17 < 1;i_17 += 1)
                        {
                            arr_52 [i_1] [i_0] [i_0] [i_16] = (((arr_16 [i_0] [i_0] [i_0] [i_0]) * (arr_4 [i_0] [i_0])));
                            var_56 = (var_6 ? (arr_18 [i_0] [i_0] [i_6]) : (arr_18 [i_6] [i_6] [i_17]));
                            var_57 &= (arr_41 [i_0] [i_1] [i_17] [i_16]);
                            var_58 = (arr_19 [12] [12] [i_6]);
                        }
                        for (int i_18 = 0; i_18 < 24;i_18 += 1)
                        {
                            arr_56 [i_0] [i_16] |= 38;
                            var_59 = var_17;
                        }
                        for (int i_19 = 0; i_19 < 1;i_19 += 1)
                        {
                            var_60 ^= var_11;
                            var_61 = var_13;
                            var_62 = (((arr_19 [i_0] [i_1] [i_16]) > (arr_53 [i_0] [i_1] [i_6] [i_0] [i_0] [i_16] [i_19])));
                        }
                        for (int i_20 = 0; i_20 < 24;i_20 += 1)
                        {
                            var_63 = ((var_12 > (arr_49 [i_0] [i_1] [22] [i_20])));
                            var_64 = (max(var_64, (((arr_45 [i_16] [i_1] [12] [i_16]) ? (arr_41 [i_16] [i_1] [i_6] [i_16]) : (arr_45 [i_1] [i_1] [i_6] [i_20])))));
                            var_65 &= (((arr_1 [i_1]) % 197));
                            var_66 = arr_44 [i_0] [i_1] [i_6] [i_16] [i_0];
                            var_67 = 15102;
                        }
                        var_68 = (arr_48 [1] [1] [1] [i_6] [i_16] [i_16]);
                        var_69 ^= (((((arr_23 [i_0] [i_0] [i_6] [i_16]) ? -15102 : 841225688)) + (arr_13 [i_0] [i_1] [i_6] [i_6])));
                    }
                    var_70 = ((~((var_12 ? (-32767 - 1) : (arr_0 [i_0] [i_1])))));
                }
                for (int i_21 = 0; i_21 < 24;i_21 += 1) /* same iter space */
                {

                    for (int i_22 = 0; i_22 < 24;i_22 += 1) /* same iter space */
                    {
                        var_71 = (min(var_71, ((min(var_10, (((!(arr_63 [6] [i_22])))))))));

                        /* vectorizable */
                        for (int i_23 = 0; i_23 < 24;i_23 += 1)
                        {
                            var_72 = (min(var_72, ((((arr_25 [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_1 : ((4178985752 ? var_1 : var_11)))))));
                            var_73 = (arr_42 [21] [21] [i_21] [21] [21]);
                            var_74 = (arr_17 [i_21] [i_21] [i_21]);
                        }
                    }
                    for (int i_24 = 0; i_24 < 24;i_24 += 1) /* same iter space */
                    {
                        var_75 = (min((((arr_38 [i_0]) ? var_5 : (arr_3 [i_1]))), var_14));
                        var_76 = (min(var_76, (arr_28 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
                    }
                    for (int i_25 = 0; i_25 < 24;i_25 += 1) /* same iter space */
                    {
                        var_77 = ((((((arr_3 [i_0]) && (((var_13 ? (arr_25 [7] [16] [i_21] [i_25] [15]) : (arr_5 [i_25]))))))) > (((~var_13) ? (arr_28 [i_0] [i_0] [i_1] [i_1] [i_21] [i_25]) : (191 / var_6)))));
                        var_78 ^= (max(((var_10 % (arr_29 [i_0] [i_0] [i_0] [i_0]))), ((((((arr_71 [i_1] [21] [i_1] [i_1] [i_1] [i_1] [12]) ? 174 : (arr_75 [i_0] [i_1] [i_0] [i_1])))) ? (((!(arr_3 [i_1])))) : var_9))));
                    }
                    var_79 = var_8;
                }
                var_80 = ((-((max((arr_74 [i_1] [i_1] [i_1] [i_0]), (arr_74 [1] [1] [i_1] [i_0]))))));
            }
        }
    }
    #pragma endscop
}
