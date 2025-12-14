/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((var_6 ? var_0 : var_9)))) ? ((((min(var_8, 102))) ? var_1 : (((var_9 ? var_9 : var_8))))) : var_7));
    var_11 = (var_0 != 11943);

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_12 = ((max(var_2, ((-2390845343247067491 ? 364757239 : 255)))));
        arr_3 [i_0] = (var_8 ^ var_1);
    }
    #pragma endscop
}
