/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, ((max((max((arr_0 [i_1 - 1]), var_10)), var_9)))));
                    arr_9 [i_0 + 1] = ((((min((arr_7 [i_0 + 2] [i_1 - 1] [i_2] [i_2]), 0))) ? (!1655985004) : (min(959020692, var_0))));
                    var_14 = (min((max((arr_6 [i_1 + 1]), (arr_6 [i_1 - 1]))), (arr_6 [i_1 + 1])));
                    var_15 = (max(((127 / (max(127, 1350028891)))), -1));
                    arr_10 [i_0] = (12197 ? (arr_3 [i_0 - 1] [i_1] [i_2]) : (!3068954605475085585));
                }
            }
        }
    }
    var_16 *= var_6;
    #pragma endscop
}
