/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        var_16 = (((((-29 ? var_3 : (arr_2 [i_0 - 3])))) ? ((175 ? 646335328 : -107)) : (((65535 ? (arr_2 [i_0 + 1]) : var_4)))));
        var_17 ^= (((((var_11 ? var_12 : 8374148038606601027))) ? ((((arr_0 [i_0 - 1]) ? var_11 : -1095))) : ((1 ? var_0 : 128))));
    }
    var_18 = var_13;
    var_19 |= ((var_1 ? (((var_7 ? var_3 : ((1 ? 1 : var_5))))) : ((var_15 ? (((var_11 ? var_4 : -1103))) : var_12))));
    #pragma endscop
}
