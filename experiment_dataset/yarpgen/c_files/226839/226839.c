/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        var_16 = (!110);
        var_17 -= ((arr_0 [i_0]) ? 110 : (((!(arr_2 [10] [i_0])))));
        var_18 = (min(var_18, ((((arr_0 [i_0 - 4]) < (arr_1 [9]))))));
    }
    var_19 = var_13;
    #pragma endscop
}
