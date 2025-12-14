/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((!(((max(var_5, var_10)))))))));
    var_16 = ((+(((var_5 + var_6) - var_14))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_17 *= ((((max(16776, 119))) ? (min(48780, 0)) : ((max((arr_1 [i_0]), var_9)))));
        arr_3 [i_0] = (127 & 5281);
    }
    #pragma endscop
}
