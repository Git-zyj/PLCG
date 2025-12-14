/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= -1595664106;
    var_17 = var_15;

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        var_18 |= 1;
        var_19 = (((min((((arr_1 [i_0]) * var_2)), (arr_1 [i_0])))) ? 1 : 101);
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 16;i_1 += 1)
    {
        var_20 = (min(var_20, (((106 | (arr_4 [i_1] [i_1]))))));
        var_21 = (min(var_21, var_7));
    }
    var_22 = var_15;
    #pragma endscop
}
