/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((arr_1 [i_0] [i_0]) + (var_13 + var_3))) - var_2));
        arr_3 [i_0] [i_0] &= ((((((min(var_7, var_2))) && (((-83 ? var_9 : var_1))))) ? ((min((arr_1 [13] [i_0]), 66))) : ((-((min(var_4, 81)))))));
        arr_4 [5] [5] = (min((min((((arr_0 [i_0] [i_0]) ? 124 : (arr_0 [i_0] [i_0]))), ((min(1, -102))))), ((max(var_4, ((min(var_4, (arr_1 [i_0] [i_0])))))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_7 [i_1] [2] = 1;
        var_16 -= (((var_0 | -1) ? ((min(-13, (arr_5 [i_1])))) : (arr_5 [i_1])));
    }
    var_17 = ((!(((-((max(var_1, var_11))))))));
    #pragma endscop
}
