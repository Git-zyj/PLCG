/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((var_13 ? 2832197114 : var_0)) == var_5)) ? (max(((var_12 ? 8687906558845647359 : var_0)), 536868864)) : ((var_13 & (min(-8687906558845647373, var_16))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] = (~(((~2832197101) & (min((arr_1 [i_0] [i_0]), 8687906558845647358)))));
        var_18 = (((min((max(-8687906558845647369, 12794997537520950284)), 4)) == (min((((arr_1 [i_0] [10]) ? 18446744073709551607 : var_12)), (~-8687906558845647349)))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 10;i_1 += 1)
    {
        var_19 = ((((-(arr_7 [i_1])))) ? ((-(arr_3 [10]))) : (((var_12 ? 2832197099 : 241))));
        var_20 = -var_11;
    }
    for (int i_2 = 3; i_2 < 21;i_2 += 1)
    {
        arr_11 [i_2] = (arr_9 [i_2]);
        arr_12 [i_2 - 1] [i_2 - 1] = (arr_9 [0]);
    }
    #pragma endscop
}
