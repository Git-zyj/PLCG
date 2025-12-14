/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_16 = (max((!var_9), (~var_11)));
                    var_17 = ((((max(231, var_12))) ? (min(10555365393961549035, var_10)) : (min(var_5, var_11))));
                }
            }
        }
    }
    var_18 = 233;
    #pragma endscop
}
