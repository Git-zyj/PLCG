/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (min(var_16, var_5));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (1 / 2226186329418648608);
        var_19 = (min(var_19, 1852870456));
        var_20 += -6785939098928831658;
    }
    #pragma endscop
}
