/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(-var_7, ((((var_8 ? var_8 : var_4)) << (var_10 - 52897)))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = ((((max((145 > var_1), (max(151, var_12))))) & (arr_1 [i_0])));
        arr_3 [16] = -79;
        arr_4 [i_0] = ((+(min((arr_1 [i_0]), (((arr_1 [i_0]) + (arr_1 [i_0])))))));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        arr_9 [9] [9] = (max((var_4 && var_11), (arr_5 [i_1])));
        arr_10 [i_1] [i_1 + 1] = ((-(!var_0)));
        var_15 *= (max((arr_6 [i_1] [i_1 + 2]), 7));
    }

    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_16 = ((var_5 ? var_9 : (~var_4)));
        var_17 ^= -1;
    }
    var_18 = 54;
    #pragma endscop
}
