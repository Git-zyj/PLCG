/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= (var_4 & 1);
    var_16 += var_8;
    var_17 = max((min(-1, (max(1, 1)))), (var_2 > 0));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_2 [i_0] = 1;
        arr_3 [i_0] = (((arr_1 [i_0 + 1]) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 1])));
        var_18 = arr_0 [i_0];
        var_19 = (((arr_0 [i_0]) & 1));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_20 *= var_13;
        arr_6 [i_1] = ((~(arr_5 [i_1])));
        arr_7 [i_1] [i_1] = var_9;
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        var_21 = (max(var_21, (((((((arr_9 [i_2 - 1]) > (arr_9 [i_2 - 1])))) & 1)))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 21;i_4 += 1)
            {
                {
                    var_22 = (~0);
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_23 = (((arr_13 [i_2 - 1] [i_4 + 1] [i_5 - 1]) ? (arr_13 [i_2 - 1] [i_4 - 1] [i_5 - 1]) : var_9));
                                var_24 = (!-6053006917899392748);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
