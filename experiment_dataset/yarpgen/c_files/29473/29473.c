/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = var_4;
        arr_3 [i_0] [i_0] = 1;
    }
    /* LoopNest 3 */
    for (int i_1 = 3; i_1 < 19;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        arr_14 [i_1] [i_1] [i_3] [i_3] = (((arr_6 [i_1] [i_1]) ? (arr_13 [17] [i_2 + 2]) : 121));
                        var_15 -= (((((~(arr_7 [i_2] [i_2] [i_2])))) && (255 * 134)));
                        var_16 += (arr_6 [i_1 - 1] [i_3]);
                    }
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        arr_17 [i_1] [i_1] = ((var_4 * (((arr_8 [i_1]) * (var_5 * var_11)))));
                        arr_18 [i_2 + 2] [i_3] |= (arr_9 [i_1] [i_2] [i_2]);
                        arr_19 [i_1 + 1] [i_1] [i_1] [i_1] = (((((~(~57805)))) | var_12));
                        var_17 = (max(var_17, (((var_14 || ((max((max((arr_15 [i_3] [i_2 - 2] [i_3] [i_5 + 3] [i_5 + 3] [i_1]), var_7)), var_12))))))));
                        arr_20 [i_1 - 1] [i_1 - 3] [8] [i_1] [i_2] = ((-((((((arr_12 [i_1] [i_2 + 1] [16] [i_3] [i_3] [i_5]) ^ 4095))) ^ (min(var_13, var_2))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 17;i_6 += 1)
                    {
                        arr_23 [i_3] &= (((((arr_5 [i_6]) ? 3 : (arr_9 [i_2] [i_2] [i_2])))) && -var_7);
                        arr_24 [i_1] [i_2] [i_1] [i_6] [i_3] [i_2] = (((arr_4 [i_1 + 1]) * var_9));
                    }
                    arr_25 [i_1] = var_9;
                    arr_26 [8] [i_1] [i_2] [8] = (~var_7);
                }
            }
        }
    }
    #pragma endscop
}
