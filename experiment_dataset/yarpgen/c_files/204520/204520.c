/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 10723079218502566466;

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (max(((((max(var_12, 10723079218502566466))) ? (((3546752037 ? (arr_1 [i_0] [i_0 - 1]) : var_8))) : ((1 ? 148 : var_4)))), (arr_0 [i_0] [i_0])));
        arr_3 [i_0] [i_0] = (arr_1 [i_0 - 1] [i_0]);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_15 = (min(((min(15531, 65387))), (min(var_4, var_4))));
        var_16 = var_11;
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_17 = (max(var_17, (max((max(((10723079218502566466 ? var_3 : 81)), 1235816242)), ((((536870911 >= 50963) ? ((max((arr_4 [i_2]), 1))) : 255)))))));
        var_18 |= (max((arr_5 [i_2] [0]), (((min(40351, (arr_5 [1] [1])))))));
    }
    #pragma endscop
}
