/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_9 ? ((((13824 ? var_12 : var_12)) + (1 - 62))) : var_3));
    var_19 = var_11;
    var_20 = 490361080;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_1 [i_0]) ? (arr_1 [i_0]) : (~19072)));
        arr_4 [i_0] [i_0] = ((var_15 ? (arr_0 [i_0]) : ((-1 ? 4294967295 : var_2))));
    }
    var_21 = ((var_7 ? (var_14 < var_15) : var_12));
    #pragma endscop
}
