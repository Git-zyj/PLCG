/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0 + 1] = (1 ^ 1);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_15 = (((-4096 ? 255 : 309)));
                    var_16 = ((-306 / ((((8191 ? (arr_5 [i_2] [i_2] [i_1] [i_0 - 4]) : 255)) + 0))));
                    arr_7 [i_0] [i_0] [i_2] = var_0;
                }
            }
        }
    }
    var_17 = 19043;
    var_18 = var_5;
    #pragma endscop
}
