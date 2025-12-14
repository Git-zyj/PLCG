/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -8064189573081846798;

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_16 = (max(var_16, (((((arr_1 [i_0 - 1]) ? 8244497357780922682 : 8064189573081846797))))));
        arr_2 [i_0] &= (((((var_12 / (arr_0 [i_0] [i_0 - 2])))) * (((var_12 ? ((8 ? -111 : 28)) : var_0)))));
        var_17 |= (max(((max(var_9, var_9))), -var_5));
    }
    #pragma endscop
}
