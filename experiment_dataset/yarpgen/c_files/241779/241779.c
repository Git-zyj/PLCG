/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    var_12 = (!var_7);

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_13 = var_7;
        var_14 = (arr_1 [i_0] [i_0]);
        arr_4 [i_0] [i_0] = var_9;
        arr_5 [i_0] = (max(-var_10, (min((min(18014397972611072, -18014397972611082)), -1))));
        arr_6 [6] = (min(var_5, ((59 ? -8092266277007256536 : 0))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_15 = (max(var_15, (((min(0, (arr_0 [i_1])))))));
        var_16 = (((var_2 * 1) ? (((!(arr_7 [i_1])))) : (((arr_0 [i_1]) * -var_10))));
        arr_10 [i_1] = var_10;
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_13 [i_2] = var_8;
        var_17 = (max(var_17, ((max(((-(arr_12 [i_2]))), -var_8)))));
        var_18 = (min(var_7, ((~(~-1056186371)))));
    }
    var_19 = ((var_10 * ((min(var_3, ((max(var_10, var_8))))))));
    #pragma endscop
}
