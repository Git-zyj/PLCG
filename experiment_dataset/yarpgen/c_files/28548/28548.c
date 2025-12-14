/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 = var_2;
                    arr_10 [i_0] [i_0] |= (((!var_17) ? var_10 : (!var_17)));
                }
            }
        }
    }
    var_19 = ((var_13 ? ((max(((var_5 ? var_3 : var_0)), var_2))) : var_11));
    #pragma endscop
}
