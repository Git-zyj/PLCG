/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((145 ? -222 : 0)));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_16 = ((~(~957)));
        arr_3 [i_0] = (((-115 ? ((109 ? 1 : var_14) : (((arr_2 [i_0]) ? (arr_1 [i_0]) : 8192))))));
        var_17 -= var_11;
    }
    var_18 = var_2;
    var_19 = 29360128;
    #pragma endscop
}
