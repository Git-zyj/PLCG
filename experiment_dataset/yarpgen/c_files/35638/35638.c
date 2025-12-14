/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((max(var_2, (min((((var_11 ? 1 : 1))), var_1)))))));
    var_17 ^= var_14;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_18 *= ((-1 ? 1 : -1019689253));
        arr_3 [i_0] [i_0] = 24;
        arr_4 [i_0] = ((((268435456 ? (arr_2 [i_0] [i_0]) : (((arr_1 [i_0]) ? -1019689253 : var_12)))) < (max(var_4, (((arr_2 [12] [i_0]) ? var_5 : var_4))))));
    }
    for (int i_1 = 4; i_1 < 9;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (arr_2 [i_1] [7]);
        arr_8 [i_1] = (arr_5 [i_1] [i_1]);
        arr_9 [i_1] [i_1] = var_9;
        arr_10 [i_1 + 2] = ((var_8 ? var_4 : (arr_1 [14])));
        var_19 = (max(var_19, ((((var_9 * (arr_0 [i_1 + 4])))))));
    }
    #pragma endscop
}
