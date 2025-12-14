/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] = (arr_0 [i_0] [0]);
                var_15 -= (min(17, var_3));
                var_16 |= (((max(7, (arr_2 [i_0]))) & ((238 ? (arr_1 [i_0]) : (arr_1 [i_0])))));
                arr_7 [i_1] = var_0;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 15;i_4 += 1)
                            {
                                var_17 = ((18 * (((arr_12 [i_2] [i_1] [2] [i_2]) * (2987156162 - 2987156162)))));
                                var_18 = ((((((((arr_16 [i_2] [i_2] [1] [i_3] [i_1]) ? var_14 : (arr_15 [5] [i_1] [i_1] [i_1] [i_2] [i_1] [14]))) ^ (((arr_3 [i_0] [i_0]) / 9198125513621306527))))) ? var_0 : (((((~(arr_16 [i_2] [5] [i_2] [8] [i_4])))) ? (max(var_12, (-9223372036854775807 - 1))) : (arr_11 [i_2])))));
                                var_19 ^= -4606585014231023643;
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 15;i_5 += 1)
                            {
                                arr_20 [i_0] [i_0] [i_2] [i_2] [i_3] [i_5] [i_5] = ((~(var_12 - var_7)));
                                var_20 = (min(var_20, (arr_18 [i_0] [i_0] [i_0] [10] [6] [8] [i_0])));
                                var_21 += -2254707689847414275;
                                arr_21 [i_0] [i_1] [i_2] [i_1] [4] [i_0] = ((0 ? 18291 : 255));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 15;i_6 += 1)
                            {
                                var_22 = ((arr_22 [7] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) ? (arr_22 [i_0] [1] [8] [i_2] [i_3] [i_3] [i_6]) : (arr_22 [8] [i_3] [i_3] [i_2] [3] [8] [3]));
                                var_23 *= (((arr_0 [i_2] [i_3]) ? (arr_0 [i_1] [i_3]) : (arr_0 [3] [3])));
                                arr_24 [i_0] [i_1] [i_0] [i_2] [5] [i_0] [i_3] = (((arr_10 [7] [i_2] [i_1]) ? (!var_12) : (((arr_23 [i_2] [i_3] [0] [i_3]) - var_9))));
                            }
                            arr_25 [i_0] [i_2] [i_2] [i_3] = var_3;
                        }
                    }
                }
            }
        }
    }
    var_24 = var_14;
    #pragma endscop
}
