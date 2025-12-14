/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 1019251872;
    var_13 = (min(var_13, var_8));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_14 ^= var_10;
        arr_4 [i_0] = var_1;
        arr_5 [i_0] [i_0 + 1] = var_3;
    }
    for (int i_1 = 3; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_15 = ((var_5 ? (arr_9 [i_1 + 1] [i_1]) : (max(-3380209128433635658, var_4))));

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_16 |= (((max((((arr_10 [i_1]) & (arr_9 [i_1] [i_2]))), 1130181906)) > (max(var_4, var_6))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        var_17 = (((-(arr_7 [i_3]))));
                        var_18 = var_8;
                        var_19 = (max(var_19, ((((((var_9 ? -var_7 : (!1019251873)))) ? (((max(var_0, var_0)) ^ ((max((arr_2 [13]), -1019251873))))) : (((((var_11 > var_2) < (var_11 / var_0))))))))));
                    }
                }
            }
        }
        arr_16 [i_1 - 1] = var_0;
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    {
                        arr_27 [i_6] [i_6] [i_6] [i_5] [i_1 - 1] [i_1 - 1] = (((-(arr_10 [i_7]))));
                        var_20 = (max(((((((arr_13 [i_7] [i_7]) ? (arr_26 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 + 1]) : var_5))) ? var_3 : var_1)), -var_4));
                        var_21 |= 1019251847;
                    }
                }
            }
        }
    }
    for (int i_8 = 3; i_8 < 19;i_8 += 1) /* same iter space */
    {
        arr_30 [i_8] [i_8] &= (arr_6 [14] [17]);
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 19;i_10 += 1)
            {
                {

                    for (int i_11 = 3; i_11 < 18;i_11 += 1) /* same iter space */
                    {
                        var_22 = (((var_7 ? var_9 : (var_10 > -1826331990))));
                        arr_39 [5] [i_9] [i_9] [i_11 - 1] = ((((((~var_5) ? (arr_19 [i_8 - 2] [i_11 + 2]) : (arr_18 [i_10 + 1] [i_11])))) ? ((((((var_3 ? -1019251875 : 5186760364379154227))) ? (arr_0 [i_8 + 1]) : (max(var_2, (arr_17 [i_8])))))) : (max(((max(var_6, var_2))), ((~(arr_31 [i_9])))))));
                        var_23 = ((+(((!(((var_10 >> (((arr_1 [i_8 - 1] [i_8 - 1]) - 3013657505))))))))));
                        var_24 = (((((arr_6 [i_8 - 2] [i_8 - 3]) ? var_8 : var_6)) - (max(var_0, var_6))));
                    }
                    /* vectorizable */
                    for (int i_12 = 3; i_12 < 18;i_12 += 1) /* same iter space */
                    {
                        var_25 = ((~((var_9 ? var_3 : -25103))));
                        var_26 = (max(var_26, (6 / 2903563917)));

                        for (int i_13 = 0; i_13 < 20;i_13 += 1)
                        {
                            var_27 = (arr_8 [i_10]);
                            var_28 = var_7;
                            var_29 ^= (var_5 ? ((var_8 ? (arr_18 [i_8 - 2] [i_8]) : var_8)) : (arr_36 [i_8 - 2] [12]));
                        }
                    }
                    var_30 = (arr_1 [i_8] [i_9]);
                    var_31 = (((((((var_11 ? var_7 : var_1))) ? -var_0 : (4294967284 / 25165824)))) ? -3305 : (max((var_11 + var_11), ((var_11 ? var_7 : var_1)))));
                }
            }
        }
    }
    #pragma endscop
}
