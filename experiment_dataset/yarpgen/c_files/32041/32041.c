/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 0;
    var_14 -= (max(var_1, (var_3 * var_12)));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_15 = (((((arr_0 [i_0] [i_0 - 2]) ? ((2083294151 ? 65520 : var_7)) : 124)) * var_8));
        arr_2 [i_0] = (arr_1 [i_0 - 2] [i_0]);
        var_16 = (((arr_1 [i_0] [i_0]) % (arr_1 [i_0 + 1] [i_0 + 1])));
    }
    #pragma endscop
}
