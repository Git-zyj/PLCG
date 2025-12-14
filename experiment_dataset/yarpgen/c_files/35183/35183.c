/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((max(var_4, (!6433888322096141258)))) < (min(var_0, (min(var_2, 3819781920))))));
    var_17 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_0] |= ((!(((((!(-127 - 1))) ? -116 : 122)))));
                    arr_10 [3] [i_1] [i_2] [i_2] = var_5;
                }
            }
        }
    }
    #pragma endscop
}
