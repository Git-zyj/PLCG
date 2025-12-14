/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((((((var_15 ? ((var_17 ? var_11 : var_15)) : ((var_3 ? var_3 : var_19))))) ? var_3 : (((!(27157 <= var_4)))))))));

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0 + 3] = (max(var_3, (((arr_1 [i_0 + 1]) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 + 1])))));
        var_21 = (min(var_21, (arr_1 [i_0 - 3])));
        var_22 ^= (arr_0 [i_0 - 3]);
    }
    var_23 |= 1;
    var_24 &= var_18;
    #pragma endscop
}
