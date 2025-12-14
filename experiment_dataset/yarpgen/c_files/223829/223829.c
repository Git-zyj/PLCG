/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((max((max(1638324473, 1638324473)), 0)) <= (((((1638324480 ? 3773495532 : var_7)) < 3773495542)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_11 = (~var_4);
        arr_2 [i_0] = (((min(((((arr_1 [i_0] [i_0]) ? 1 : 2894884835))), var_6)) & (!var_4)));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_12 = (arr_4 [i_1]);
        arr_6 [i_1] = var_3;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = ((arr_4 [i_2]) ? var_3 : (var_5 > 1513514833));

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_13 ^= ((3077801111386677682 ? var_0 : ((((arr_5 [i_2]) ? (arr_0 [21]) : 8)))));
            var_14 = 6992583004139763733;
        }
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            var_15 = ((15594858019010127916 < (arr_3 [i_2])));
            var_16 = (var_5 ^ var_1);
        }
        arr_15 [i_2] [8] &= (arr_11 [0] [10]);
    }
    #pragma endscop
}
