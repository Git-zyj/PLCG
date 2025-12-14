/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_13 = (((((-8158571953338313769 ? -46913 : 0))) - 18446744073709551600));
        var_14 = (~4294967295);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_4 [i_1] = ((((1 ? ((1 ? var_5 : (arr_2 [i_1]))) : ((1 ? 18622 : (arr_2 [15])))))) ? (arr_0 [16] [16]) : ((max((min(var_1, (arr_3 [i_1] [i_1]))), var_12))));
        var_15 = ((arr_1 [i_1] [i_1]) & (~var_10));
        arr_5 [i_1] [i_1] = min((((arr_0 [i_1] [i_1]) ^ (((var_8 ? var_8 : (arr_1 [21] [1])))))), (((((69 / (arr_3 [i_1] [7]))) >> (((max((arr_1 [i_1] [i_1]), var_12)) - 171267708))))));
    }
    var_16 = var_12;
    var_17 = (max(var_17, (((!((!(var_6 && 322573125))))))));
    #pragma endscop
}
