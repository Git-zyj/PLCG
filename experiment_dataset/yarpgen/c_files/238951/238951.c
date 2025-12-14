/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (((arr_0 [i_0]) ? ((var_11 ? var_1 : (arr_3 [i_0] [i_0]))) : (((max((arr_2 [i_0]), (arr_2 [i_0])))))));
        arr_5 [i_0] [i_0] = (max((max(149578383, 12538744564552309768)), 279349462));
        arr_6 [i_0] [i_0] = (max((((arr_2 [i_0]) ? var_12 : 12538744564552309768)), (arr_2 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_13 += (((arr_1 [i_1]) <= (((arr_8 [i_1] [21]) - (arr_2 [i_1])))));
        var_14 = -149578383;
        var_15 = (min(var_15, (arr_9 [i_1])));
    }
    var_16 = var_1;
    #pragma endscop
}
