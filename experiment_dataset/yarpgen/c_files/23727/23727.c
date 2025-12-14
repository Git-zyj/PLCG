/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_2] [i_1 - 2] [i_0] = (arr_2 [i_0 + 3]);
                    var_13 &= var_12;
                }
            }
        }
    }
    var_14 = (max(var_14, var_7));
    var_15 += var_9;
    var_16 *= var_7;
    #pragma endscop
}
