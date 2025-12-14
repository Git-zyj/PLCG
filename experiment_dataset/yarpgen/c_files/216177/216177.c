/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = var_5;
                    arr_8 [i_0] [8] [i_0] [8] |= -49;
                    arr_9 [i_1] = (var_11 % var_9);
                }
            }
        }
    }
    #pragma endscop
}
