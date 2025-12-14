/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;
    var_19 = (((((var_16 ? 3 : (var_14 % var_1)))) ? (((((max(var_16, var_4))) && var_2))) : (!var_1)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_0 [i_0 + 3]) * (arr_2 [i_0 + 3] [i_0 + 1])));
        arr_4 [i_0] [15] = ((~(arr_2 [i_0 + 2] [i_0])));
        arr_5 [4] = (((arr_1 [i_0 + 2] [i_0 + 2]) / var_9));
    }
    #pragma endscop
}
