/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_9;
    var_19 = var_2;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_8;
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_12 [i_3] [i_3] = (arr_4 [i_2]);
                        arr_13 [i_0] [i_3] = (arr_1 [i_0]);
                        var_20 = ((var_13 ? (((max(925466194, var_9)) & 1)) : (arr_3 [2] [i_1])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
