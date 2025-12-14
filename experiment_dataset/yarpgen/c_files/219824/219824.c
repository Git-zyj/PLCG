/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= (var_10 << -var_10);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_21 = (~1951699968209394357);
        var_22 = (min(var_22, (-32767 - 1)));
        arr_3 [i_0] = (~13961729523303172096);
    }
    var_23 = (var_16 | (~-299118498939457299));
    #pragma endscop
}
