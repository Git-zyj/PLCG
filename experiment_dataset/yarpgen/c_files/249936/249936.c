/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_20 = 0;
        arr_3 [i_0] = (arr_0 [i_0]);
        var_21 += (((arr_0 [14]) <= (((arr_2 [1] [1]) ? (arr_1 [i_0 + 2]) : 3720325796))));
        var_22 ^= (((arr_0 [1]) + (arr_0 [6])));
        var_23 = (max(var_23, var_8));
    }
    var_24 = (max((min(var_13, ((3720325786 ? 574641505 : 0)))), var_16));
    var_25 ^= var_12;
    #pragma endscop
}
