/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((((((18446744073709551590 ? ((var_9 ? var_14 : 25)) : (!var_2)))) ? var_12 : var_11)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_16 = (min(var_16, 33164));
                var_17 = (max(var_17, ((max((((((var_3 ? var_6 : -22126)) <= (!var_13)))), 64)))));
            }
        }
    }
    var_18 |= var_7;
    #pragma endscop
}
