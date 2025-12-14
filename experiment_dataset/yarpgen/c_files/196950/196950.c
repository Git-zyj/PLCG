/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_0] [i_0] = 1;
                    arr_9 [i_0] [i_1] [i_1] [23] = (arr_0 [i_0]);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 14;i_5 += 1)
            {
                {
                    arr_17 [i_3] [i_4] [i_5 + 1] [i_5] = ((1 ? (min(var_9, var_13)) : var_2));
                    arr_18 [11] [i_4] [i_3] = (arr_2 [i_4]);
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_25 [8] [i_3] [8] [i_7] = ((1 ? 2904591900 : (arr_13 [i_7] [i_6])));
                                arr_26 [i_4] [i_4] [1] [i_6] [i_7] = (arr_11 [i_3]);
                                arr_27 [i_3] [i_3] [i_3] [i_4] [i_6] [i_7] = ((arr_16 [i_4 + 1] [i_4 + 1] [i_4 + 1]) >= (min((arr_16 [i_4 + 1] [i_4 + 1] [i_4 + 1]), 2147483647)));
                            }
                        }
                    }
                    arr_28 [i_4] [1] [i_5] = (min(var_10, 2251662374731776));
                    arr_29 [i_4] = (((((117440512 / 4582672785040185304) ? var_4 : (arr_22 [i_4 + 1] [i_4 + 1] [i_4 + 1])))) * (((((4582672785040185304 ? -2251662374731776 : (arr_1 [5])))) ? (arr_7 [i_4 + 1] [i_4 + 1] [i_5 + 1]) : var_13)));
                }
            }
        }
    }
    #pragma endscop
}
