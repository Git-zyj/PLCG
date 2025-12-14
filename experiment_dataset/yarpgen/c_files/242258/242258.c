/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_10 = ((-((~(arr_0 [i_0])))));
        var_11 = (!(-9223372036854775807 - 1));
        var_12 = ((((min((arr_2 [i_0] [i_0]), (9223372036854775807 && 174)))) <= 179));
    }
    var_13 &= ((((max(var_1, var_6))) ? var_3 : 158));
    #pragma endscop
}
