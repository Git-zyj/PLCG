/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((((!((max(var_8, 2139)))))), (max((max(2139, 5995815205933116979)), (-72 && var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_1] [1] = (5995815205933116962 && 1);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] &= var_8;
                    arr_10 [i_0] [1] = -71;
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
                {
                    var_11 |= (max(var_7, ((0 ? -1369 : 1381))));
                    arr_14 [i_1] [i_1] [i_0] = (min(((((((arr_2 [i_0] [i_1]) % (arr_13 [i_0] [i_0] [10] [i_1])))) ? var_8 : var_9)), (arr_12 [i_1] [i_1] [i_3])));
                }
                for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 8;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_12 = (max(var_12, (((((((arr_11 [i_5 + 3]) ^ var_7))) ? ((min((arr_3 [i_5 + 1]), (arr_7 [i_0] [i_5 - 1] [i_5] [i_5 + 3])))) : 182)))));
                                arr_24 [3] [i_1] [i_1] [i_4] [i_5] [i_1] [1] = -89;
                            }
                        }
                    }
                    arr_25 [i_0] [i_0] [i_1] [i_4] = ((1 ? 63399 : (arr_16 [i_4] [i_1] [i_1] [i_0])));

                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        var_13 = (max(var_13, 28279));
                        arr_29 [i_0] [i_0] [i_0] [i_0] = ((arr_0 [i_1]) && ((max((arr_13 [i_0] [i_1] [7] [i_7]), (max((arr_18 [i_7] [i_4] [i_1] [i_1] [i_1] [0]), (arr_7 [i_0] [i_0] [i_4] [i_7])))))));
                        var_14 = (max((max(1938917932725263505, 10517674769223023501)), ((((arr_18 [i_0] [i_1] [i_1] [i_4] [i_4] [i_7]) ? 63396 : -40)))));
                    }

                    /* vectorizable */
                    for (int i_8 = 2; i_8 < 10;i_8 += 1)
                    {
                        var_15 = (min(var_15, ((((arr_21 [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8] [i_8]) ? 8 : (arr_5 [i_8] [i_8] [i_8 - 2]))))));
                        var_16 ^= 71;

                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            var_17 = ((var_8 ? (arr_36 [i_8 + 1] [i_8 + 1] [i_8 + 1]) : (arr_36 [i_8 - 1] [i_8 - 1] [i_4])));
                            var_18 = (min(var_18, (((!(((35 ? 16566723724525127291 : 96))))))));
                            var_19 = (arr_27 [i_0] [i_1] [i_4] [i_8] [i_4] [i_8]);
                        }
                    }
                    var_20 = var_0;
                }

                /* vectorizable */
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {

                    for (int i_11 = 3; i_11 < 10;i_11 += 1)
                    {
                        arr_42 [i_11] = (arr_31 [i_0] [i_1]);
                        var_21 = (((((arr_20 [i_10] [i_11 - 2] [i_11 - 2] [i_11 - 1]) + 2147483647)) << (100 <= 54)));
                        var_22 = (((arr_15 [i_11 - 1] [i_1] [i_10]) / -40));
                        var_23 = (min(var_23, ((((arr_18 [0] [i_0] [i_0] [i_1] [i_10] [i_11 - 2]) + (arr_18 [i_11] [i_11] [i_10] [i_1] [i_0] [i_0]))))));

                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            arr_46 [i_0] [i_1] [i_10] [i_11] [i_12] &= (arr_36 [i_0] [i_1] [i_11]);
                            var_24 *= (1 << 15);
                            var_25 = var_8;
                            var_26 = 66;
                            arr_47 [i_10] [i_10] [i_10] [i_10] [i_10] = ((!(arr_23 [i_11 - 2] [i_11 - 3] [i_11 - 2] [i_11] [i_11 + 1])));
                        }
                    }
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        arr_51 [i_0] [1] [i_10] = (arr_36 [i_13] [i_10] [i_0]);
                        arr_52 [i_0] [i_0] [i_0] = (arr_5 [i_0] [i_0] [i_13]);
                    }
                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {
                        arr_55 [i_0] [i_1] [i_10] [i_14] |= 1716299164;
                        var_27 = (max(var_27, (arr_37 [i_0] [i_10] [1] [i_10])));
                    }
                    var_28 = var_6;

                    for (int i_15 = 1; i_15 < 10;i_15 += 1)
                    {
                        var_29 += var_0;
                        var_30 *= (var_4 - -15);
                        arr_58 [i_0] [i_1] [1] = (((arr_35 [i_1] [i_15 - 1] [i_15 - 1] [i_15] [i_15 - 1]) >= (2578668131 / 2013265920)));
                        var_31 -= (-97 % 39);
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 11;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 11;i_17 += 1)
                        {
                            {
                                arr_65 [i_16] [i_10] [i_0] [i_0] = (arr_12 [i_0] [i_0] [i_0]);
                                var_32 = ((((((!(arr_8 [i_10] [i_0]))))) != 1));
                                var_33 = (min(var_33, ((((arr_16 [i_0] [i_0] [i_0] [i_0]) ? (arr_16 [i_1] [2] [i_16] [i_17]) : (arr_16 [i_0] [i_1] [i_16] [i_17]))))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_18 = 3; i_18 < 10;i_18 += 1)
    {
        arr_69 [i_18] = ((((min(((var_1 ? 25257 : var_9)), ((((arr_68 [i_18]) > var_5)))))) ? (max(((max((arr_68 [i_18]), (arr_67 [i_18] [i_18])))), (min(var_4, (arr_66 [i_18]))))) : (min(-27, ((var_4 ^ (arr_66 [i_18])))))));
        var_34 = (((arr_68 [i_18]) ? (arr_66 [i_18]) : (arr_68 [i_18])));
        arr_70 [i_18] = (max((arr_68 [i_18]), ((var_3 ? var_2 : 108))));
        arr_71 [i_18] = ((!((max((((-72 && (-127 - 1)))), (arr_68 [i_18]))))));
    }
    #pragma endscop
}
