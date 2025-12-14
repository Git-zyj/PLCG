/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [17] [0] [i_0] = ((((arr_6 [i_0] [i_0] [i_2 + 2]) ? var_10 : 1589438402)));
                            var_11 = 2480700046651872721;
                            var_12 ^= ((var_1 ? (((((max((arr_0 [i_0] [i_0]), var_3))) ? 2705528894 : ((max(1, 1)))))) : ((((((arr_1 [i_3]) ? var_5 : var_6))) ? var_5 : (arr_4 [1] [i_3 + 1])))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            arr_17 [i_0] [i_0] = 6709946339189849417;
                            var_13 ^= (((!-2305843009213693952) ? ((4294967290 ? ((var_2 ? var_2 : 1)) : (min(var_2, 130)))) : (~var_9)));
                            var_14 = ((1589438402 ? ((((~1) && (!var_0)))) : ((((((((arr_0 [i_0] [i_0]) + 9223372036854775807)) >> (arr_2 [i_0]))) != -49964)))));
                            var_15 = (min(((min((arr_5 [5] [i_0 + 1]), (min(var_9, var_6))))), (((arr_8 [i_5] [18] [i_0] [16] [i_1] [i_0]) + (var_8 * 1589438402)))));

                            for (int i_6 = 2; i_6 < 18;i_6 += 1)
                            {
                                var_16 = 1;
                                var_17 = (max(-4321531844519893953, (((((6709946339189849417 ? var_2 : 1589438402)) >= -95)))));
                                arr_20 [i_1] [i_5] [i_0] [i_1] [i_0 + 1] = (((((var_6 || ((min(95, var_9)))))) * ((~((var_2 ? var_3 : 15))))));
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 19;i_7 += 1)
                            {
                                arr_24 [7] [i_0] = ((!((((arr_5 [i_0 - 2] [i_0 - 2]) ? var_7 : 1)))));
                                var_18 = ((var_3 - (((arr_2 [5]) / 2551434836072910269))));
                            }
                            for (int i_8 = 2; i_8 < 18;i_8 += 1)
                            {
                                arr_27 [i_0] [i_0] [i_5] [i_0] = var_7;
                                arr_28 [1] [1] [0] [6] [12] [i_0] [i_8] = (((!var_8) * var_9));
                                var_19 = (min((max(-2480700046651872722, (var_0 + var_7))), ((((var_3 + 2147483647) << (((arr_25 [i_0] [3] [i_8 + 1] [i_5] [i_5]) - 38832)))))));
                                var_20 = var_7;
                            }
                        }
                    }
                }
                var_21 = (((((!(arr_7 [i_0 + 1])))) < (((!(arr_6 [i_0 - 2] [i_0 - 1] [1]))))));
            }
        }
    }
    var_22 = var_5;
    var_23 = (-14 ^ -2551434836072910289);
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 25;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                {
                    var_24 = (((arr_35 [i_9] [i_10] [i_9]) & var_6));
                    arr_37 [i_9] [i_10] [i_11] [i_9] = (((((((min(var_3, -32744))) <= (((var_10 == (arr_31 [i_9]))))))) << (((((max((arr_29 [i_9] [i_10]), var_10)))) + 5327))));

                    for (int i_12 = 2; i_12 < 24;i_12 += 1)
                    {

                        for (int i_13 = 1; i_13 < 24;i_13 += 1)
                        {
                            arr_44 [i_10] [i_10] [i_11] [i_10] [1] [8] = (((((~((6709946339189849405 ? var_8 : (arr_30 [i_9])))))) ? (min(((var_5 ? (arr_38 [i_9] [22] [9] [4] [i_12] [i_13 + 1]) : 0)), (var_6 <= var_9))) : (((((var_4 ? var_3 : (arr_30 [i_9])))) ? (arr_43 [i_13] [i_13 + 1] [6] [6] [i_13 + 1] [i_13]) : -21))));
                            arr_45 [i_10] [i_10] [i_10] [i_10] [20] = var_4;
                        }
                        var_25 = var_7;
                    }
                    var_26 = ((var_3 != ((((var_0 <= (arr_40 [i_9] [i_9] [i_10] [i_11] [i_11] [14])))))));
                }
            }
        }
    }
    var_27 = var_0;
    #pragma endscop
}
