/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_9));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_14 = ((var_5 && (((var_5 * (!38391))))));
                    var_15 = ((!(((1 ? var_9 : -328070123)))));
                }
            }
        }
    }
    var_16 = ((~(~var_4)));
    #pragma endscop
}
