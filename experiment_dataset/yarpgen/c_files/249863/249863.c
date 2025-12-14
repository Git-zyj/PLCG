/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= var_8;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_12 = (min(((((arr_1 [i_0]) | ((((arr_1 [i_0]) < 1)))))), 18446744073709551615));
        var_13 = (min(var_13, (((((max(var_1, (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))))) ? var_8 : 1)))));
    }
    var_14 *= var_0;
    var_15 = (max((((var_2 || -1) || (!var_10))), ((((min(var_8, var_10))) < 113))));
    #pragma endscop
}
