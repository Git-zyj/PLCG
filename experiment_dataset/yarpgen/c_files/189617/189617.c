/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_15 = (arr_1 [i_0]);
        arr_2 [i_0 + 1] = (min(28689, (min((arr_0 [i_0]), 25165824))));
        var_16 |= (arr_1 [i_0 - 1]);
        var_17 = (max((min(1, (var_8 <= var_8))), (((arr_0 [i_0 + 2]) >= var_11))));
    }
    var_18 -= (var_2 && var_12);
    #pragma endscop
}
