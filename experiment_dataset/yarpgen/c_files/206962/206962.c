/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((-((var_13 ? var_3 : var_9)))))));
    var_16 = (min((45 * var_1), 1));
    var_17 += (min(var_6, ((var_5 ? 0 : -1585429177811212525))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 += ((((((min(-18285, 218))) ? ((218 ? 50637 : 0)) : (arr_0 [i_0]))) >> (208 - 180)));
        var_19 = (max(var_19, (((+(min((arr_1 [i_0]), 1)))))));
    }
    #pragma endscop
}
