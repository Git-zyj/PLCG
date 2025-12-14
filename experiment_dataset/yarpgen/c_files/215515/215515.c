/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_7 [i_0] = var_17;
                var_19 &= arr_0 [i_1];

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_10 [i_0] [i_0] [i_0] = (arr_5 [16]);
                    arr_11 [i_2] [i_0] = (arr_1 [i_2] [i_2]);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    arr_15 [i_0] [i_3] = (arr_9 [i_1] [i_1 - 1] [i_1]);
                    var_20 = (max(var_20, var_12));
                    arr_16 [1] [i_3] [i_3] [i_0] = var_17;
                    var_21 = (min(var_21, var_16));
                }
            }
        }
    }
    var_22 = -var_0;
    var_23 = var_18;
    var_24 = (~var_11);
    var_25 += var_3;
    #pragma endscop
}
