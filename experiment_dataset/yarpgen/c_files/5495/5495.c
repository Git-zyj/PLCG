/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (~var_0);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            {
                arr_7 [17] [17] = (arr_4 [i_1 + 2]);
                arr_8 [i_0 - 1] [i_1] = ((((((arr_1 [i_0 - 1]) ? (~0) : ((var_5 ? (arr_4 [i_0]) : (arr_5 [i_0] [i_1])))))) ? var_4 : (arr_4 [i_0])));
                arr_9 [i_0] [i_1] &= (max(((var_14 ? var_9 : ((max(var_3, var_2))))), -70));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_16 [i_4] [i_1] [i_2] [i_3] [2] = ((1 ? (arr_3 [i_2]) : (((((min((arr_6 [i_0 - 1] [i_3]), var_15))) ? 14 : (var_0 * 2047))))));
                                arr_17 [i_2] [i_1] [i_1] [i_3] [i_4] = ((((-28 <= ((min(var_14, var_14)))))) - (((((~(arr_11 [10] [i_3] [i_4]))) <= var_15))));
                                arr_18 [i_3] [i_2] = (8108543137835127063 && -0);
                                arr_19 [i_3] &= 4294967295;
                            }
                        }
                    }
                }
                arr_20 [i_1] [i_1] = (max(4294967295, 14078079084485584515));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 21;i_7 += 1)
            {
                {
                    arr_29 [i_7] [i_7] [21] = (max((((~(arr_21 [i_5 - 1])))), var_12));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            {
                                arr_36 [i_5] [i_6] [1] [i_9] = 1473615497;
                                arr_37 [i_5] [0] [i_8] [i_9] = var_13;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
