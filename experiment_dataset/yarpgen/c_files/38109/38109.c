/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((min(12239, 19284)))));
    var_14 *= var_9;

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_15 = (!var_2);
        var_16 |= (3431621260 >= 12253);
        var_17 -= ((0 >> (236 - 217)));
    }
    #pragma endscop
}
