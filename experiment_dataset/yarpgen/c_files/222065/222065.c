/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= ((!(((((max(1504079355, var_5))) % 9223372036854775807)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (var_3 || -var_11);

                for (int i_2 = 2; i_2 < 10;i_2 += 1) /* same iter space */
                {
                    arr_9 [i_0] = ((var_9 ? -5 : var_8));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            arr_15 [i_0] [6] [i_1] [i_3] [i_4 - 2] |= (arr_11 [i_2 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 2]);
                            var_14 = (!888247265);
                            arr_16 [i_0] [10] [i_0] [i_0] [i_0] = (arr_0 [i_0]);
                            arr_17 [i_0] [i_1] [i_1] [i_3] [i_1] &= 11113;
                        }
                        var_15 = (arr_11 [i_2 + 2] [i_2 + 2] [i_2 + 1] [i_3]);
                    }
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        var_16 = var_6;
                        var_17 = ((var_2 >> (4141877580158632032 - 3967975498)));
                        arr_22 [i_0] [i_1] [i_0] [i_2 - 1] [i_5] = ((min((arr_11 [i_2 + 1] [i_2 - 2] [i_2 + 1] [i_5]), var_7)));
                        arr_23 [i_0] [i_2] [i_1] [i_0] [i_0] = (max((max((arr_0 [i_0]), (var_8 - var_11))), (arr_20 [1] [i_2 + 1] [i_2 + 1] [i_2 + 2] [i_2])));
                    }

                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        var_18 = (max(var_18, ((max((max(135, 1440948132)), ((-(arr_12 [i_2 + 1] [i_2] [i_2] [i_6 + 1] [i_1]))))))));
                        var_19 = -var_1;
                        arr_26 [i_0] [i_1] [i_2 + 2] [i_6] = (((0 == var_6) ? ((min(var_8, var_11))) : ((((var_8 - var_11) ? var_11 : var_7)))));
                    }
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        var_20 = ((min(1440948131, 113)));
                        var_21 = (((47679 ? 502169625365265571 : 4108879726840398586)) - var_10);
                        var_22 = (min(var_22, ((max(((((var_7 ? -22196 : -438280319)))), ((~((var_8 ? var_8 : var_5)))))))));
                        arr_31 [i_0] [i_7] = var_7;
                    }
                }
                for (int i_8 = 2; i_8 < 10;i_8 += 1) /* same iter space */
                {
                    arr_36 [i_0] [i_0] [i_0] = (var_3 >> ((min(var_12, 243))));

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {

                        for (int i_10 = 2; i_10 < 11;i_10 += 1)
                        {
                            var_23 &= ((var_9 ? 562949953421310 : 3010286185409005984));
                            var_24 ^= ((var_3 ? var_9 : var_8));
                            var_25 -= (((var_3 - var_6) + (var_9 >= var_9)));
                        }
                        arr_42 [i_0] [i_0] = ((var_5 ? (arr_34 [i_0] [i_1]) : (var_5 * var_8)));
                        var_26 = var_9;
                        arr_43 [i_0] [i_1] [i_8 - 1] [i_9] = (var_6 ? (arr_6 [i_8 + 2] [i_8] [i_0] [i_8 - 1]) : (arr_6 [i_8 + 2] [i_8 + 2] [i_0] [i_8 - 1]));
                    }
                    arr_44 [6] [i_0] [i_0] [6] = (arr_41 [i_0] [i_1] [i_8]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 23;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 23;i_12 += 1)
        {
            {
                var_27 = (((max(var_8, var_2))));
                var_28 = (((((arr_51 [i_12]) ? var_2 : (((arr_47 [i_11]) / -18256)))) / (arr_50 [i_11] [i_12] [i_12])));
                var_29 *= (((var_12 ? 9223372036854775788 : (arr_49 [i_11] [i_11] [i_11]))));
                arr_52 [i_11] = (-143 - 1142112606);
                arr_53 [i_11] [i_11] = var_0;
            }
        }
    }
    var_30 = max(((min(0, (max(var_3, var_2))))), 24190);
    /* LoopNest 2 */
    for (int i_13 = 2; i_13 < 10;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 13;i_14 += 1)
        {
            {

                for (int i_15 = 0; i_15 < 13;i_15 += 1)
                {
                    arr_63 [0] = 15360;

                    for (int i_16 = 3; i_16 < 12;i_16 += 1)
                    {

                        for (int i_17 = 0; i_17 < 13;i_17 += 1)
                        {
                            var_31 = var_1;
                            var_32 = (min(var_32, -1));
                        }
                        for (int i_18 = 0; i_18 < 13;i_18 += 1)
                        {
                            arr_71 [i_13] [i_14] [3] [9] [i_18] = ((((((var_8 > var_10) ? 1440948132 : (min(0, var_7))))) ? ((max(var_9, (arr_59 [i_13 + 2] [i_14])))) : ((max(var_6, var_7)))));
                            var_33 |= ((-113 - ((((min(var_4, var_11))) ? var_4 : (arr_59 [i_13] [i_14])))));
                        }
                        arr_72 [i_16 - 1] [i_16 - 1] [i_16] [i_16] [8] [i_16] = var_11;
                        var_34 = ((((((arr_68 [i_13 - 1] [i_13 + 3] [i_13 + 2] [i_13]) ? var_11 : var_6))) ? (((arr_68 [i_13 - 2] [i_13 - 2] [i_13 - 1] [i_13 - 2]) ? 63744 : var_11)) : (max(1440948131, 63752))));
                    }
                }
                for (int i_19 = 0; i_19 < 13;i_19 += 1)
                {

                    for (int i_20 = 4; i_20 < 11;i_20 += 1)
                    {
                        arr_78 [i_14] = (var_2 == var_4);
                        arr_79 [9] [i_14] [i_14] [9] = min(var_6, (min(var_7, var_0)));
                    }
                    arr_80 [i_13] [i_13] [i_14] [i_19] = ((var_10 >= ((max(var_10, var_8)))));
                }
                for (int i_21 = 3; i_21 < 12;i_21 += 1)
                {
                    var_35 = (max(var_35, (((0 ? ((((!var_2) ? 4294967295 : var_12))) : ((var_12 ? (!var_11) : (max(var_8, -7822903001710910477)))))))));
                    var_36 = (min(var_36, (!var_12)));
                    var_37 = ((!(-19086 + var_7)));
                }
                /* vectorizable */
                for (int i_22 = 1; i_22 < 12;i_22 += 1)
                {
                    arr_86 [i_13] [i_13 + 2] [i_13 - 2] [2] = ((9 * (arr_68 [i_22 - 1] [i_22 + 1] [i_13 - 1] [i_13])));
                    arr_87 [i_13] [i_13] [i_13] [i_13] = (var_0 ^ var_11);
                }
                arr_88 [i_13] [i_13] &= var_9;
            }
        }
    }
    #pragma endscop
}
