/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= var_10;
    var_18 = var_13;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = (((var_3 + 2147483647) << (((var_16 + 3931) - 12))));
        arr_4 [i_0] = ((-127 - 1) & -29095);
        var_19 ^= var_12;
        arr_5 [i_0] = (var_4 % var_3);
    }
    var_20 = (((min(((var_11 ? var_3 : var_6)), ((max(var_5, var_3))))) / var_16));
    #pragma endscop
}
