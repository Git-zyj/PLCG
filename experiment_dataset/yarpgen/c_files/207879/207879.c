/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((((((max(var_10, 4294967295))) ? (max(0, var_2)) : (((min(-6319, var_0))))))))));
    var_12 = var_6;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = -864773274;
        var_13 -= -245;
    }
    #pragma endscop
}
