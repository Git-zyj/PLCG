/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_13 = ((((((arr_1 [i_0 + 1] [i_0 - 3]) ? (arr_1 [i_0] [i_0 - 2]) : (arr_1 [i_0 + 1] [i_0])))) ? var_3 : var_4));
        var_14 |= var_7;
    }
    var_15 = (!1);
    var_16 += (((((!(!53)))) == var_7));
    #pragma endscop
}
