/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_12 &= ((((65529 < 640181820) || ((var_0 || (arr_1 [i_1]))))));
                var_13 = var_6;
            }
        }
    }
    var_14 = ((var_4 & ((((max(var_3, var_5))) / var_2))));
    var_15 *= max(12416778178561268257, 1362830282);
    #pragma endscop
}
