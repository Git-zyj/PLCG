/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0] [i_0 + 3]) ? (arr_0 [i_0] [i_0 - 1]) : (arr_0 [i_0] [i_0 + 1])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    var_14 = (((arr_6 [i_0 + 2]) | (arr_6 [i_0 + 1])));
                    var_15 = 834614264;
                }
            }
        }
    }
    var_16 = var_6;
    #pragma endscop
}
