/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_10 = ((!(arr_0 [i_0] [i_0])));
        var_11 = (((arr_0 [i_0] [i_0]) <= var_4));
    }
    var_12 = (min(((max((min(var_2, var_2)), (min(-107, -1))))), (min(var_0, var_1))));
    #pragma endscop
}
