/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((var_0 ? 12357 : 21))) ? 3040765443 : 12357));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_12 = (max(var_12, (((((min((min(var_0, (arr_1 [i_0] [i_0]))), ((max(235, 126)))))) ? (arr_0 [i_0]) : (max(var_10, var_7)))))));
        var_13 = ((min(var_6, (-127 - 1))));
    }
    #pragma endscop
}
