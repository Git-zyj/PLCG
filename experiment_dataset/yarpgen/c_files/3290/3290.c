/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_4 [10] [10] |= var_3;

        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            var_18 |= ((((max(var_5, (arr_0 [4])))) ? ((var_13 ? -4 : 51302)) : 13743));
            arr_7 [i_0] = ((!(var_3 * var_4)));
            var_19 = (((((((var_13 || (arr_0 [i_0]))) ? ((51787 ? var_16 : var_15)) : var_15))) || (((arr_3 [i_0] [i_0]) || (arr_6 [i_0])))));
        }
        arr_8 [i_0] = ((((min(var_6, ((var_14 / (arr_3 [i_0] [i_0])))))) ? var_4 : (((((arr_3 [i_0] [i_0]) | var_16)) / var_2))));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 8;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        arr_17 [i_0] [i_0] [i_0] [i_0] [2] = 51795;
                        arr_18 [i_2] [i_3 + 3] [i_0] = (max((max(var_1, 599157397)), (227 / 255)));
                    }
                }
            }
        }
        var_20 = (max(var_20, ((max(6342349656892102, 11142147762852716686)))));
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
    {
        var_21 += ((var_4 || ((((-2147483647 - 1) & 61920)))));
        arr_23 [i_5] = (arr_21 [i_5]);
        arr_24 [i_5] [0] = ((max(((61802 ? (arr_20 [5] [15]) : 51795)), var_12)));
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 13;i_8 += 1)
                {
                    {
                        arr_33 [i_6] [i_8] = 1;
                        var_22 = (max((((((((arr_19 [i_7] [i_5]) ? -79 : (arr_20 [i_6 + 1] [i_6 + 1])))) > var_0))), (3619 >= var_16)));
                        arr_34 [i_6] [i_5] [i_6] [i_6] [i_8] [i_8] = ((3619 ? 121 : (max((arr_28 [i_6 + 1] [i_6 + 2] [i_6] [9]), 2052388812))));
                        arr_35 [i_6] [i_6] [i_7] [i_8] = (((((((arr_28 [i_8 + 1] [i_6 + 2] [i_6 + 1] [i_6 + 2]) + 9223372036854775807)) >> (((max(var_9, 2947870648022267337)) - 2947870648022267278)))) >> (((((!var_15) | (max(7267048388029663145, var_0)))) - 7267048388029663135))));
                        arr_36 [i_5] [9] [15] [i_6] = (max(var_12, var_13));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                {
                    arr_46 [i_9] [i_9] [i_9] = (960 & var_13);
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 15;i_12 += 1)
                    {
                        for (int i_13 = 3; i_13 < 14;i_13 += 1)
                        {
                            {
                                var_23 = (~(arr_43 [i_13] [i_12 - 2] [i_10] [12]));
                                arr_51 [i_9] [i_10] [i_10] [i_12] = (599157403 / var_1);
                            }
                        }
                    }
                }
            }
        }
        var_24 = (11 + -19);
    }
    for (int i_14 = 0; i_14 < 17;i_14 += 1) /* same iter space */
    {
        var_25 = (min(((((1 ? -79 : var_8)))), var_10));
        arr_54 [i_14] = ((-((0 ? 61802 : (((36 >= (-9223372036854775807 - 1))))))));
    }
    var_26 = ((~(((-9223372036854775807 - 1) | (min(var_4, -1217093896))))));
    var_27 = var_2;
    var_28 = (var_15 ? var_7 : (1 || 3695809893));
    #pragma endscop
}
