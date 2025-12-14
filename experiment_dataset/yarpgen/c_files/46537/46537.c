/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((min((~3), var_0))) && var_7));
    var_15 = (((~27149) ? 25 : var_11));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_16 *= ((~(arr_0 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] = (~22392);

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_11 [i_1] = ((var_0 ? 265212675 : (arr_3 [1] [i_0] [i_0])));
                        var_17 = ((~(arr_9 [i_3] [i_3] [i_3] [i_2 + 2] [i_2 + 4] [i_1])));
                        var_18 = ((0 ? ((var_1 ? 0 : (arr_6 [i_2] [i_2] [14] [i_3]))) : var_12));
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        arr_14 [i_2 + 1] [i_4] = (((0 ? var_1 : var_2)));
                        arr_15 [i_0] [i_1] [i_2] [i_4] = (~var_0);
                    }
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_19 = (((!32767) ? (arr_6 [i_2 + 1] [1] [i_2 - 1] [i_2 + 2]) : var_10));
                        arr_20 [i_0] [i_1] [i_5] [i_5] = (((arr_8 [i_0] [i_2 + 3]) ? (~81) : (arr_2 [i_2] [i_0])));
                        var_20 += ((var_10 ? (arr_12 [i_1] [i_2] [0]) : (arr_4 [i_0] [i_0] [i_5] [i_5])));
                    }
                    arr_21 [i_0] [i_1] [i_1] [i_2] = (-764560852 != 10201465132388653411);
                    var_21 = (((arr_17 [i_2 + 3] [i_1] [i_2 + 3] [i_1]) != (~var_8)));
                }
            }
        }
        var_22 = var_9;
    }
    #pragma endscop
}
