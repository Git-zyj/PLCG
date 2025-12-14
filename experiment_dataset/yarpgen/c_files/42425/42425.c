/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_4 [i_0] = (arr_3 [i_0]);
        arr_5 [i_0] [i_0 + 1] = ((max(-73, (arr_1 [i_0 + 2]))));
        var_15 = -71;
        arr_6 [i_0] = (-57 ^ ((var_3 | (arr_1 [i_0 - 2]))));
    }
    var_16 = var_11;
    var_17 = ((-(((var_6 == (0 >= 1212985949))))));
    #pragma endscop
}
