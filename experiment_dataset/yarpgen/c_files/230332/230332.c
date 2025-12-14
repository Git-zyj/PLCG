/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_6));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_21 = 1852262899;
        var_22 = var_19;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_23 = ((var_5 ? (((arr_2 [i_1] [i_1]) ? (((~(arr_1 [1])))) : (arr_2 [i_1] [i_1]))) : (arr_2 [5] [5])));
        var_24 = ((-(arr_2 [2] [2])));
    }
    #pragma endscop
}
