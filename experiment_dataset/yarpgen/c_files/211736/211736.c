/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [i_0] [14] [i_2] |= 137438953471;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_14 = ((+((((arr_2 [i_1 + 1]) < (arr_13 [23] [i_1 + 1] [i_1 - 1] [i_1 + 2] [i_4 - 1] [i_4 - 1]))))));
                                var_15 = (arr_5 [i_1 + 2] [i_4 + 2] [i_4] [i_4 + 2]);
                                arr_14 [i_0] [20] [7] [i_3] [i_4] = 1;
                            }
                        }
                    }
                    var_16 ^= (((((((((arr_12 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1] [i_2]) != var_4)))) * -137438953474)) | (((((arr_1 [i_2]) == (arr_6 [22] [i_1 + 1] [i_1 + 2])))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 0;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 4; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 17;i_9 += 1)
                        {
                            {
                                var_17 = (arr_19 [i_6]);
                                var_18 = var_8;
                                arr_30 [i_5] [i_5] [i_7] [i_8] [15] = (max((((!(arr_26 [i_5 - 1] [i_6])))), (arr_12 [i_8] [i_8 - 3] [i_9] [i_9] [i_9 - 2] [13] [i_9 + 1])));
                            }
                        }
                    }
                    arr_31 [10] [i_5] [i_6] [1] = var_9;
                    var_19 &= var_2;
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            {
                                var_20 *= 1;
                                arr_37 [i_5 + 1] [1] [9] [i_5 + 1] [14] [14] [i_11] = ((max((((!(arr_22 [i_5 - 2] [i_6] [i_7])))), (max(137438953460, 131071)))));
                                arr_38 [17] [i_6] [i_7] [i_10] [i_11] = max(32767, (arr_25 [i_5 - 2]));
                                arr_39 [i_5] [i_5] [i_6] [i_5] [4] [13] = (((max(var_2, (arr_29 [11] [i_5 + 1] [11] [i_6] [i_5 + 1] [10] [11]))) & (~var_5)));
                                arr_40 [i_6] [14] &= (arr_13 [i_5 - 1] [i_6] [9] [i_7] [19] [19]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
