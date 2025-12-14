/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((max((((23349 ? 0 : 496))), ((2194728288256 ? var_16 : var_7)))) + var_14);
    var_18 = (max((((-var_12 ? (((var_0 ? var_12 : var_9))) : ((var_10 ? var_10 : var_1))))), (min(((var_7 ? var_2 : var_13)), var_5))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_19 = (((arr_0 [6]) > (arr_2 [i_0] [i_0])));
        arr_3 [i_0] = ((((var_16 ? var_6 : (arr_2 [i_0] [i_0]))) > -1));
        var_20 = (~-13806);
    }
    var_21 = (min(var_21, var_3));
    #pragma endscop
}
