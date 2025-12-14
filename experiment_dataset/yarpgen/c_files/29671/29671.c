/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= var_5;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [9] [i_2] = (min(((max(var_12, var_7))), var_9));
                    var_14 = (max(((max(var_7, var_12))), (((var_6 ? var_12 : var_7)))));
                    var_15 = (!var_7);
                }
            }
        }
    }
    #pragma endscop
}
