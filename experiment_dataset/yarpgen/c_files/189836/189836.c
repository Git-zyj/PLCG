/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_7, -220809965684196790));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 = 1147569252;
        var_13 = ((min(232, 1)));
        arr_2 [i_0] = var_10;
        var_14 = (max(var_14, ((max(255, 184)))));
    }
    var_15 = (((min(var_5, var_2)) + (~var_5)));
    #pragma endscop
}
