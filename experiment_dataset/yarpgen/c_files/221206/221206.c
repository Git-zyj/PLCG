/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221206
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
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_10 [i_0] [15] [i_0] [i_2] = var_11;
                    var_12 = (arr_5 [i_0]);
                }
            }
        }
    }
    var_13 = var_2;
    var_14 = var_9;
    #pragma endscop
}
