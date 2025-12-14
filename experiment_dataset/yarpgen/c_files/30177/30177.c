/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 = 64013;
                    var_19 = ((1 ? 1610612736 : 65535));
                }
            }
        }
    }
    var_20 = (var_3 ? (min(((var_0 ? var_11 : 1514)), (!-467242778))) : (max(((min(1515, 32767))), ((64013 ? var_1 : var_5)))));
    var_21 = var_17;
    #pragma endscop
}
