/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((min(-var_15, ((max(121, var_4))))), ((max(var_1, (min(var_5, var_11)))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [9] = ((var_0 < ((max((arr_1 [i_0]), (arr_1 [i_0]))))));
        var_20 = -766565228;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_21 = -21339992;
        arr_5 [14] |= ((((min((max((arr_0 [i_1]), var_18)), 32444))) ? (((arr_1 [1]) + -766565219)) : ((-(arr_3 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_22 -= var_9;
        arr_8 [i_2] = (max((max((min(var_10, (arr_0 [i_2]))), -130848149)), (~var_17)));
        arr_9 [i_2] [i_2] = ((((((arr_4 [i_2]) ? (-32767 - 1) : 134))) ? (var_2 / 29004) : (min((arr_7 [i_2]), (~var_15)))));
        var_23 = (((((!(arr_0 [i_2])))) + (arr_1 [i_2])));
        var_24 = (-32738 ? (max((max((arr_7 [12]), (arr_0 [i_2]))), (!var_17))) : (arr_0 [i_2]));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        arr_14 [i_3] = ((-(arr_12 [i_3 + 3] [i_3])));
        arr_15 [i_3] = (arr_10 [11]);
        var_25 += ((130848148 ? ((var_14 | (arr_1 [0]))) : var_4));
    }
    var_26 += ((-((min(125, var_2)))));
    var_27 = var_16;
    var_28 = (max(var_28, (((((var_12 - (var_18 > var_12))) % var_14)))));
    #pragma endscop
}
