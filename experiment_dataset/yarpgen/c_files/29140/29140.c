/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 4816628356937843438;

    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = -8129;
        var_11 = 18446744073709551615;
    }
    #pragma endscop
}
