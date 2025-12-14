/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_10 <= 1);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = (arr_1 [i_0]);
        var_22 = (175575647 + 1978858815);
        var_23 ^= ((5449014543595504537 >> (13599 - 13552)));
    }
    #pragma endscop
}
