/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_3 [3] = -var_12;
        var_13 = ((((((arr_0 [i_0] [i_0]) ? var_7 : 2013289737))) ? (((var_5 ? var_9 : var_4))) : (arr_0 [i_0 - 1] [i_0 + 1])));
        arr_4 [i_0] [i_0 + 1] = ((((arr_2 [i_0 + 1]) ? var_2 : var_5)));
    }
    var_14 = (1234181268 % 1);
    var_15 -= var_5;
    var_16 = (min(((min(var_9, var_9))), var_7));
    #pragma endscop
}
