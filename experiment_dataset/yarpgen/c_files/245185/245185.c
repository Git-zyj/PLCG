/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 = (((((((arr_3 [i_0] [i_0]) <= (arr_3 [i_0] [i_0]))))) <= (max((-9223372036854775807 - 1), 126))));
        arr_4 [i_0] [0] = ((!(arr_0 [i_0])));
    }
    var_21 = (((var_7 <= var_6) <= ((1 ? var_14 : 1887019083))));
    #pragma endscop
}
