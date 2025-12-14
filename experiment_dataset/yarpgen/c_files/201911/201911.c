/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_7, (var_3 & var_8)));
    var_13 += var_5;
    var_14 = (max(var_14, ((max(var_3, ((max(var_1, var_0))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_15 = (min(var_15, (7808507643853511976 - var_9)));
                    var_16 = var_3;
                }
            }
        }
    }
    #pragma endscop
}
