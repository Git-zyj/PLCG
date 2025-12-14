/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((~(min((-9223372036854775806 / var_4), (var_3 & 912269615)))));
    var_19 = var_17;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = var_1;
        arr_4 [i_0] = (~3382697686);
        arr_5 [i_0] = ((~(!var_2)));
    }
    #pragma endscop
}
