/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(117, 51855));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_14 -= (arr_0 [i_0]);
        var_15 = 2399896512;
    }
    #pragma endscop
}
