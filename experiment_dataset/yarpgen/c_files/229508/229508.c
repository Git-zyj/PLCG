/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] |= ((min(72, (var_1 / 22978))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_16 [i_4] [1] [i_2] [i_1] [i_0 + 2] = var_3;
                                arr_17 [i_2] |= (min(((min((arr_1 [i_1] [i_0]), (arr_10 [i_0])))), (max((arr_10 [i_1]), (((arr_0 [6] [i_4]) << (((arr_5 [i_0] [i_3] [i_4]) - 5630842849573487030))))))));
                                var_15 = var_14;
                                var_16 ^= (arr_5 [i_0] [i_3] [i_4]);
                            }
                        }
                    }
                    arr_18 [i_1] = (!-126);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            {
                var_17 -= (arr_22 [14]);
                var_18 = ((5 ? (arr_19 [i_6]) : (arr_19 [i_6 - 1])));
                var_19 = (max((min((arr_19 [i_5]), (max(1, -4547261918869878425)))), (((((((arr_21 [i_5]) ? (arr_24 [i_5]) : var_6))) && var_0)))));
                arr_25 [i_5] [i_6] [i_6] = (((((1652739438 ? 4547261918869878433 : 8377245119034868325))) ? (min(2147483647, (arr_22 [18]))) : (((((var_11 ? 4547261918869878445 : (arr_21 [i_5])))) ? 1 : (((arr_19 [i_6]) - var_2))))));
                var_20 = (arr_20 [i_6 - 1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 13;i_8 += 1)
        {
            {
                var_21 = 4547261918869878462;
                var_22 = (((arr_3 [i_7] [i_8]) ? ((~(arr_19 [i_8 + 1]))) : (4547261918869878445 < var_7)));
            }
        }
    }
    #pragma endscop
}
