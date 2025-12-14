/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-(min(var_9, (min(1, 1717896741))))));
    var_17 = var_15;
    var_18 = (min((max(((var_4 ? 331713712 : var_8)), (24106 > 8877))), ((var_10 ? ((var_3 ? var_12 : 3981800631)) : ((min(var_4, 3)))))));
    var_19 = ((var_12 ? var_8 : var_0));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((+((((arr_1 [i_0]) > 33132)))));
        var_20 += 146;
    }
    #pragma endscop
}
