/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_15 |= (arr_2 [4]);
        var_16 = 3609999362;
    }
    var_17 |= var_9;
    var_18 += var_4;
    var_19 |= var_5;
    #pragma endscop
}
