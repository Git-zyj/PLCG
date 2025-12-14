/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~var_13);

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 = (max(var_19, ((min((arr_1 [i_0]), (arr_1 [i_0]))))));
        var_20 = (arr_2 [i_0]);
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_21 = (((arr_3 [i_1]) ? var_3 : (((!(arr_3 [i_1]))))));
        var_22 = ((-(!var_15)));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            var_23 = (((-127 - 1) ? 8581545984 : 17600774274659675320));
            var_24 = var_8;
        }
        var_25 += ((((0 ? 16450720032729565164 : -118)) <= (((((arr_4 [2] [i_2]) != (arr_9 [i_2] [i_2])))))));
        arr_11 [i_2] = (~var_3);
        var_26 += -13323703682972783451;
    }
    #pragma endscop
}
