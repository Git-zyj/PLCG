/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 8380416;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 = (max((arr_0 [i_0]), (var_0 - -32767)));
        var_14 ^= 2097150;
    }
    #pragma endscop
}
