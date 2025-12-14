/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_19 = ((-45823 ? ((((max((arr_0 [1] [10]), var_13))) ? (arr_0 [i_0 + 1] [i_0 + 2]) : ((max(9, var_4))))) : var_1));
        var_20 = (((arr_0 [i_0 - 1] [i_0]) ? (((((min(var_8, 65527))) + var_18))) : (arr_0 [i_0] [1])));
    }
    var_21 = (((((var_2 ? var_12 : var_12))) ? var_11 : (((((max(65527, 22))) ? var_8 : 14)))));
    var_22 &= -var_14;
    #pragma endscop
}
