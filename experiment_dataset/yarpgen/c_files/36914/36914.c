/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;
    var_18 = ((var_14 - (((var_6 >= var_16) ? var_2 : (var_12 - var_12)))));
    var_19 = (((((-2070735075 ? var_5 : var_9))) ? var_7 : (((((var_12 ? var_15 : var_7))) - (var_6 + var_1)))));
    var_20 = (((((2224232249 ? 20339 : ((1 ? 2224232196 : var_13))))) ? -49 : 1187826594648777372));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = var_11;
        arr_4 [4] [4] = ((!((((arr_1 [i_0] [1]) ? var_10 : var_8)))));
        arr_5 [i_0] = (!var_14);
        arr_6 [10] [i_0] = ((var_5 ? (((((arr_0 [i_0]) >= 21)))) : (arr_1 [i_0] [i_0])));
    }
    #pragma endscop
}
