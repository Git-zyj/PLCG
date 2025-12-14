/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= var_3;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 *= (arr_4 [i_1] [i_2 - 2]);
                    arr_7 [i_0] [i_1] [i_1] [i_2] = (arr_1 [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
