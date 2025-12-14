/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, 31480));
    var_15 = var_12;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((~(((arr_1 [i_0] [i_0]) ? (((min(1, 1)))) : var_0))));
        var_16 ^= (var_10 & -var_1);
    }
    #pragma endscop
}
