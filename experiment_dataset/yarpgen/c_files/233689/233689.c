/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(((8058134131766790785 ? ((var_6 ? (-127 - 1) : (-127 - 1))) : 0)), var_1));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_11 = (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])));
        var_12 = (min(var_12, ((((((arr_0 [i_0] [i_0]) | (arr_0 [i_0] [i_0])))) ? (((arr_0 [i_0] [i_0]) ? 0 : (arr_1 [i_0]))) : (((-1054613327 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0]))))))));
    }
    var_13 = (min(var_13, var_2));
    var_14 = var_9;
    #pragma endscop
}
