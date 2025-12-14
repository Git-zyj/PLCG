/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0] [i_0]);
        var_13 ^= ((3054007060658539292 ? var_2 : 71));
    }
    var_14 = ((5699729890311753864 == (var_7 % var_3)));
    var_15 = ((((min(var_3, -13))) ? (~var_12) : ((var_5 ? (((var_12 ? 100 : var_4))) : (min(var_8, var_4))))));
    var_16 = (((var_11 % (min(2245469275761769396, var_2)))));
    #pragma endscop
}
