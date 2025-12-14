/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max((arr_0 [i_0] [i_0]), var_9));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_15 = ((((((arr_0 [i_0] [7]) ? ((((arr_4 [i_0] [i_1] [i_1]) / (-32767 - 1)))) : (arr_3 [i_1] [i_0])))) ? (max(((((arr_1 [i_0] [i_1]) && var_11))), (-44 / -8531579661283213324))) : 176));
            var_16 = (((min(((min(22551, 22551))), (max(32767, 4294967295)))) >> (((arr_4 [i_0] [i_0] [i_1]) - 319532739))));
        }
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_17 = (((arr_5 [i_2]) ? 3731819770 : var_13));
        var_18 = (max(var_18, var_6));
        var_19 = 1250242747;
        var_20 = (arr_5 [i_2]);
        var_21 = (((arr_6 [i_2]) ? (arr_6 [i_2]) : (arr_6 [i_2])));
    }
    var_22 = (min(var_22, (((var_13 ? var_13 : (max(-114, 4294967283)))))));
    #pragma endscop
}
