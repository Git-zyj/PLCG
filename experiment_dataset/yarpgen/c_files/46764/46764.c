/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_9;
    var_16 = (((((~(var_10 / var_6)))) ? (max(((15584 ? 11300924388259731334 : 585852573)), 372600916)) : var_6));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] &= ((((((arr_0 [i_0] [5]) ^ (arr_0 [i_0] [i_0])))) ? (var_8 & var_3) : (min(var_4, (arr_3 [i_0])))));
        arr_5 [i_0] = (((arr_3 [i_0]) - (((arr_3 [i_0]) & (arr_3 [i_0])))));
    }
    var_17 = (min(var_17, ((min(1158354419, -4529612758409862462)))));
    #pragma endscop
}
