/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_2;
    var_20 = ((var_18 ? (var_14 * var_3) : ((max(var_9, var_11)))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (max(((((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : var_5))) ? 18866 : var_13)), (((arr_1 [i_0] [8]) ? var_12 : (((arr_1 [i_0] [7]) ? (arr_1 [i_0] [12]) : var_3))))));
        arr_3 [i_0] [i_0] = ((!((((max((arr_0 [i_0]), (arr_1 [i_0] [i_0]))) + ((var_4 ? (arr_0 [i_0]) : var_4)))))));
        var_21 = (max(var_21, ((((-521866141 ? ((~(arr_0 [i_0]))) : ((~(arr_0 [i_0])))))))));
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (arr_0 [i_1]);
        arr_7 [i_1] = ((((min(var_15, (arr_0 [i_1 - 1])))) ? (((((var_7 ? var_5 : (arr_1 [i_1] [i_1])))) ? var_5 : (arr_0 [i_1 + 1]))) : (((((((arr_1 [6] [i_1]) ? var_5 : (arr_1 [i_1] [i_1])))) ? var_4 : (arr_4 [1] [8]))))));

        for (int i_2 = 3; i_2 < 11;i_2 += 1)
        {
            var_22 = (arr_0 [i_1]);
            var_23 -= (arr_4 [i_2] [1]);
        }
        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            arr_13 [i_3] [i_3] = (arr_5 [i_1 + 1] [i_3 + 3]);
            arr_14 [i_3] = var_3;
            var_24 *= ((((!((((arr_0 [i_3]) - var_7))))) ? var_12 : ((((arr_1 [i_1 + 1] [i_1 - 1]) < (((arr_12 [i_3] [i_3]) ? (arr_1 [i_1] [i_3]) : (arr_8 [5] [i_3] [i_3]))))))));
        }
        /* vectorizable */
        for (int i_4 = 2; i_4 < 10;i_4 += 1)
        {
            var_25 = var_1;
            var_26 = (((arr_9 [i_1] [i_4] [i_4 - 2]) | var_1));
        }
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            var_27 *= (arr_0 [i_5]);
            var_28 -= (((arr_0 [i_1]) ? -74 : (((((arr_1 [2] [i_1]) | (arr_4 [i_1] [10])))))));
        }
        var_29 *= (((((((var_1 ? var_11 : var_18))) ? (max((arr_12 [i_1] [i_1]), (arr_1 [i_1] [i_1]))) : (((var_14 < (arr_12 [i_1] [i_1]))))))) ? var_3 : ((-((~(arr_16 [i_1]))))));
    }
    #pragma endscop
}
