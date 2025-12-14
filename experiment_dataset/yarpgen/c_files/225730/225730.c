/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_11 = (4095 ? (((16201929452159055549 > (var_9 || 18446744073709551615)))) : (((var_4 >= ((var_7 ? var_7 : var_2))))));
        arr_3 [i_0] = 96;
        arr_4 [i_0] = max(0, (((var_3 % (var_1 < var_4)))));
    }
    #pragma endscop
}
