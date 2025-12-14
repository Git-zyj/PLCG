/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_17 = (arr_0 [i_1]);
                var_18 += (min(var_8, (((arr_5 [i_1] [i_0] [i_0 - 1]) & (arr_2 [i_0 - 3] [i_1])))));
                arr_7 [i_0] [1] = ((((((var_12 ^ (arr_0 [i_0])))) ? (arr_2 [i_0 + 1] [i_1]) : (((arr_2 [i_0] [11]) ? (arr_0 [3]) : (arr_0 [i_0]))))));
            }
        }
    }
    var_19 = (((1507520133956911580 || var_9) ? (max(-4087446494980287093, 4087446494980287093)) : 0));
    var_20 |= ((((var_6 - (var_15 == var_0)))) ? var_6 : ((~((min(var_12, var_11))))));
    #pragma endscop
}
