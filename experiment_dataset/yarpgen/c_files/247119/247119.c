/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (~var_1);

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_11 = ((~(((((1123345818 ? var_3 : 786432))) ? 8 : var_1))));
        var_12 = (((var_6 && (((1123345818 * (arr_0 [14])))))) ? var_0 : var_0);
    }
    #pragma endscop
}
