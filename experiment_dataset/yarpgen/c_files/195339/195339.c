/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= min(var_9, (((min(var_3, var_1)) * (59 < -27848))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                {
                    var_12 = (min((~var_1), ((min(511, 1)))));
                    var_13 = (min(var_13, ((((var_2 & var_1) ^ ((max((arr_3 [i_2 - 3]), (arr_3 [i_2 + 1])))))))));
                }
            }
        }
    }
    #pragma endscop
}
