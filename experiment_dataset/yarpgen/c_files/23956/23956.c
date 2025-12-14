/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 3117048961529924577;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_16 = (min(var_16, ((((max((arr_0 [i_0]), ((var_9 ? var_0 : var_3)))) / (min((((227 ? 206 : 22138))), (arr_1 [i_0]))))))));
        var_17 = (!44);
    }
    #pragma endscop
}
