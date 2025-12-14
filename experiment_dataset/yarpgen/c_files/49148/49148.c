/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        var_11 += ((524287 & -125) ^ ((((var_9 ? var_9 : var_4)) & 33)));
        var_12 = ((-(arr_0 [i_0])));
        var_13 ^= (((~(max((arr_0 [i_0]), (arr_1 [i_0]))))));
        var_14 = (max(var_14, ((((arr_1 [i_0 - 2]) == -116)))));
    }
    var_15 = -753;
    var_16 = (min(var_16, ((((((~23304) + 2147483647)) << (-79 + 79))))));
    var_17 += (!18446744073709551615);
    #pragma endscop
}
