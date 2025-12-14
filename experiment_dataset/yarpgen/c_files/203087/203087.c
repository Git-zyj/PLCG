/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((((((arr_1 [i_0] [i_0 - 2]) & var_3)) + ((max(var_4, (arr_0 [i_0] [i_0]))))))) ? (max((min((arr_0 [i_0 - 1] [i_0]), (arr_1 [i_0 - 2] [i_0]))), var_2)) : ((((1 < (arr_2 [i_0] [i_0 - 1])))))));
        var_14 = (min(var_14, ((max(((var_6 ? ((~(arr_0 [6] [0]))) : 78)), 95)))));
        arr_4 [i_0] [7] = (((((((max(var_5, var_0))) ^ var_7))) ? ((-(arr_1 [i_0] [i_0]))) : ((var_8 ? ((min(95, -96))) : -28245))));
        var_15 = (max((((arr_0 [i_0 - 1] [i_0]) ? (arr_0 [i_0 + 1] [i_0]) : var_7)), (~var_2)));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_7 [i_1] = ((((((arr_2 [i_1] [i_1]) - (arr_2 [i_1] [i_1])))) ? (arr_2 [i_1] [i_1]) : var_5));
        arr_8 [i_1] [i_1] = (arr_1 [i_1] [i_1]);
    }
    var_16 = ((var_9 ? (~var_6) : (max(var_1, ((max(1252536680, var_7)))))));
    #pragma endscop
}
