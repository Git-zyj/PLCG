/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_19 = (((((-2462736314235694243 ? (arr_2 [i_0]) : (arr_2 [i_0])))) ? ((((arr_2 [i_0]) || (arr_2 [i_0])))) : (((6014709072639218119 > (arr_2 [i_0]))))));
        arr_4 [i_0] [i_0] = (((((arr_0 [i_0]) ? (((0 ? (arr_3 [i_0]) : var_15))) : ((var_17 ? 158 : (arr_1 [i_0])))))) ? (((-145683917699423829 ? (((arr_0 [i_0]) ? var_4 : 1)) : 169))) : (arr_1 [i_0]));
    }
    var_20 = 108;
    #pragma endscop
}
