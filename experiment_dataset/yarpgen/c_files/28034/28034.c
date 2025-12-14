/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -15032;
    var_15 = var_11;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 = 4294967290;
                    var_17 = (arr_3 [i_0] [i_1 + 1]);
                }
            }
        }
        arr_9 [i_0] [i_0] = var_3;
    }
    #pragma endscop
}
