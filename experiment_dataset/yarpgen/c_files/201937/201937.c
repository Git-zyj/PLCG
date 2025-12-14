/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [6] [i_0] [i_0 + 1] = (arr_4 [i_1 - 1] [1] [i_0 - 1]);
                var_10 += (arr_2 [i_1] [i_0] [i_0 - 2]);
            }
        }
    }

    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_11 = var_7;
        var_12 &= min(-6005, 0);
        var_13 = (arr_0 [8]);
    }
    var_14 &= var_8;
    var_15 = 28;
    #pragma endscop
}
