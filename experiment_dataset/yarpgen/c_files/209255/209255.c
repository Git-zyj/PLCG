/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((min(var_14, (((7734 ? var_6 : var_12))))));
    var_19 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_20 = (~-7735);
                    var_21 = 169;
                    var_22 = 14;

                    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
                    {
                        var_23 = var_5;
                        var_24 |= (arr_8 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3]);
                        var_25 = (arr_7 [i_0] [i_1] [i_1 + 1]);
                        var_26 *= ((((0 / (arr_6 [i_1 + 1]))) / (arr_6 [i_1 + 1])));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                    {
                        var_27 = 12132;
                        var_28 = arr_7 [i_1 + 1] [i_1] [i_1 - 1];
                    }
                    for (int i_5 = 3; i_5 < 12;i_5 += 1)
                    {
                        var_29 = ((var_11 ? 2636956426 : ((var_6 | (arr_8 [i_0] [i_1] [i_5 - 2] [i_1 + 1] [i_0] [i_0])))));
                        var_30 = ((((min(var_12, ((var_3 ? (arr_10 [13] [i_1] [i_2] [12]) : 76))))) ? 3628261135 : (((((((4294967282 ? -21521 : 3628261135))) >= ((var_2 ? -359982367 : 18446744073709551610))))))));
                        var_31 = (arr_11 [i_5] [i_1] [i_2] [i_5]);
                    }
                }
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    var_32 *= ((18446744073709551588 ? (min(((((arr_9 [i_0] [i_1]) ? 1 : var_16))), (max(var_3, 6588254447293850485)))) : (((var_13 + (arr_8 [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1]))))));

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        var_33 = (min(var_33, (((arr_17 [i_0] [i_1] [i_1 + 1]) ? (arr_17 [i_0] [i_1 + 1] [14]) : ((29 * (arr_16 [i_0])))))));
                        var_34 &= ((0 ? (arr_13 [i_1 + 1]) : (arr_4 [i_1 + 1])));

                        for (int i_8 = 2; i_8 < 13;i_8 += 1)
                        {
                            var_35 = (arr_8 [3] [i_8 + 2] [11] [i_6] [i_1] [i_0]);
                            var_36 = ((9612740320138768234 >> (((~14) - 4294967249))));
                        }
                        for (int i_9 = 4; i_9 < 11;i_9 += 1)
                        {
                            var_37 += ((4398038122496 ? 10152230529132299054 : var_11));
                            var_38 = var_1;
                            var_39 = (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        }
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            var_40 -= var_11;
                            var_41 = (((arr_17 [i_0] [i_1 - 1] [i_6]) ? (arr_14 [i_0] [i_1] [i_6] [i_7] [i_10]) : (arr_23 [i_6] [i_1 - 1] [i_6] [i_7] [i_0] [i_7])));
                        }
                        var_42 &= 732421633;
                    }
                }
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    var_43 &= ((-(min(var_9, 31258))));
                    var_44 = 33423360;

                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        var_45 = (max(((~(~0))), ((((arr_24 [i_1 + 1] [i_1] [i_1] [i_1 + 1] [i_1 - 1]) != var_8)))));
                        var_46 = (arr_20 [10] [i_1] [i_1 + 1]);
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 15;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 15;i_14 += 1)
                        {
                            {
                                var_47 = (min(var_47, ((min((arr_38 [i_0] [i_0] [i_11] [i_0] [i_0]), (((arr_38 [i_0] [i_1] [i_11] [i_13] [i_14]) == var_14)))))));
                                var_48 = (((arr_3 [i_0] [i_0]) + ((((((arr_14 [i_0] [i_1] [i_11] [i_13] [i_14]) - (arr_11 [i_0] [i_0] [i_0] [i_0])))) - ((-59 ? (arr_32 [i_0] [i_1] [i_11] [6] [i_13] [11]) : var_2))))));
                            }
                        }
                    }
                }
                var_49 *= (arr_14 [i_0] [i_0] [i_0] [i_1] [i_1 - 1]);
            }
        }
    }
    var_50 &= (max((((!(~0)))), var_8));
    #pragma endscop
}
