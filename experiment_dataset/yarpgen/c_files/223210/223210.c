/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_12 = (min(var_12, ((((arr_1 [i_0]) ? var_6 : (arr_1 [i_0]))))));
        arr_2 [i_0] = arr_0 [13];
        var_13 = (min(var_13, (((!(var_11 == var_9))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_14 |= var_6;
        var_15 = (max(var_10, var_9));
    }
    var_16 = var_11;
    var_17 = ((max(-var_5, ((max(var_10, var_10))))));
    var_18 = (!var_4);
    #pragma endscop
}
