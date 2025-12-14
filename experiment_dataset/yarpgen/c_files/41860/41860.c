/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_16 -= ((((((arr_1 [i_0]) & (max(9784644640662922445, -1073392095))))) ? var_5 : ((((max(8423, -24948))) ? (arr_0 [i_0 + 1] [14]) : 247))));
        arr_3 [i_0] = (arr_0 [i_0] [i_0 + 1]);
        var_17 = (min(var_17, (((max(var_13, (arr_2 [i_0 - 1])))))));
    }

    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_7 [i_1] = -var_7;
        arr_8 [6] = 1;
        arr_9 [i_1] = (~((((arr_0 [i_1] [i_1]) <= -4467787165797127380))));
    }
    #pragma endscop
}
