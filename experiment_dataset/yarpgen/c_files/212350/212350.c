/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~var_12);

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_14 = var_8;
        arr_2 [i_0] [i_0] = ((((((arr_0 [8]) | ((var_4 ? (arr_0 [i_0]) : var_6))))) ? (min((arr_0 [i_0]), (((arr_1 [i_0]) ? var_10 : (arr_0 [i_0]))))) : ((93 << (174 - 154)))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_5 [i_1] = ((((var_11 ? (arr_3 [i_1]) : (arr_3 [i_1]))) | ((((min(var_2, (arr_3 [i_1])))) ? ((174 ? var_8 : var_10)) : ((min((arr_4 [i_1]), var_11)))))));
        arr_6 [i_1] [i_1] = (arr_4 [i_1]);
        arr_7 [i_1] = (((~128) ? var_5 : var_7));
    }
    var_15 = ((((min(var_5, var_5))) >= -100));
    #pragma endscop
}
