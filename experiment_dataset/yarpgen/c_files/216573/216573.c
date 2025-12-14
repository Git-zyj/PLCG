/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_11 = ((((min((arr_3 [i_0]), (min((arr_2 [i_0]), var_10))))) || (arr_5 [i_0] [i_0] [i_0])));
                var_12 *= (arr_1 [i_0] [i_1]);
                var_13 ^= var_5;
            }
        }
    }
    var_14 ^= var_10;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {
                var_15 ^= ((-(arr_7 [i_2] [i_3])));
                arr_11 [i_2] = 18;
            }
        }
    }
    var_16 = var_6;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            {
                arr_17 [i_4] [i_4] [i_5] = var_7;
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_17 = (~((~(!247))));
                                arr_27 [i_6] [i_5] [i_6] [i_4] &= ((((min((arr_8 [i_4] [i_5] [i_8]), (var_7 < 0)))) ? ((~(arr_23 [i_4] [i_5] [i_7] [i_7] [i_8]))) : (arr_6 [i_7 - 1])));
                            }
                        }
                    }
                }
                var_18 += (((((((((arr_10 [i_4] [i_5] [i_4]) ? (arr_4 [i_4] [18] [i_4]) : -13))) ? (arr_20 [i_4] [i_4] [i_5]) : (min(var_5, (arr_19 [i_5] [i_5] [i_5])))))) ? (arr_8 [i_4] [i_4] [i_5]) : (arr_4 [i_4] [i_5] [i_4])));
                var_19 = (max(var_19, ((((-(((arr_18 [i_4] [i_4] [i_5] [i_5]) ? 188 : 28871))))))));
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            {
                                var_20 = ((((min(var_9, (arr_28 [i_4])))) ? ((var_0 ? (arr_32 [i_4] [i_4] [i_4] [i_11]) : (arr_32 [i_4] [i_11] [i_9] [i_10]))) : (arr_19 [7] [i_10] [i_9])));
                                arr_36 [i_4] [i_11] [i_9] [i_5] [i_4] [i_4] = ((!(arr_14 [i_5] [i_5] [i_5])));
                                var_21 = ((arr_19 [i_4] [i_4] [i_4]) ? ((min((arr_19 [i_4] [i_4] [i_4]), (arr_19 [i_4] [i_4] [i_4])))) : (arr_19 [i_4] [i_5] [i_9]));
                                arr_37 [i_4] [i_5] [i_9] [i_5] [i_5] = -8;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
