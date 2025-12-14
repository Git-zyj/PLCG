/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_20 |= ((127 ? 576460752303423487 : 0));
                    var_21 = -1;
                    var_22 = (max(var_22, (((((max((arr_0 [i_1]), (arr_0 [i_0 - 1])))) ? (((arr_0 [i_1]) ? (arr_0 [i_2]) : (arr_0 [i_0 + 1]))) : (min((arr_0 [i_0 - 1]), 255)))))));
                    var_23 = (min(var_23, (((((max(((min(var_17, var_12))), (-9223372036854775807 - 1)))) ? (((!((max(4294967295, (arr_1 [i_2]))))))) : (~var_5))))));
                }
            }
        }
        var_24 *= ((((((min(var_16, 9223372036854775807)) - 1))) ? ((((arr_1 [i_0 + 1]) || var_4))) : (arr_4 [i_0] [i_0 + 2])));
        var_25 = var_18;
        var_26 = ((-(((((2147483647 ? var_1 : var_0))) ? var_16 : (~4294967295)))));
    }
    for (int i_3 = 1; i_3 < 17;i_3 += 1)
    {
        var_27 |= ((((((arr_0 [i_3 + 2]) ? var_6 : var_12))) ? (((!(arr_0 [i_3 + 1])))) : (min((arr_0 [i_3 + 2]), var_13))));
        var_28 = ((((var_14 ? var_16 : -9223372036854775796)) >= (~var_6)));
        arr_11 [i_3] [i_3] = ((((var_14 == (arr_8 [i_3] [i_3] [i_3] [i_3 + 1]))) ? (((arr_9 [i_3]) ? var_9 : (arr_8 [i_3] [i_3] [i_3] [i_3]))) : (((~(arr_9 [i_3]))))));
        var_29 *= (((!var_2) ? ((((!(arr_4 [i_3 - 1] [i_3 - 1]))))) : (max(((var_6 ? 18446744073709551615 : 0)), (-5276633480553186840 - 4294967295)))));
    }
    for (int i_4 = 2; i_4 < 22;i_4 += 1)
    {
        var_30 = (+-1962548957);
        var_31 |= (((!var_18) ? var_1 : (((max(252, (arr_1 [i_4 + 1])))))));
        var_32 = ((((max((arr_6 [i_4 - 1] [i_4 - 1] [i_4 - 2]), 0))) ? ((~(arr_7 [i_4 - 1] [i_4 + 1] [i_4 - 2]))) : (max((arr_7 [i_4 - 1] [i_4 + 1] [i_4 + 1]), (arr_8 [i_4 - 1] [i_4] [i_4 - 2] [i_4 + 1])))));
        arr_14 [i_4] |= 0;
        arr_15 [i_4] [i_4] |= (max((max((arr_1 [i_4 + 1]), (arr_1 [i_4 + 1]))), (max(var_16, 1))));
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                {
                    var_33 = (max(var_33, ((((((((arr_20 [i_6] [i_7]) || ((min(-1, 90))))))) <= (max(0, (arr_19 [i_5] [i_5] [i_5]))))))));

                    for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
                    {
                        var_34 = ((-(((!((!(arr_19 [i_7] [i_6] [i_7]))))))));
                        var_35 -= (min(((1962548957 ? -4294967295 : var_4)), var_4));
                    }
                    for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
                    {
                        var_36 = (((((-(arr_9 [i_9])))) ? (((max((max(var_14, var_16)), (1 == 65535))))) : ((71 ? var_16 : (var_12 * var_15)))));

                        for (int i_10 = 1; i_10 < 1;i_10 += 1)
                        {
                            var_37 |= (((252 ? 2 : 1)));
                            arr_29 [i_5] [i_5] [i_7] [i_7] [i_5] [i_9] [i_9] = (-((~((var_14 ? var_11 : (arr_3 [i_5]))))));
                        }
                    }
                    for (int i_11 = 0; i_11 < 13;i_11 += 1) /* same iter space */
                    {
                        var_38 = var_11;
                        var_39 = (((((((arr_25 [i_5 + 1] [i_5 + 1] [i_5] [i_5 - 1] [i_5 + 1]) + 2147483647)) >> (var_19 - 7719499855079013324))) >> (-1962548958 + 1962548974)));

                        for (int i_12 = 1; i_12 < 11;i_12 += 1) /* same iter space */
                        {
                            var_40 = (min(((var_11 % (arr_4 [i_5 - 1] [i_5]))), ((max(var_16, 0)))));
                            arr_37 [i_5] [i_6] [i_11] [i_11] [i_12] [i_12 + 2] = 18446744073709551615;
                        }
                        for (int i_13 = 1; i_13 < 11;i_13 += 1) /* same iter space */
                        {
                            arr_40 [i_5] [i_6] [i_11] [i_13] = (max(((((var_15 > (arr_33 [i_5] [i_6] [i_11] [i_5]))) ? var_16 : (arr_4 [i_11] [i_7]))), var_18));
                            var_41 *= (~1);
                        }
                        for (int i_14 = 1; i_14 < 11;i_14 += 1) /* same iter space */
                        {
                            var_42 = ((-((var_11 ? var_16 : (arr_0 [i_5 - 1])))));
                            var_43 = (max(var_43, -0));
                        }
                    }
                    var_44 = (max(var_44, var_10));
                    var_45 = (min(((((((~(-2147483647 - 1)))) ^ ((var_5 ? 3070846662 : var_15))))), (min((arr_27 [i_7]), (max(21637, var_11))))));
                    var_46 = (var_15 / var_13);
                }
            }
        }
    }
    #pragma endscop
}
