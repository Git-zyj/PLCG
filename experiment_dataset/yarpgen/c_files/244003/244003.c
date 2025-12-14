/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [15] = (((arr_0 [i_0] [i_0]) ? ((((var_0 < (var_2 > 127))))) : (max(((27 ? var_3 : 140187732541440)), ((max((arr_1 [i_0]), var_3)))))));
        arr_3 [i_0] = var_1;
        var_15 ^= (arr_1 [i_0]);
        var_16 = (min((var_1 % var_11), (-2147483647 - 1)));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_17 = ((var_11 ? (arr_5 [i_1]) : (((((var_7 ? var_0 : var_14)) < (min((arr_4 [i_1] [i_1]), (-2147483647 - 1))))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    arr_10 [i_1] [i_2] [i_1] = ((((((var_8 >= (arr_5 [i_1]))) ? ((var_2 ? 108 : var_4)) : 0)) - var_8));
                    arr_11 [i_2] [i_1] [i_2] = (arr_0 [i_1] [i_1]);
                    arr_12 [i_2] [i_1] [i_2] = (arr_1 [i_1]);
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] |= ((((((arr_0 [i_4] [i_4]) ? 23709 : (arr_14 [13] [i_4])))) <= ((var_12 & ((var_6 ? (arr_7 [10]) : 21935))))));
        arr_16 [i_4] [i_4] = var_3;
        var_18 = (min(var_18, ((max((max(((6904178358835781601 ? var_2 : var_13)), (var_8 > var_12))), var_6)))));

        /* vectorizable */
        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            var_19 = ((~((6904178358835781583 ? var_0 : var_10))));
            var_20 = var_5;
            var_21 ^= (((arr_9 [5] [i_5 + 2] [i_5] [i_4]) ? (arr_18 [i_5 + 2]) : (arr_9 [i_4] [i_4] [i_4] [i_4])));
            var_22 = (min(var_22, (((~(var_4 & var_12))))));
        }
        for (int i_6 = 3; i_6 < 12;i_6 += 1)
        {
            arr_22 [i_6] [i_6] = (i_6 % 2 == zero) ? ((min(((((0 >> (((arr_8 [i_4] [i_6] [i_4]) - 205467537248441622)))) == (arr_20 [i_6] [i_6]))), (((arr_20 [i_6] [1]) > ((min(var_11, var_9)))))))) : ((min(((((0 >> (((((arr_8 [i_4] [i_6] [i_4]) - 205467537248441622)) - 6892229960756363496)))) == (arr_20 [i_6] [i_6]))), (((arr_20 [i_6] [1]) > ((min(var_11, var_9))))))));
            var_23 = (max(var_23, (((((min((arr_17 [i_6 + 3]), var_7))) < (((arr_17 [i_6 - 1]) / var_8)))))));
            arr_23 [i_6] = 0;
        }
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    {
                        arr_31 [i_9] [i_8] [i_8] [i_8] [i_4] = ((var_6 != (min(((max(var_7, (arr_4 [7] [7])))), (min(var_1, -6904178358835781615))))));
                        var_24 &= ((var_9 ? (max((~-94), (var_5 < var_11))) : -21935));
                        var_25 = (max(var_25, var_2));
                        var_26 = var_2;
                    }
                }
            }
            arr_32 [i_4] [i_4] = var_12;
            var_27 = (max(var_27, (((var_3 > ((((min(var_2, var_12)) > (var_11 > -7)))))))));
        }
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            var_28 = ((((((min(var_6, var_7))) < ((65528 ? (arr_14 [i_4] [8]) : 15)))) ? var_0 : ((min((arr_19 [3] [i_10] [i_4]), var_7)))));
            var_29 += ((((((((-986947396 ? var_7 : var_1))) ? var_3 : (max(var_9, var_2))))) ? (arr_30 [i_10] [i_4] [i_4] [2] [12]) : (((var_10 < -679589071) ? (51446106 / var_1) : (48138 >> var_0)))));
            var_30 = var_9;
        }
    }
    var_31 |= ((var_12 % 6904178358835781590) ? ((((var_8 < (var_5 == var_4))))) : ((0 ? var_8 : (((min(var_12, 34)))))));
    var_32 &= (min((((max(var_1, var_11)) + (var_0 == var_5))), (((((max(var_2, var_3))) || (((-379857089 ? var_13 : var_10))))))));
    #pragma endscop
}
