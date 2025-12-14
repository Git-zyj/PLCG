/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(((min(var_12, var_3))), var_6));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [1] [i_1 - 1] [i_2] = (((~(~41))));
                    arr_9 [i_1] = 0;
                }
            }
        }
    }
    var_15 = (max(6351962772955352007, ((max(var_2, var_6)))));
    #pragma endscop
}
