/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((max(((var_3 ? 828 : var_6)), var_16)), (((!((min(28, var_8))))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 = 137;
        var_20 ^= (max(var_16, (((-1 <= var_0) * ((((arr_1 [3]) > var_4)))))));
    }
    #pragma endscop
}
