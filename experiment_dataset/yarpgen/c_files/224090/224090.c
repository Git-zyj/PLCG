/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 *= (!var_5);

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_17 = (((arr_0 [i_0]) ? (arr_0 [i_0]) : 4398046511103));
            arr_8 [i_0] [i_0] = (arr_2 [i_1] [i_0]);
        }
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_18 = (arr_10 [1] [1]);
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    {
                        arr_18 [i_2] [i_2] [i_2] [i_4] [i_2] = arr_9 [i_4];
                        arr_19 [i_2] [i_4] [i_4] [i_5] [i_5] = (((arr_9 [i_4]) <= (arr_10 [18] [1])));
                        arr_20 [i_2] [12] [12] [i_4] [i_4] = (((39 || -40) << (((arr_12 [i_3]) - 3968816720))));
                        var_19 = (max(var_19, ((~(arr_17 [i_5] [i_4] [i_3] [1])))));
                    }
                }
            }
        }
    }
    var_20 = (((((var_0 ? var_12 : 3))) - var_13));
    var_21 = -var_0;
    #pragma endscop
}
