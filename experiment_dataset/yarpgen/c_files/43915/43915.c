/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 = (arr_6 [i_1 + 2] [i_1 + 2] [i_0]);
                    var_18 = (((arr_3 [i_0]) && (arr_5 [i_2] [i_1 - 3] [i_1] [i_1 - 2])));
                }
            }
        }
    }
    var_19 = ((9092771343821393995 ^ ((var_5 ^ (-100 && var_0)))));
    var_20 *= ((((((~var_13) ? var_7 : 6057396994102607304))) ? (max(var_4, var_0)) : var_16));
    #pragma endscop
}
