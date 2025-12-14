/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = ((18446744073709551615 - (min((max(var_9, 72)), (~3205710916)))));
        var_11 += var_6;
    }
    var_12 += 1;
    #pragma endscop
}
