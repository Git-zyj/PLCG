/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((max((min(11137912574989602025, 22785)), (42750 <= var_12))));
        arr_3 [i_0] [i_0] = ((var_11 ? ((2179736129 >> (5485 - 5477))) : (!var_10)));
    }
    var_13 = var_3;
    #pragma endscop
}
