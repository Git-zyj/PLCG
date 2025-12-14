/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    arr_6 [i_0] = (!var_4);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_15 = ((((((arr_2 [i_1] [i_2] [i_2]) ? var_4 : (arr_11 [12] [i_2] [i_2 + 1] [i_2] [12] [i_4])))) ? (var_1 / var_12) : ((var_4 ? var_5 : var_12))));
                                var_16 -= ((!(arr_7 [i_2 + 1])));
                            }
                        }
                    }
                }
            }
        }
        arr_13 [1] = ((arr_5 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1]) ^ var_5);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        var_17 = var_6;
                        arr_24 [i_5] [i_6] [i_5] [i_0] = (((((var_4 ? var_0 : var_2))) ? (arr_19 [i_0] [i_0 + 1] [i_0 + 1]) : (arr_0 [i_0 + 1] [i_0 + 1])));
                        arr_25 [i_7] [i_5] [i_5] [i_5] [i_0 + 1] = var_14;
                        arr_26 [i_0] [i_0] [i_0] [i_0] = ((arr_2 [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? (((arr_21 [i_0] [i_5]) | (arr_12 [i_0] [i_0 + 1] [i_0] [i_0] [i_0]))) : (arr_19 [i_0 + 1] [i_0 + 1] [i_0 + 1]));
                    }
                    for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
                    {
                        var_18 = (arr_10 [i_0]);

                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            var_19 = (max(var_19, ((((var_12 ^ var_7) ? (((arr_4 [i_0] [i_0]) ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : var_5)) : (arr_12 [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 1]))))));
                            var_20 = var_8;
                            arr_33 [i_0] [i_0] [i_6] [i_0] [i_9] [i_9] [i_6] = (((~var_8) ? 11 : (!var_0)));
                            arr_34 [13] = var_4;
                        }
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            var_21 = (max(var_21, var_7));
                            arr_39 [i_0] = ((-9211223315358802178 ? 445754041 : 6314873419719807508));
                        }
                    }
                    for (int i_11 = 0; i_11 < 20;i_11 += 1) /* same iter space */
                    {
                        arr_43 [1] [i_6] [i_5] [i_5] [i_0 + 1] = ((252 ? 245 : 0));
                        var_22 -= (248 <= 18);
                    }
                    for (int i_12 = 3; i_12 < 17;i_12 += 1)
                    {
                        arr_47 [i_0] [1] [i_5] [i_5] [3] [i_12 - 2] = (arr_2 [5] [i_6] [i_0]);
                        arr_48 [i_5] [i_5] [i_5] [i_5] = (((arr_28 [i_12 + 2] [i_0 + 1] [i_0] [i_0] [i_0 + 1]) ? var_4 : (arr_28 [i_12 + 1] [i_0 + 1] [i_0] [i_0] [i_0 + 1])));
                        var_23 = (((arr_23 [i_12] [5] [i_12 + 2] [i_0 + 1]) ? var_8 : ((var_11 ? var_3 : (arr_2 [1] [i_5] [0])))));
                    }
                    var_24 = var_10;
                }
            }
        }
    }
    for (int i_13 = 1; i_13 < 21;i_13 += 1)
    {
        arr_53 [i_13] [i_13] = ((-(arr_49 [i_13 + 2])));
        var_25 = (max(var_25, ((~((((((arr_50 [22]) ^ var_1))) ? (((arr_52 [12]) | (arr_51 [i_13]))) : (~var_6)))))));
        var_26 -= var_7;
        arr_54 [i_13] = ((var_11 ? (arr_49 [12]) : (max(((var_6 & (arr_49 [i_13]))), ((var_9 ? var_10 : var_5))))));
    }
    var_27 = var_7;
    var_28 = (((((((min(var_10, var_13))) ? var_9 : (var_5 == var_0)))) ? (min((min(var_3, var_6)), ((var_6 ? var_13 : var_0)))) : (var_14 + var_13)));
    #pragma endscop
}
