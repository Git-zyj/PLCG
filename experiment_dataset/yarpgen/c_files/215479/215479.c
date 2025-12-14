/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= var_4;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 ^= ((-1099511103488 ? (((!(arr_1 [i_0])))) : ((max((arr_1 [i_0]), ((!(arr_1 [i_0]))))))));
        var_19 = (min(var_19, 1099511103485));
        arr_2 [i_0] = 34359738367;
    }
    var_20 = var_9;
    var_21 = var_6;
    #pragma endscop
}
