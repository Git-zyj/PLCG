/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = max(var_0, (max(var_12, (var_11 >= var_0))));
    var_19 = (((((var_11 ? var_16 : (var_16 / -30425)))) && var_5));

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 29899;
        var_20 = 3;
        var_21 = (max(((((255 ? var_2 : var_14)))), (min((var_3 < 4294967285), -var_11))));
    }
    #pragma endscop
}
