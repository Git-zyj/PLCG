/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, (!var_9)));
                    arr_10 [i_0] [i_1] [i_0] = (max(1899437302, 116));
                }
            }
        }
    }
    var_18 = (min(var_18, (((((max(var_6, var_2))) | ((var_0 ? 10454958990179229419 : var_0)))))));
    var_19 *= ((~((~(max(var_2, var_13))))));
    var_20 = 1;
    #pragma endscop
}
