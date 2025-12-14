/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_2 ? (!var_12) : (max(var_8, (min(var_8, var_9))))));
    var_15 = ((~((var_3 ? ((41862 ? var_1 : var_0)) : (~var_12)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (max(var_16, ((~(arr_1 [11] [i_0])))));
        var_17 += (((arr_0 [6] [6]) ? 1 : (!var_12)));
        var_18 = ((23673 + (arr_1 [i_0] [i_0])));
    }
    var_19 |= var_9;
    #pragma endscop
}
