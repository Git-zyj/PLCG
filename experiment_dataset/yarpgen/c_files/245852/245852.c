/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(((var_4 << ((((var_5 ? 59188 : var_4)) - 59186)))), (min((min(var_13, 1)), ((min(var_4, var_11)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_16 = (((arr_0 [i_0]) & (arr_0 [i_0])));
        var_17 = (var_4 ? var_9 : (arr_0 [i_0]));
    }
    var_18 ^= (min(((min((var_9 != var_3), (1 / var_11)))), 4088));
    var_19 = (125 == 1858840170);
    var_20 *= var_12;
    #pragma endscop
}
