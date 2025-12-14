/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (-(arr_0 [i_0 + 1]));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_1] = (((arr_1 [i_0 - 1] [i_0 - 1]) ? var_3 : var_2));
            var_11 = (arr_1 [i_0] [i_0]);
        }

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_12 = (((arr_3 [i_0 + 1] [2] [2]) ? (arr_3 [i_0 + 1] [6] [6]) : var_3));
            var_13 = (arr_3 [i_0] [2] [i_0 - 1]);
        }
        var_14 = (arr_3 [i_0] [0] [0]);
    }
    for (int i_3 = 3; i_3 < 18;i_3 += 1)
    {
        arr_11 [0] [14] |= (max((max((((arr_10 [i_3]) ? (arr_10 [i_3]) : var_6)), (arr_9 [2] [10]))), (arr_9 [i_3] [0])));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    {
                        var_15 -= (max((max((arr_16 [i_3 + 2]), (arr_16 [i_3 - 2]))), ((((arr_16 [i_3 - 1]) < (arr_16 [i_3 + 2]))))));
                        arr_22 [i_3] [i_3] [i_5] [i_3] = var_2;
                    }
                }
            }
        }
    }
    var_16 = var_1;
    #pragma endscop
}
