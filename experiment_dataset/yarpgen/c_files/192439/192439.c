/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((65535 << (((((var_5 ? var_6 : 8))) ? var_13 : 8)))))));

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_20 = (min(var_20, 40707));
        var_21 = (min(var_21, ((var_17 ? var_7 : 8))));
    }
    #pragma endscop
}
