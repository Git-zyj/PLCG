/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1 + 1] = ((((135 + ((var_4 ? var_2 : (arr_0 [i_0 - 1] [i_0]))))) >= ((1 + (arr_4 [i_0])))));
                    var_14 = (min((-127 - 1), (((((-127 - 1) ? -117 : 12382)) + (arr_2 [i_2 + 3])))));
                }
            }
        }
    }
    var_15 = var_7;
    #pragma endscop
}
