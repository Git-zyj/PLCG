/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((max((1 && 1), (min(var_1, var_6)))) && var_3));
    var_13 = (max((min(1, (var_11 ^ -456098444667985485))), 587363022));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_14 = ((var_1 & ((((arr_0 [21]) <= 3801147273)))));
                var_15 = (((arr_1 [i_1 - 1] [i_1 - 1]) ? ((var_2 << (13827594425260156416 - 13827594425260156356))) : (((min((arr_1 [i_1 + 1] [i_1 + 1]), (arr_1 [i_1 - 2] [i_1 - 2])))))));
            }
        }
    }
    #pragma endscop
}
