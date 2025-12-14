/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -19653;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] = (arr_0 [i_0 - 1] [i_0 - 1]);
        arr_5 [i_0] = ((var_7 && (arr_1 [i_0 + 1] [i_0 + 1])));
        arr_6 [2] = (!var_1);
    }
    var_14 = ((var_4 ? 18 : ((var_9 & ((min(var_2, 1)))))));
    #pragma endscop
}
