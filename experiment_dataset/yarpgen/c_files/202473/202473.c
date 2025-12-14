/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -243375095;
    var_18 = -8310036105701443647;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_19 = 3;
                arr_4 [i_0] [i_1] = (min((max((min((arr_2 [i_0] [i_1] [i_1]), var_2)), (((8310036105701443646 ? 1119024136 : var_4))))), (min((arr_1 [i_0] [i_1 + 1]), -1408077885))));
                arr_5 [i_0] = (arr_3 [i_0] [i_0] [i_0]);
                var_20 += ((min((arr_1 [i_1] [i_1 - 1]), (arr_1 [i_0] [i_1]))));
            }
        }
    }
    #pragma endscop
}
