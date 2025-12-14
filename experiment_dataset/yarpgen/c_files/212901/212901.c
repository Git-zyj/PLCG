/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (((1 >> (-1 + 12))))));
    var_13 = (max(((max(1, (1 & 1)))), var_4));
    var_14 = var_4;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_15 = 1;
        var_16 = (min(-50, ((-(!0)))));
        var_17 = (max((((arr_1 [i_0]) ? var_3 : (arr_1 [i_0]))), 46));
    }

    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_18 = (max(((((arr_3 [i_1]) <= (arr_3 [i_1])))), (min((arr_3 [i_1]), (arr_3 [i_1])))));
        var_19 = (min((max((arr_4 [i_1]), 1)), (32762 > 14)));
    }
    #pragma endscop
}
