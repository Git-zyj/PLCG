/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_11 = (~(arr_0 [i_0] [5]));
                                var_12 = 334136011472079338;
                                var_13 = 49;
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    var_14 &= ((~(81 / 10614)));
                    arr_17 [i_0] [i_1] [i_1] = (max(54938, (((51 <= ((-(-127 - 1))))))));
                    arr_18 [i_0] [i_5] [i_0] |= ((((arr_5 [i_0]) - (arr_6 [i_0] [i_0]))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    arr_21 [i_0] [i_1] [i_0] = arr_9 [i_0] [i_1] [i_6];
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            {
                                var_15 = (-(arr_19 [i_6] [i_6] [i_6] [i_6]));
                                var_16 ^= ((-((((arr_4 [i_8]) == var_8)))));
                                arr_27 [i_8] [i_1] [i_6] [i_1] [i_0] = (14 ? -820134704 : -334136011472079327);
                                arr_28 [i_8] [i_1] [i_6] = (((arr_2 [i_6]) / (arr_2 [i_1])));
                            }
                        }
                    }
                    arr_29 [i_0] [i_0] [i_1] [i_0] = var_9;
                }
            }
        }
    }
    var_17 = ((var_3 ? (var_10 & -124) : ((min(var_4, var_4)))));
    #pragma endscop
}
