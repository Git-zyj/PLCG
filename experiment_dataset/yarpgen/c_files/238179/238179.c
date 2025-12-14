/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_12;
        var_14 |= (max(5772, 591218481));
    }
    var_15 = (((((((min(var_1, var_3))) + ((var_8 ? var_3 : var_8))))) ? var_8 : var_1));
    var_16 *= min(((((max(var_11, var_5))) ? (var_12 + var_1) : ((var_11 ? var_6 : var_6)))), ((var_7 ? (max(var_13, var_10)) : (var_5 + var_10))));
    #pragma endscop
}
