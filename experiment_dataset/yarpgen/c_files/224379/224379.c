/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~((5939472925284959231 ? -5939472925284959216 : 5939472925284959204)));
    var_20 = (((((var_8 ? (!var_18) : ((max(var_9, var_1)))))) ? var_18 : ((max(-var_2, ((5939472925284959231 << (5939472925284959215 - 5939472925284959215))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1 - 2] [i_0] = (max((max((arr_5 [i_0 + 1]), -5939472925284959216)), var_10));
                    var_21 = (max(((max(-5939472925284959229, -5939472925284959216))), var_11));
                    var_22 = (!65527);
                }
            }
        }
    }
    var_23 -= ((var_0 ? ((max(var_0, ((max(var_15, var_2)))))) : var_17));
    #pragma endscop
}
