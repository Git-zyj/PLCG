/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((~var_5) ? var_2 : (-9223372036854775807 - 1));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_9 [i_1] [i_1] = ((((-(max(var_8, var_5)))) & ((min(var_6, var_14)))));
                            var_17 = (min(var_17, ((((-((max(17485, 46508)))))))));
                            arr_10 [i_1] = (~var_12);
                        }
                    }
                }
                var_18 *= ((~(var_10 < 1)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 4; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                {
                    arr_18 [i_6] [i_5] [i_4] = (min((((18446744073709551615 < (-9223372036854775807 - 1)))), ((1099511627775 * (arr_16 [i_4 - 1] [i_4 - 4])))));
                    arr_19 [i_4] [i_5] [i_6] = ((((((arr_15 [i_4] [i_4 - 2]) ? 1099511627788 : var_9))) ? var_13 : ((1099511627756 ? (arr_0 [i_4 - 1] [i_4 - 1]) : 9223372036854775807))));
                    arr_20 [i_5] = -2440929161;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                {
                    arr_29 [i_8 + 2] [i_8] [i_8] [i_8] = (max(((-6991777988346424381 ? 4839445241414734119 : 5152350495936067558)), ((min((var_9 + 2097151), (((arr_27 [i_7] [12] [i_9] [i_8]) ? var_9 : var_15)))))));
                    arr_30 [i_8] [i_8 + 1] [i_9] = (arr_23 [i_8 - 1]);
                    var_19 ^= var_1;
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 25;i_11 += 1)
                        {
                            {
                                var_20 -= ((((arr_22 [i_8 - 1] [i_8 + 2]) ? (arr_22 [i_8 + 1] [i_8 + 2]) : var_14)));
                                var_21 = 14392449664194141265;
                                var_22 -= (((((-5006802036928088259 ^ (((55872 ? var_6 : 16355)))))) ? ((((!(arr_22 [i_8 - 1] [i_8]))))) : (((arr_32 [i_7] [i_7] [i_7] [i_8 + 1]) ? (min((arr_33 [i_7] [i_8] [i_9] [i_8] [i_10] [i_8] [i_9]), 20)) : (arr_31 [15] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1])))));
                            }
                        }
                    }
                    arr_35 [i_8] [i_9] = (((((!18446744073709551615) ? var_14 : 2056316719)) / (arr_31 [i_7] [i_7] [i_7] [i_7] [i_7])));
                }
            }
        }
    }
    #pragma endscop
}
