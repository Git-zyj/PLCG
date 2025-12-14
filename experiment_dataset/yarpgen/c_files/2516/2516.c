/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_3;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_19 = ((-var_2 + (17373808226881905603 != var_5)));
        var_20 = (min(var_20, ((((((arr_2 [5]) >= 16888498602639360)) ? 0 : (var_17 / var_15))))));
        var_21 = -199391578;
    }
    #pragma endscop
}
