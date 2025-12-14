/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [i_1] = (arr_0 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_10 [i_1] [i_1] [i_3 - 2] [i_3] = var_8;
                            var_13 = 18;
                            var_14 ^= (min((max((((arr_9 [i_3 + 1] [i_2] [1] [1]) ? (arr_8 [i_0] [i_1] [i_2]) : var_2)), (((17 ^ (arr_1 [i_2] [i_0])))))), ((~(arr_7 [i_2] [i_3 - 1] [i_2] [i_3 + 1] [i_2] [i_3])))));
                        }
                    }
                }
            }
        }
    }
    var_15 = var_5;
    var_16 = ((var_2 > (min(var_3, 238))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 19;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 18;i_7 += 1)
                    {
                        {
                            arr_22 [11] [i_5 + 1] [i_6] = (max((arr_19 [i_7 - 3] [i_5 + 1] [i_5] [i_5]), (((arr_14 [i_5 - 1] [i_5 - 1] [i_4]) ? (arr_14 [i_5 + 2] [i_4] [i_4]) : var_7))));
                            arr_23 [i_4] [7] [i_5 + 2] [11] [7] [i_7] = (((((!(arr_18 [i_4] [i_5 + 2])))) ^ var_1));
                            var_17 = ((((((arr_15 [i_7] [i_5 - 1] [i_4]) % (arr_15 [i_7] [1] [1])))) < ((((max(1809043047, var_8))) * 1202))));
                            var_18 = (arr_18 [i_5] [i_7]);
                        }
                    }
                }
                var_19 = (((arr_18 [i_4] [i_4]) ? (((~(arr_18 [i_4] [i_5])))) : (~12252344617675346845)));
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            {
                                arr_32 [i_10] [i_9] [5] [i_5] [i_4] &= var_5;
                                arr_33 [18] [i_9] [i_8] [i_5 + 1] [i_4] = (arr_15 [i_4] [i_5 + 1] [i_5 + 1]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
