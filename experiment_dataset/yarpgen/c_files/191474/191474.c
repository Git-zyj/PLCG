/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!var_4);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = (~var_2);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_2] |= (((arr_6 [i_1] [i_1 + 1] [i_1 - 1]) ? (arr_6 [i_1] [i_1 + 1] [i_1 - 1]) : var_0));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_11 += ((937460218 ? (arr_11 [i_0] [i_0] [i_2] [i_2] [i_0]) : (arr_10 [i_1] [i_1 + 2] [i_1 + 1] [i_1 + 1])));
                        arr_14 [i_1] = 937460218;
                        arr_15 [i_1] = -1401129964;
                        arr_16 [i_0] [i_1] = ((var_6 ? var_2 : var_4));
                        var_12 = ((var_0 ? var_4 : var_3));
                    }
                }
            }
        }
    }
    #pragma endscop
}
