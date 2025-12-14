/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_8;
    var_20 = (((!var_15) >> ((((((max(var_2, -6057617383537267565))) ? ((var_17 ? var_4 : var_18)) : 1663044142)) + 3620445407416327970))));
    var_21 = var_14;

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] = ((51 ? 2631923154 : 119));
        arr_5 [2] |= ((((+(min((arr_1 [i_0]), -3339769981513713573)))) * (arr_2 [1] [1])));
        arr_6 [i_0] = 1663044142;
    }
    #pragma endscop
}
