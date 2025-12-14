/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, -4151921292337185163));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_21 = (max(var_21, var_8));
        var_22 = (arr_0 [i_0 + 4]);
        arr_4 [i_0] [i_0] = 384;
    }
    var_23 = (min(var_23, (var_7 / var_4)));
    #pragma endscop
}
