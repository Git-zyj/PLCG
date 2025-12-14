/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_7;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_19 = (((arr_2 [i_0 - 1] [i_0]) ? (arr_2 [i_0 + 1] [3]) : (arr_2 [i_0 - 1] [4])));
        var_20 ^= (((var_2 == var_6) ? (((-2056536295 && (arr_1 [i_0])))) : (arr_3 [1] [i_0 + 2])));
    }
    #pragma endscop
}
