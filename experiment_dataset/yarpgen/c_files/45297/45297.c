/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_20 += (arr_2 [i_0]);
        var_21 = 1128164103545730039;
    }
    var_22 = (max(var_22, (((((min(var_11, (max(var_10, var_14))))) ? (max((min(var_17, var_0)), ((var_11 ? var_7 : var_4)))) : ((min(var_0, 1754207445))))))));
    #pragma endscop
}
