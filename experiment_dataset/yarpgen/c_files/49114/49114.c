/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_12 = (arr_4 [i_0]);
                arr_5 [i_0] [9] [6] = ((1704664177 ? -19 : var_7));
            }
        }
    }
    var_13 *= (max(0, ((var_6 ? var_8 : var_2))));
    #pragma endscop
}
