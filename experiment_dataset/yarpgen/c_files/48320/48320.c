/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_15 = (((((arr_1 [i_0 - 1] [i_0]) % (arr_2 [6] [i_0]))) / (arr_2 [i_0 - 1] [1])));
        var_16 = (max(var_16, (((((arr_2 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0 - 1])))))));
        var_17 -= (((arr_3 [i_0 + 1]) != (arr_0 [i_0 + 1])));

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_18 = (max(var_18, (arr_10 [i_3] [5] [i_2] [i_1 - 1] [i_1] [i_0 + 1])));
                        arr_12 [i_0 + 1] [i_0 + 1] [i_0] [i_1] [i_0 + 1] [i_3] = (arr_7 [i_2] [i_0]);
                    }
                }
            }
            arr_13 [i_0] [i_0] = (((arr_5 [i_0 - 1] [i_0 - 1] [i_1 + 1]) ? (arr_4 [i_1] [i_0 + 1]) : (arr_10 [15] [i_1 + 2] [i_1 - 1] [i_0] [i_0] [i_0])));
        }
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            var_19 = (arr_0 [i_0 + 1]);
            var_20 = (arr_10 [i_0] [i_4] [i_0] [i_0] [i_0 + 1] [i_4]);
        }
    }
    var_21 = var_0;
    #pragma endscop
}
