/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0] [i_0]);
        var_13 = (min(var_13, 20416));
    }
    var_14 = ((((((var_9 == (-12 & 7363655091589613306))))) & var_0));
    #pragma endscop
}
