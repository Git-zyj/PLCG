/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_1] = var_5;
                arr_8 [i_0] [i_0] [i_1] = (((((var_5 ? ((var_7 ? var_4 : 3939451069660136776)) : -7925000776371239388))) ? ((var_3 ? var_1 : var_4)) : ((max(12206, var_7)))));
            }
        }
    }
    var_12 = var_5;
    var_13 -= var_9;
    #pragma endscop
}
