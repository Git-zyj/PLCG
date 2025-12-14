/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = 5322660260187792213;
                    var_19 = (((arr_5 [i_2 - 1] [i_1] [i_1]) * (arr_5 [3] [i_1] [i_1])));
                }
            }
        }
    }
    var_20 = var_2;
    #pragma endscop
}
