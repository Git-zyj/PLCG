/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 1;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_2 [0] = (((((((-1 ? 3733533234 : 8149)) + var_1))) ? ((((((var_2 ? 1 : 1))) && 1))) : 60785));
        var_21 ^= var_12;
        var_22 = var_17;
        arr_3 [7] [i_0] = (!2484439030751253977);
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        var_23 &= (var_5 != 2484439030751253969);
        var_24 = (-9094808070332168561 || 1);
        var_25 = var_0;
    }
    #pragma endscop
}
