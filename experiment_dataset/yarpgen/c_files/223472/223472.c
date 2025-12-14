/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (max(576460752303423487, 28));
        var_11 = var_10;
        var_12 = -576460752303423476;
    }
    var_13 = var_1;
    #pragma endscop
}
