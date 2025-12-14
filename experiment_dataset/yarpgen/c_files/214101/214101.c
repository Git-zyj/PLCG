/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= ((((((var_10 ? -24600 : 722356267)))) ? var_2 : var_1));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_2 [5] [i_0] = ((0 ? 0 : 6452));
        var_12 = ((var_3 ? (((!(-32767 - 1)))) : (((!(arr_0 [i_0] [i_0]))))));
        arr_3 [i_0] = ((-(arr_1 [i_0] [i_0 + 2])));
        arr_4 [i_0] [i_0] = var_3;
    }
    #pragma endscop
}
