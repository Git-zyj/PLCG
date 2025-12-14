/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;
    var_13 = var_7;
    var_14 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_15 -= 11;
                    var_16 = (min(var_16, (arr_1 [i_0] [i_1])));
                }
            }
        }
    }
    #pragma endscop
}
