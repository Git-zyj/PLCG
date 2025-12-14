/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((max(1, var_1)));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_11 = (arr_1 [i_0]);
        arr_2 [i_0] = (max(104721178, ((((arr_1 [i_0]) << (((arr_1 [i_0]) - 1386393909)))))));
        var_12 = (min(var_12, 65535));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_13 = (max(var_13, ((((arr_4 [i_1] [4]) ? (arr_4 [i_1] [6]) : ((max((var_8 && var_1), 4080))))))));
        arr_5 [i_1] = (max(4185, -255));
        var_14 = ((-(((((arr_0 [i_1]) <= (arr_3 [i_1] [i_1]))) ? ((var_9 ? (arr_3 [i_1] [i_1]) : (arr_0 [i_1]))) : (((arr_3 [4] [4]) ? var_6 : (arr_1 [i_1])))))));
        var_15 = (arr_4 [i_1] [i_1]);
        arr_6 [i_1] [i_1] = (max((max(4088, 4081)), ((max((max((arr_4 [i_1] [i_1]), (arr_0 [i_1]))), (max((arr_0 [i_1]), (arr_4 [i_1] [i_1]))))))));
    }
    var_16 = (max(var_16, ((((((max(var_5, var_9))) ? 1 : var_4))))));
    var_17 = ((var_5 ? var_6 : var_8));
    #pragma endscop
}
