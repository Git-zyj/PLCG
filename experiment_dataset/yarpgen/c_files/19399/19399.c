/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_17 = (((arr_0 [i_0]) && ((106 != ((var_13 ? 15769 : var_9))))));
        var_18 = ((!(((-(max(var_11, 102)))))));
        arr_2 [i_0] = (((((((arr_0 [i_0]) && (arr_0 [9]))))) == 1917499235545966243));
        arr_3 [i_0] [i_0] = (((4150759648007883569 ? var_11 : var_4)) >= (min(var_8, var_2)));
    }
    var_19 = (var_8 >= var_1);
    var_20 = ((min((max(var_8, var_5)), (47901 | -4150759648007883569))) | (~58));
    #pragma endscop
}
