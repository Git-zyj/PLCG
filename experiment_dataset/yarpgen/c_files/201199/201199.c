/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -6588;
    var_17 &= var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 = ((0 ? 193 : ((206 ? 10511607843939020938 : 1146903858228571535))));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_6 [i_0] = ((-(((1 != (arr_5 [i_1] [i_1]))))));
            var_19 = (10511607843939020938 != 8);
        }
    }
    var_20 = 50;
    #pragma endscop
}
