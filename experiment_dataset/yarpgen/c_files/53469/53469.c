/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0 - 2] = min((-141781627 ^ var_3), ((var_8 ? (~var_11) : var_15)));
        var_18 ^= 34;
    }
    var_19 = max(0, 0);
    #pragma endscop
}
