/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_12 = (max(var_12, (((-1344001905 > (min((((-(arr_2 [i_0])))), (~var_9))))))));
        var_13 = ((var_1 - ((min(1344001898, 111)))));
    }
    var_14 -= var_7;
    var_15 *= (1182929605 / var_0);
    var_16 = -1344001876;
    #pragma endscop
}
