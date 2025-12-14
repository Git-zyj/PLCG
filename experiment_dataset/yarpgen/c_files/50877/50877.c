/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_20 = (arr_1 [4] [i_0]);
        var_21 ^= ((((arr_0 [i_0 + 3] [i_0 - 2]) && var_8)));
        var_22 |= (min(-1851964905, (max(var_6, (arr_1 [i_0 + 1] [i_0])))));
        var_23 = (max(var_23, (arr_1 [i_0 + 2] [i_0 + 2])));
        var_24 = (max(var_24, (arr_1 [i_0 + 3] [i_0 - 1])));
    }
    var_25 = (min(var_25, ((min(0, -1549577813)))));
    var_26 = var_18;
    var_27 -= ((!(((~(var_16 >= 419214698))))));
    #pragma endscop
}
