/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, -var_9));
    var_11 = (((-127 - 1) ? var_9 : (((max(61, 61))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_12 &= (((arr_2 [i_0] [6] [i_0]) ? (((!(~var_5)))) : 1));
                    var_13 = ((var_9 ? ((var_2 ? (arr_0 [i_1 - 1]) : ((92 ? (arr_0 [i_1]) : 1)))) : ((((arr_1 [i_1 + 1]) <= (arr_1 [i_1 - 2]))))));
                }
            }
        }
    }
    #pragma endscop
}
