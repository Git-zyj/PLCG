/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_8 [i_0] [i_2] [i_2] [i_3] = ((arr_5 [i_2]) | (((((var_17 ? (arr_3 [i_0] [7] [i_2]) : (arr_0 [i_1] [i_2])))) | (arr_2 [i_0] [10] [i_2]))));
                            var_19 += ((((max((arr_7 [i_1] [i_1] [i_0] [i_1] [i_1 + 1] [i_1 + 1]), (arr_4 [i_0 + 2])))) ? ((((arr_4 [i_0 + 2]) && (arr_4 [i_0 + 2])))) : (~1)));
                            arr_9 [i_2] = ((((~(arr_4 [i_2]))) ^ (((11667 || (arr_3 [i_0 + 1] [i_1 + 1] [i_2]))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_16 [i_0 - 1] [i_0 - 1] [i_4] [i_4] [i_5] [5] = ((((((arr_0 [i_1] [i_1]) ? (arr_7 [i_0 + 1] [i_5] [i_0] [i_0] [i_0 + 1] [i_0]) : (~var_2)))) ? 85254433 : 771485707));
                                arr_17 [i_6] [i_5] [i_5] [i_4] [i_4 + 1] [i_1] [i_0] = (min(((min((arr_10 [i_1 + 1] [i_1 + 1]), (arr_10 [i_1 + 1] [i_6])))), (((arr_10 [i_1 + 1] [i_4]) ? (arr_10 [i_1 + 1] [i_4]) : (arr_10 [i_1 + 1] [i_1 + 1])))));
                                arr_18 [11] [11] [i_4] [11] [1] = (~0);
                                var_20 ^= var_18;
                                arr_19 [0] [11] [i_1] = ((((((~3906229751537522600) + (53865 / 53841)))) ? 11689 : (((arr_12 [i_0] [7] [i_4] [i_5] [i_5] [i_6]) * (((arr_12 [i_0 + 1] [i_0] [i_0] [i_0] [i_0] [i_0]) ? 3459331620 : var_4))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = ((var_8 ? var_14 : (((var_10 ? var_9 : 17671)))));
    #pragma endscop
}
