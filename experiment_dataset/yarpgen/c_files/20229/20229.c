/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_19 = (max(var_19, ((((arr_0 [i_0 + 1] [i_0 - 2]) | var_3)))));
        arr_2 [i_0] = (((-9223372036854775807 - 1) ? -61 : 9223372036854775807));
        arr_3 [i_0 + 1] [i_0] |= (arr_1 [i_0 + 1] [i_0 - 2]);
        var_20 = ((var_5 / (~5608002182126729187)));
    }
    var_21 |= var_17;
    #pragma endscop
}
