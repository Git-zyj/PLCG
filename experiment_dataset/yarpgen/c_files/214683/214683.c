/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((var_3 - var_9) ? var_9 : 0));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_16 *= var_13;
        var_17 *= (max(((min((arr_1 [i_0 - 2]), (arr_1 [i_0 + 1])))), (min((arr_1 [i_0 + 1]), 2724675091))));
        var_18 = ((var_5 ? (((~(arr_3 [i_0 + 1])))) : (min(var_4, (arr_2 [i_0 + 1])))));
    }
    var_19 += var_9;
    #pragma endscop
}
