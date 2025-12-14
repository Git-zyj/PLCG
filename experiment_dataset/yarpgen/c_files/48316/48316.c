/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += var_5;
    var_14 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_15 = (~-3298607772651252927);
                    arr_8 [i_1] [i_1] [i_2] = arr_1 [i_0 + 1];
                }
            }
        }
    }
    #pragma endscop
}
