/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_1] [i_2] = ((~((((!var_1) >= 11602)))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_18 [i_4] [i_0] [i_0] [i_2 + 2] [i_0] [i_0] [i_0] |= ((var_5 & (min((arr_1 [i_0]), 18446744073709551615))));
                                var_12 = (min(var_12, (((((!(((227 - (arr_2 [i_1] [i_1]))))))) ^ (((var_7 && (((40 / (-127 - 1)))))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_26 [i_1] [i_1] = (min(29, ((((~227) <= -16969)))));
                                arr_27 [i_1] [i_1] = ((~((~((max((arr_20 [i_0] [1] [i_2] [1] [1] [0]), (arr_1 [i_6]))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            {
                                var_13 = (((((16990 | ((60 ? -54 : (arr_3 [i_1])))))) % (min(((29 ? var_5 : var_10)), (((16968 ? (arr_14 [i_0] [i_1]) : var_1)))))));
                                arr_32 [i_1] [i_7] [i_2] [15] [i_1] = ((-16962 ? -332760662 : 29));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 15;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 16;i_10 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_11 = 2; i_11 < 15;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        {
                            var_14 = (((((16975 && (~-479045422)))) - (arr_1 [i_12])));
                            var_15 = var_4;
                            var_16 |= (max((max(-14, ((25863 ? (arr_41 [i_9] [i_9] [i_9] [i_11] [i_12] [i_12]) : var_11)))), ((min(163, (arr_8 [i_10] [i_10] [2] [i_12]))))));
                        }
                    }
                }
                arr_44 [i_10] = 25863;
            }
        }
    }
    var_17 = -25848;
    #pragma endscop
}
