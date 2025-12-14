/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((var_3 ^ var_7) ? var_2 : ((~(-9223372036854775807 - 1)))))) ? (min((~var_7), var_12)) : var_3));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 = arr_0 [i_0];
        var_15 &= (((((!(arr_1 [i_0] [i_0])))) < (!var_10)));
        arr_3 [i_0] [i_0] = max((((arr_0 [i_0]) ? (((arr_0 [i_0]) ? (arr_2 [i_0]) : var_8)) : (arr_2 [i_0]))), (((var_3 % var_3) ? (arr_0 [i_0]) : (arr_2 [i_0]))));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_16 *= ((((((arr_2 [i_1 - 1]) ? (((~(arr_0 [7])))) : 124))) ? ((max((~var_9), (((arr_2 [i_1 + 2]) ? var_6 : -26806))))) : ((var_9 ? var_7 : var_5))));
        arr_6 [i_1] [i_1 + 2] = (!((max(((var_2 ? 63 : (arr_2 [i_1]))), (arr_0 [i_1 + 1])))));
        arr_7 [i_1] [i_1 + 2] = ((((~(((1 < (arr_1 [i_1] [3]))))))) | (((arr_2 [i_1]) ? (arr_2 [i_1 + 1]) : (arr_2 [i_1 + 1]))));
        var_17 += ((((((((var_3 ? (arr_2 [i_1 + 1]) : 1))) ? (((arr_0 [i_1]) ? var_12 : 1)) : (((72 ? (arr_5 [i_1 + 2]) : (arr_5 [i_1]))))))) ? var_6 : (((arr_2 [i_1 + 1]) ? (arr_4 [i_1]) : (arr_4 [i_1 + 1])))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 16;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = ((!(((var_9 ? var_7 : 0)))));
        var_18 *= ((var_4 | (((arr_1 [i_2] [i_2 + 2]) | var_8))));
        arr_12 [i_2] = (((arr_9 [i_2 + 1]) % (arr_2 [i_2 + 1])));
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        var_19 = (min(var_19, ((((((arr_14 [i_3 - 1] [i_3]) ? (var_0 | var_3) : (((arr_13 [i_3 - 1] [i_3]) + var_3)))) * (((((!var_5) && (!576460683583946752))))))))));
        var_20 |= ((!(arr_14 [i_3 - 1] [i_3])));
        arr_15 [i_3] = 3840;
        var_21 += (max(((((arr_13 [i_3] [i_3 - 1]) + 63))), 35184371040256));
    }
    #pragma endscop
}
