/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [6] = (((~5888) && (arr_0 [i_0])));
        arr_3 [i_0] = var_4;
        var_11 -= var_6;
        var_12 = 3207461091;
    }
    #pragma endscop
}
