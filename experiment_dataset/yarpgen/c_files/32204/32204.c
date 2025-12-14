/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = min(-7390, (max(-7409, var_3)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_13 = (max(var_13, (arr_1 [i_1 + 4] [i_1 - 3])));
                arr_6 [i_0 - 1] [i_0] = (arr_4 [i_1] [i_1 + 4] [i_1 + 3]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_14 = ((((!(arr_11 [i_4] [i_4 - 1] [i_4 - 1] [i_2] [i_4]))) ? 24722 : (((var_6 || (arr_5 [i_4 + 1] [i_4 - 1]))))));
                                arr_14 [i_0 + 1] [12] [i_2] [i_2] [i_4] &= 20173;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                {
                    arr_22 [i_5] [i_6] [10] = ((~(arr_20 [i_5])));
                    var_15 = ((((var_7 && -3258) + -7421)));
                    var_16 = (((var_9 ^ (arr_18 [i_5]))));
                    /* LoopNest 2 */
                    for (int i_8 = 4; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            {
                                var_17 ^= (arr_19 [i_8 - 4]);
                                var_18 = (min(var_18, (arr_17 [i_7] [i_5 + 1])));
                                arr_28 [i_5] [i_6] [i_7] [7] [i_5] [i_9] = (0 >> 14);
                                var_19 |= (((!7843993607822213942) ? (((arr_21 [i_6 + 1] [i_8] [i_8 + 1] [i_9]) | (arr_20 [i_8]))) : -2428089872102207710));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
