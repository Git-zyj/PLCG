/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_10 = (min((arr_1 [i_0]), (((var_0 ? (arr_1 [i_0]) : 65519)))));
                arr_6 [i_0] [i_0] [i_0] |= 3566492264;
            }
        }
    }
    var_11 = var_1;
    #pragma endscop
}
