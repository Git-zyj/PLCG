/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= (((((2184898406 % ((1350758247 ? 32753 : 3991218497))))) ? (!var_4) : (((1 - var_2) + (var_13 / var_4)))));
    var_16 = ((((var_0 < (~1))) ? (2110068910 >= var_9) : ((var_12 ? var_13 : (((max(var_1, 50414))))))));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        var_17 ^= (((arr_1 [i_0 - 3]) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 - 3])));
        var_18 ^= ((arr_1 [i_0]) / (arr_0 [i_0 - 2]));
    }
    #pragma endscop
}
