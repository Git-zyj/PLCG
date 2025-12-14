/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0 - 2] [i_0 - 2] = var_9;
        var_10 = (max(var_10, (arr_1 [i_0 - 1])));
    }
    var_11 = var_9;
    var_12 = -10673;

    for (int i_1 = 1; i_1 < 24;i_1 += 1)
    {
        var_13 = (max(var_13, ((((((((-(arr_6 [i_1] [i_1]))) != var_7))) % (((var_3 ? 6381630976535415902 : var_0))))))));
        var_14 *= (max((((10672 || ((max((arr_6 [i_1 + 1] [2]), var_3)))))), (max((arr_6 [i_1] [i_1]), var_6))));
    }
    var_15 = ((10675 ? 3117008824105163931 : ((min(508363060, 3987965321)))));
    #pragma endscop
}
