/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((-9223372036854775807 - 1), 204));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_14 &= ((((var_2 ? (var_0 < 204) : ((var_3 ? 15750471918057315328 : 0)))) % ((((!-300358323) ? 129627704 : 48)))));
        var_15 = (((((-76 ? 300358323 : 124))) ? ((max(var_3, ((var_5 ? var_3 : (-9223372036854775807 - 1)))))) : ((min(var_4, var_5)))));
    }
    #pragma endscop
}
