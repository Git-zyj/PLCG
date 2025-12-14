/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((((max(var_3, var_6))) ? ((var_9 ? 4 : var_10)) : var_10))) ? var_8 : (max(var_7, (((14 ? var_5 : 2969649305)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, ((((var_6 - -1561945739340040271) % var_3)))));
                    var_13 = (max(var_13, var_2));
                }
            }
        }
    }
    #pragma endscop
}
