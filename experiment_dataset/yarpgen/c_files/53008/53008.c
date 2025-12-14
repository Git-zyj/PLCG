/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-1 - (min(((max(var_9, var_5))), var_2))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] |= (max(((((arr_0 [i_0] [i_0]) != 3))), (((1 ? var_14 : 46)))));
        var_17 = (max(var_17, (((var_15 ? 47 : ((34 ? (((12884 ? 69 : 9092))) : (min(-12, var_8)))))))));
        arr_4 [i_0] [i_0] = ((((min(((max(var_7, (arr_1 [i_0])))), (min((arr_2 [1]), 2305702271725338624))))) ? (--1) : (((44444 ? 4 : 215)))));
        var_18 = (max(var_18, (arr_1 [i_0])));
    }
    #pragma endscop
}
