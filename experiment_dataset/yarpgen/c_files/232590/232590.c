/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_17 += (((!16397) ? ((max(49138, 12272))) : ((min(-43, -32298)))));
                    var_18 = ((-(~-16397)));
                }
            }
        }
    }
    var_19 = (max(var_19, 49130));
    #pragma endscop
}
