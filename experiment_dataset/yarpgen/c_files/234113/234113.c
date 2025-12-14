/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = var_13;
        var_19 = ((((~((min(var_14, 151))))) >> ((((~(arr_0 [i_0]))) - 25701))));
    }

    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        var_20 = var_8;
        var_21 = var_11;
        arr_6 [i_1 - 1] = -472144017;
    }
    var_22 = (!var_13);
    #pragma endscop
}
