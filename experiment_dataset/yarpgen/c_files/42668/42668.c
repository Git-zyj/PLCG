/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (max(((var_12 ? (1 + var_12) : (var_11 - var_1))), 38))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_18 = (-(((arr_2 [i_0]) ? var_9 : 0)));

            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                var_19 = var_14;
                arr_10 [i_0] [i_1] [11] = var_9;
                var_20 = 281406257233920;
            }
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    var_21 = ((-((var_14 * (arr_4 [i_1])))));

                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        arr_19 [i_0] [i_0] [i_0] [i_4] [i_5] [i_0 + 1] = 35865103;
                        var_22 = var_9;
                        var_23 = var_15;
                        var_24 = var_8;
                    }
                    for (int i_6 = 1; i_6 < 14;i_6 += 1) /* same iter space */
                    {
                        var_25 = (~-1);
                        var_26 = (-1 ? (arr_18 [11] [i_6 + 1] [2] [i_4] [i_6 + 1] [i_4] [i_3]) : (var_8 | var_6));
                        var_27 ^= (var_2 ? 35865103 : var_8);
                    }
                    for (int i_7 = 1; i_7 < 14;i_7 += 1) /* same iter space */
                    {
                        var_28 = (((arr_14 [i_0 - 1] [2] [i_0 - 3] [i_0 - 1] [i_0 + 1] [i_0 - 1]) ? (arr_14 [i_0 - 1] [i_0 - 1] [i_0] [10] [i_0 - 1] [i_0 - 1]) : (arr_14 [i_0 - 2] [3] [i_0 - 1] [i_0 - 1] [i_0] [i_0])));
                        var_29 = (arr_16 [i_4] [i_1] [i_7 + 3] [i_1] [4] [i_0 - 1]);
                    }
                    for (int i_8 = 1; i_8 < 14;i_8 += 1) /* same iter space */
                    {
                        arr_28 [i_0] [i_0 - 3] = arr_25 [i_8] [i_1] [i_3] [i_1] [i_0 + 1];
                        arr_29 [i_0] [i_1] [i_1] [i_3] [i_3] [i_3] [0] = (!-1);
                        var_30 = ((!-35865106) * -17690827830009326909);
                        arr_30 [i_0] = -var_2;
                    }
                    var_31 = (((arr_22 [i_0] [i_0 - 3] [i_0 - 3] [13] [i_1] [i_4]) ? (arr_22 [i_0] [i_0 - 2] [i_0 - 1] [i_3] [i_4] [i_4]) : (arr_22 [i_0] [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_4] [i_0 - 1])));

                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        var_32 = (arr_12 [9] [i_0] [9] [i_0 - 3]);
                        var_33 = ((((((arr_3 [i_0 - 2]) & 1))) ? var_0 : ((12927826332475639936 ? (arr_17 [i_3] [10] [i_3] [i_1] [i_1] [10]) : (arr_14 [i_0 - 3] [i_1] [i_3] [i_4] [i_1] [i_3])))));
                    }

                    for (int i_10 = 2; i_10 < 15;i_10 += 1)
                    {
                        arr_35 [i_0] [i_3] [i_1] [i_0] = (arr_1 [10]);
                        arr_36 [i_0] [i_0] [i_3] [i_4] [2] = ((~var_3) ? var_1 : var_2);
                    }
                }
                var_34 = var_4;

                for (int i_11 = 1; i_11 < 15;i_11 += 1)
                {
                    var_35 = (~(var_10 & var_10));

                    for (int i_12 = 2; i_12 < 16;i_12 += 1)
                    {
                        var_36 = var_11;
                        arr_41 [i_0] = (var_16 != 1);
                        arr_42 [i_0] [i_0 - 3] [i_0 - 2] [i_0] [i_0] = -2820282012992565399;
                        arr_43 [i_0] = 432278897115509801;
                        var_37 = ((arr_20 [i_11 + 2] [i_0 + 1] [i_3] [i_11 + 2] [i_0 + 1]) ? 6 : (arr_33 [i_0]));
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 15;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 17;i_14 += 1)
                    {
                        {
                            var_38 = (~(arr_15 [i_13 + 1]));
                            var_39 = (var_13 ? -var_9 : (((arr_16 [i_0 + 1] [i_1] [i_3] [15] [i_0] [i_14]) ? (arr_15 [2]) : (arr_3 [i_3]))));
                            arr_50 [i_0] [i_1] [i_0 - 3] [i_3] [i_14] = (arr_37 [i_0 + 1] [i_0]);
                        }
                    }
                }
                arr_51 [i_0] [i_0] [i_0 - 1] [i_0 + 1] = var_11;
            }
        }
        arr_52 [i_0] = ((1504224973 ? 18446744073709551609 : 24));
    }
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 19;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            {
                var_40 = (min(((-1265409697365172131 ^ (var_15 || var_4))), ((max((arr_56 [i_15] [i_15]), (arr_54 [i_15]))))));
                var_41 = (min(((max((min(-35865106, 1073741824)), 1))), ((((((arr_56 [i_16] [i_15]) + (arr_53 [i_15])))) ? (min((arr_55 [i_15] [i_15]), var_8)) : (min(var_11, (arr_56 [i_15] [i_15])))))));
                var_42 = ((var_6 > (min(var_0, var_0))));
                var_43 *= (arr_54 [i_16]);
                /* LoopNest 3 */
                for (int i_17 = 0; i_17 < 19;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 19;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 1;i_19 += 1)
                        {
                            {
                                var_44 = (max(var_44, (((((max((((arr_63 [i_19] [i_18] [i_17] [i_16]) | (arr_66 [i_15] [i_16] [i_17] [i_15] [i_17]))), (min(var_11, var_16))))) ? var_9 : (!var_12))))));
                                var_45 = (27 >> (min((((arr_61 [i_19] [i_18] [i_17] [i_16] [i_15]) ? var_6 : var_9)), 0)));
                                arr_67 [11] [i_16] [i_16] = var_5;
                                var_46 ^= ((arr_66 [i_15] [5] [i_15] [i_15] [i_15]) ? (max(var_2, ((((arr_66 [i_15] [i_16] [i_17] [i_16] [i_19]) < 16703009221043362347))))) : -1);
                                arr_68 [i_15] [i_16] [i_15] [i_17] [i_17] [i_15] = ((!(((var_9 + ((max((arr_66 [i_18] [i_16] [i_16] [i_16] [i_17]), (arr_54 [i_15])))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
