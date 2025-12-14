/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 33;
    var_14 &= var_3;
    var_15 = max(var_10, var_0);
    var_16 = (max((((~var_1) ? (!var_2) : 0)), (((min(var_9, var_8))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = ((4294967295 ? 22 : 4294967282));
        var_17 *= var_0;
    }
    #pragma endscop
}
