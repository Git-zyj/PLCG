/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_16 = (max((min((max(var_2, (arr_1 [i_0]))), ((18446744073709551615 ^ (arr_0 [i_0]))))), var_8));
        var_17 = 224;
        var_18 *= -1;
    }
    var_19 = 0;
    var_20 *= (min(((max((-13 - var_13), var_11))), 6726973870845440295));
    #pragma endscop
}
