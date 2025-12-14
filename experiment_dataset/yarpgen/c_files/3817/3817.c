/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_19 = (min(var_19, ((((((((var_7 >= 5873796625211281522) > (arr_0 [i_0]))))) >= (((var_9 ? (arr_0 [i_0]) : 124))))))));
        var_20 = (min(var_20, var_3));
        var_21 = (min(var_21, -6));
        var_22 = (max(var_22, (((var_16 ? (((arr_0 [i_0]) ? var_16 : var_7)) : (((var_10 ? (arr_0 [i_0]) : (arr_1 [i_0] [5])))))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] &= (max((((84 * var_12) ? var_7 : ((var_10 ? 8469845005571038944 : 2)))), (((~((-(arr_2 [i_1]))))))));
        var_23 = (min(var_23, ((((arr_3 [i_1] [5]) || (65533 <= 2))))));
        var_24 &= (((((((((arr_0 [1]) / 201))) ? (min(var_5, 1)) : 0))) > (((2132693085172824577 / var_8) ? (max(var_7, var_13)) : ((var_15 ? var_8 : -188878625294912435))))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] [i_2] = (((arr_5 [i_2] [i_2]) <= (arr_7 [i_2])));
        var_25 |= (((((var_13 ? var_3 : ((var_3 ? (arr_1 [i_2] [i_2]) : (arr_8 [i_2])))))) ? -28518 : (((var_7 < ((var_5 ^ (arr_1 [i_2] [i_2]))))))));
        var_26 &= ((-257520271 ? (arr_2 [i_2]) : var_1));
        arr_11 [i_2] [i_2] = ((var_5 ? (-84 - -var_8) : (((((arr_9 [1] [i_2]) ? -74 : (arr_1 [i_2] [i_2]))) + 14966413594420822884))));
        var_27 -= (min(((((arr_8 [i_2]) >= var_5))), (max(116, ((min(-26, (arr_2 [i_2]))))))));
    }
    var_28 |= var_13;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 13;i_4 += 1)
        {
            {
                var_29 = ((36 ? -26 : ((-(arr_16 [i_4 - 1] [i_4 - 2] [i_4 + 1])))));
                var_30 = var_18;
                var_31 += (max(((((min(var_5, 21410))) - var_13)), var_6));
                var_32 |= (max((((arr_16 [i_4 + 1] [i_4 + 1] [i_4 - 1]) ? ((~(arr_16 [i_3] [i_3] [i_4]))) : 5)), var_13));
                var_33 = (min(var_33, (((((var_13 / ((((arr_13 [i_3] [i_4 + 1]) ? var_9 : 1))))) == (max(((var_5 ? var_10 : var_18)), (((~(arr_15 [i_3])))))))))));
            }
        }
    }
    #pragma endscop
}
