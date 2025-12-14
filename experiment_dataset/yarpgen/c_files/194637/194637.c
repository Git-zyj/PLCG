/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_11 = ((-64 + 2147483647) << (var_0 - 98));
        var_12 = (arr_1 [1]);
    }
    var_13 = var_0;
    #pragma endscop
}
