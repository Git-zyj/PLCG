/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);
        var_15 = (max(var_15, (((((((!(((arr_0 [16]) == var_0)))))) * var_12)))));
    }
    for (int i_1 = 4; i_1 < 10;i_1 += 1)
    {
        var_16 = (arr_3 [i_1]);
        arr_5 [i_1] [i_1 - 2] = (max((((var_2 || (arr_0 [i_1])))), (min((arr_0 [i_1]), (arr_0 [i_1])))));
        var_17 = ((-(arr_1 [i_1 - 4] [i_1 - 4])));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_18 = (arr_3 [i_2]);
        arr_8 [i_2] [i_2] = ((-((((max(9, var_4))) ? (((var_11 ? (arr_4 [i_2]) : var_0))) : ((var_14 / (arr_6 [i_2])))))));
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_19 = (min((arr_9 [i_3] [i_3]), (min((max(1271138030, (arr_9 [i_3] [4]))), (((5889661298606016637 ? 25249 : 1)))))));
        var_20 = -var_11;
    }
    var_21 = var_1;
    #pragma endscop
}
