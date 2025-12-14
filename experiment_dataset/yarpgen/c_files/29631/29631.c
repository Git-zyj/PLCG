/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_13 = -9440965268701141077;
                    var_14 = (((3245381946 | 9440965268701141076) ? var_6 : (max(30297, var_10))));
                }
            }
        }
    }
    #pragma endscop
}
