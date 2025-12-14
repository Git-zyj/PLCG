/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_11 = arr_1 [i_0] [i_0];
        var_12 = (arr_1 [i_0] [i_0]);
    }
    var_13 = 32500;
    var_14 += (max(((min(var_4, (min(var_0, var_3))))), var_7));
    #pragma endscop
}
