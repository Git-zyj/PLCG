/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_12 = (max(var_12, 1500));
        var_13 = var_0;
        var_14 = (max(var_14, ((var_9 ? var_9 : var_9))));
        arr_2 [i_0] = 3;
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        var_15 = (max(var_15, (1516309241 * 3495826322)));
        var_16 = 1516309256;
    }
    var_17 |= var_4;
    #pragma endscop
}
