/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_17 = (((((var_2 ? (max(var_7, var_11)) : (var_9 >> var_8)))) || var_0));
                    arr_8 [10] [1] [i_1] [1] = (min(var_7, var_5));

                    for (int i_3 = 3; i_3 < 11;i_3 += 1) /* same iter space */
                    {
                        var_18 = (min(var_18, var_6));
                        var_19 = (!((((((var_9 ? var_10 : var_8))) ? (231 - var_5) : var_0))));

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            var_20 = (min((((184 % 22710) ? 0 : 42825)), (max(var_4, var_5))));
                            var_21 *= (((((min(var_5, var_13)) == (!var_3))) ? var_10 : var_0));
                            var_22 *= (min(22710, 12));
                            arr_14 [i_0] [10] [i_0] [9] [i_1] [i_0] = var_2;
                        }
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            var_23 = (((((min(var_16, var_6)))) ? (((((min(var_6, var_12))) && var_4))) : ((var_16 ? var_0 : var_2))));
                            var_24 = ((((var_3 ? var_15 : var_2)) >> var_2));
                        }
                        arr_18 [i_3] [i_1] [i_1] [i_0] = 5211853417524386277;
                    }
                    for (int i_6 = 3; i_6 < 11;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 1; i_7 < 10;i_7 += 1)
                        {
                            var_25 = (max(var_25, (((-(((((var_2 ? var_1 : var_10))) ? ((var_2 ? var_3 : var_14)) : var_12)))))));
                            arr_25 [i_1] [i_1] = (((((min(var_3, var_11)) + 2147483647)) >> (-var_11 - 1586464053)));
                            arr_26 [i_0 - 3] [i_1] [5] [i_6] [i_6] = (((((((max(var_12, var_9))) ? var_16 : (min(var_0, var_6))))) ? var_6 : (~var_16)));
                        }
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            var_26 = (!-var_5);
                            arr_29 [i_8] [i_1] [i_2] [i_1] [i_0] = ((((max((var_16 == var_0), var_1))) * (((var_14 || (var_11 % var_0))))));
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            arr_34 [i_1] = var_9;
                            var_27 = (((((var_15 ? (((var_11 ? var_6 : var_8))) : var_13))) ? (var_5 - var_0) : var_7));
                        }
                        for (int i_10 = 1; i_10 < 10;i_10 += 1)
                        {
                            var_28 = ((((((((var_8 ? var_6 : var_6))) / var_3))) || ((((var_8 | -13) ? var_2 : var_14)))));
                            var_29 = (max(var_29, (((((((var_9 ? var_8 : 65511))) ? (var_8 != var_6) : (!184)))))));
                        }
                        var_30 = -var_13;
                        var_31 = ((min(var_0, (min(var_1, var_0)))));
                        arr_39 [i_0] [i_0 + 1] [i_0] [i_0] [i_1] = -var_11;
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 12;i_12 += 1)
                        {
                            {
                                var_32 = (min(91, 1));
                                var_33 = ((var_8 ? (max(var_1, var_1)) : ((((!var_6) >= (var_0 || var_1))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_34 = ((var_10 ? (((((var_16 >> (var_3 - 10673)))) ? (max(var_2, var_14)) : (!var_11))) : (((((var_11 / var_0) == (min(var_13, var_16))))))));
    /* LoopNest 3 */
    for (int i_13 = 3; i_13 < 19;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 21;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 21;i_15 += 1)
            {
                {
                    var_35 = ((((var_16 >= ((var_3 ? var_9 : var_0)))) ? var_8 : var_13));
                    var_36 = var_10;
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 21;i_16 += 1)
                    {
                        for (int i_17 = 1; i_17 < 20;i_17 += 1)
                        {
                            {
                                arr_59 [i_13 + 1] [i_13 + 1] [i_14] [i_15] [i_16] [i_17 - 1] [i_13] = var_10;
                                var_37 = (min(((max(var_15, (!var_15)))), ((min(var_13, var_0)))));
                                var_38 = (!var_4);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
