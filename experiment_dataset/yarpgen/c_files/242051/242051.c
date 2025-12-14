/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 225;
    var_14 = ((30 ? ((~((var_4 ? var_11 : var_12)))) : ((-(!0)))));
    var_15 = var_11;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = (min((arr_1 [i_0]), (max(var_7, ((225 ? 38 : 216))))));
        arr_5 [i_0] [i_0] = ((~(((arr_2 [i_0] [i_0 - 1]) ? 59 : 42241))));
    }
    #pragma endscop
}
