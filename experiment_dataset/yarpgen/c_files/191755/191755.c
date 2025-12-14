/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            var_18 *= (arr_2 [i_0 + 1]);
                            arr_13 [i_3] [i_3] [i_3] = (~-6888628680565406806);
                            var_19 = (((arr_3 [i_0]) * var_14));
                            var_20 *= 124;
                        }
                        for (int i_5 = 4; i_5 < 23;i_5 += 1) /* same iter space */
                        {
                            arr_16 [i_3] [i_3] [9] [i_3] [i_3] = ((+((((arr_11 [i_0 - 1] [0] [i_3] [i_5 - 1] [i_3]) && (!1))))));
                            var_21 = (((arr_0 [i_0]) + ((((max(63, var_10)) != (~-6888628680565406833))))));
                            var_22 = (!0);
                            var_23 = (max(var_10, (((((max(-1871217165, 130))) ? (arr_15 [i_0 + 1]) : 30262)))));
                        }
                        for (int i_6 = 4; i_6 < 23;i_6 += 1) /* same iter space */
                        {
                            var_24 &= ((-((~(arr_6 [i_0 + 1] [i_0 + 1])))));
                            var_25 = (min(255, (min(var_6, (arr_7 [i_2] [i_2] [i_2] [i_2])))));
                            var_26 -= ((!((max((!var_8), ((48 ? (arr_11 [i_0] [i_0 + 1] [i_6] [i_0] [i_0]) : var_14)))))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            var_27 = (arr_7 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]);
                            var_28 = (max(var_28, 1));
                        }
                        arr_23 [i_3] = ((((-1 != (-2147483647 - 1))) ? (var_14 + 25064) : (((max(124, 1))))));
                        var_29 = var_14;

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            var_30 = (((arr_20 [i_2] [i_2] [i_2] [10]) ? 1 : ((~(arr_24 [23] [i_1] [i_1] [i_1] [i_1] [i_1])))));
                            arr_26 [i_3] = -1;
                            var_31 = (min(var_31, (!var_4)));
                        }
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            var_32 = (min(var_32, (((((((-32446 ? var_8 : var_3)) + 2147483647)) << ((((var_4 ? (arr_27 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_9]) : (arr_4 [i_0 + 1] [i_0 + 1] [i_0]))) - 7378)))))));
                            var_33 = ((~(~var_2)));
                            var_34 = ((((((max(var_2, 31268))) ? 255 : var_5)) & ((((max(var_14, var_8))) ? 63 : (arr_3 [i_0])))));
                        }
                        var_35 = (max(var_35, var_5));
                    }
                    /* vectorizable */
                    for (int i_10 = 1; i_10 < 23;i_10 += 1)
                    {

                        for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
                        {
                            var_36 = (var_13 != var_4);
                            var_37 = (((2147483625 ? var_8 : var_8)));
                            var_38 = ((var_6 ? 141 : ((-(arr_7 [i_11] [i_10] [i_2] [i_0])))));
                        }
                        for (int i_12 = 0; i_12 < 24;i_12 += 1) /* same iter space */
                        {
                            var_39 = var_12;
                            arr_37 [i_0] = (~var_5);
                            var_40 &= ((((1073741823 ? 103 : -3132154841046970553)) | -62));
                            var_41 = (max(var_41, 1754515698));
                        }
                        var_42 = (-32767 - 1);

                        for (int i_13 = 1; i_13 < 20;i_13 += 1)
                        {
                            var_43 *= (((arr_12 [i_0] [i_1]) ? ((-1490151088 ? var_6 : 1071218698)) : 212));
                            var_44 = ((220 >> (((arr_27 [i_10 - 1] [i_10 - 1] [i_2] [i_10 + 1] [i_13 - 1]) - 7371))));
                        }
                        for (int i_14 = 0; i_14 < 24;i_14 += 1)
                        {
                            arr_42 [i_14] [i_10] [i_10 - 1] [i_2] [i_0] [i_0] = (arr_39 [i_0 - 1] [20] [i_0 - 1]);
                            arr_43 [i_0] [i_1] [i_1] [i_10 + 1] [i_0] = (-(((arr_22 [i_10] [i_1] [i_0]) ? var_5 : (arr_6 [13] [i_1]))));
                        }
                        for (int i_15 = 0; i_15 < 24;i_15 += 1)
                        {
                            var_45 = (min(var_45, var_0));
                            var_46 = (arr_4 [i_15] [i_10 + 1] [i_0 + 1]);
                        }

                        for (int i_16 = 0; i_16 < 24;i_16 += 1)
                        {
                            var_47 = (~((15 ? 63 : 65535)));
                            var_48 = (~255);
                            arr_48 [i_0] [i_2] [i_16] [i_10] [i_16] = var_6;
                            var_49 -= (((-10 ? 4294967295 : (-2147483647 - 1))));
                        }
                        var_50 = ((~((-578172150865800578 ? var_14 : 3801277584))));
                    }
                    /* vectorizable */
                    for (int i_17 = 2; i_17 < 22;i_17 += 1)
                    {
                        arr_51 [i_0] [i_0] [i_0 - 1] [i_0] = ((!(arr_19 [i_1] [i_1])));
                        arr_52 [i_17] [i_17] = ((!(arr_5 [0] [i_17] [i_0 + 1] [13])));
                        var_51 = (min(var_51, 6));
                        var_52 = (min(var_52, (~var_14)));
                    }
                    arr_53 [i_0] = var_12;
                    var_53 = (max(var_53, ((min(((((arr_11 [i_0] [i_1] [i_2] [i_2] [i_2]) > (((arr_25 [i_0] [1] [1] [i_2]) - 2147483647))))), (((var_12 <= 1) ? (((4294967295 ? 26 : (-2147483647 - 1)))) : var_14)))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_18 = 0; i_18 < 20;i_18 += 1)
    {
        for (int i_19 = 0; i_19 < 20;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 20;i_20 += 1)
            {
                {
                    var_54 = (min(193, (!var_14)));
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 20;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 20;i_22 += 1)
                        {
                            {
                                arr_70 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] = 216;
                                arr_71 [i_22] [12] [3] [i_19] [12] = ((!((((arr_1 [12] [i_22]) | (max((arr_14 [i_20] [i_20]), var_4)))))));
                                var_55 -= ((((((arr_5 [i_18] [i_19] [i_20] [i_18]) ? (var_16 ^ var_17) : (((~(arr_68 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]))))))) ? ((((((arr_15 [i_18]) ? var_7 : 1073741823))) ? -956007645 : 2147483647)) : ((((max((arr_11 [i_18] [i_18] [i_21] [i_18] [i_18]), 5))) << ((((max(-90, 11669))) - 65441))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
