/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] = (((((var_2 << (125 - 82)))) ? var_0 : 0));
                    arr_9 [i_0] [i_1] [i_2] = arr_6 [i_2] [i_1] [5];
                }
            }
        }
    }
    #pragma endscop
}
