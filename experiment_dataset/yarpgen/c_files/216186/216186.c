/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_2 ^ (var_12 || var_5)));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_16 = ((3556460116 ? 4294967284 : (((122 ? var_14 : -32750)))));
        arr_3 [3] = -5192970731427523425;
    }
    #pragma endscop
}
