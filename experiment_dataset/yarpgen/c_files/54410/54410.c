/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_12 = (var_0 && var_4);
                    var_13 = ((((min(var_3, var_6))) ? ((var_10 ? var_6 : var_2)) : var_3));
                }
            }
        }
    }
    var_14 = (max(var_14, ((((((var_2 ? var_5 : ((var_3 ? var_0 : var_7))))) ? var_1 : var_2)))));
    var_15 = (min(var_15, ((((((var_6 ? ((var_8 ? var_0 : var_4)) : ((var_6 ? 11 : 6121))))) ? var_5 : (((((var_8 ? var_5 : var_8))) ? var_11 : (var_3 + var_7))))))));
    var_16 = ((26 ? -78499292 : 3573323217));
    #pragma endscop
}
