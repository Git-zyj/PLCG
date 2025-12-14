/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    var_11 = (min(var_7, (((var_3 ^ 10) ? (max(10, 2455541724)) : (var_7 != var_7)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = ((~(-32767 - 1)));
        var_12 = (min(var_12, (-5 != -10)));
    }
    var_13 = (min((max(var_9, ((var_0 ? 323939832 : var_1)))), var_3));
    #pragma endscop
}
