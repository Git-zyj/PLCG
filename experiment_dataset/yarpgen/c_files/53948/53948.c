/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    var_13 -= var_4;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_14 = ((((min(((var_0 ? (arr_1 [i_0] [i_0]) : 32767)), var_0))) ? (min(-1896718629, ((-(arr_1 [i_0] [i_0]))))) : var_0));
        var_15 = min((max((arr_1 [i_0] [i_0]), (min(var_5, var_3)))), var_11);
        var_16 *= 709515065084620502;
    }
    #pragma endscop
}
