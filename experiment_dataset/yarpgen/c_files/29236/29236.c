/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_10 = (max(((((arr_4 [i_1 - 3] [i_0]) >> (-105 + 113)))), 18446744073709551600));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_16 [0] [10] [0] [i_3] [0] [i_3] [i_1] &= ((~((-(arr_0 [i_1 - 3])))));
                                arr_17 [i_4] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = 57659;
                                arr_18 [i_0] [i_1 + 1] [i_0] [i_0] [i_4] = (((var_0 == 22261) ? (arr_14 [i_0] [i_1] [i_2 + 1] [i_2 - 1] [i_3] [i_4]) : (var_2 > 256)));
                                var_11 = (i_0 % 2 == 0) ? ((((((arr_3 [i_1 - 1]) >= (arr_3 [i_1 - 1]))) ? ((((((var_7 << (((arr_9 [i_2] [i_0]) - 290178496))))) ? 231 : 0))) : ((((((arr_12 [1] [i_2] [i_2] [i_4]) / var_1))) ? (max(var_9, var_4)) : 0))))) : ((((((arr_3 [i_1 - 1]) >= (arr_3 [i_1 - 1]))) ? ((((((var_7 << (((((((arr_9 [i_2] [i_0]) - 290178496)) + 96339513)) - 14))))) ? 231 : 0))) : ((((((arr_12 [1] [i_2] [i_2] [i_4]) / var_1))) ? (max(var_9, var_4)) : 0)))));
                                arr_19 [i_4] [i_4] [i_0] [i_0] [i_1] [i_0] = var_1;
                            }
                        }
                    }
                    arr_20 [i_0] [i_1 - 3] [i_0] [i_0] = ((((((arr_7 [i_0]) ? (arr_10 [i_2 + 2] [i_0] [i_0]) : (arr_7 [i_0])))) ? ((-var_5 ? (((arr_4 [i_0] [i_1]) % 160)) : 11672)) : (((max(-1, (arr_9 [i_1] [i_0])))))));
                }
            }
        }
    }
    var_12 = (max(var_12, ((((570138818 ? (var_5 | -1505996616) : (max(var_7, var_5))))))));
    var_13 = var_7;
    var_14 &= var_5;

    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_15 = (min(var_15, (((+((((((arr_21 [16]) ? var_6 : var_0))) ? (((-143181325 + 2147483647) >> 4)) : ((8 ? (arr_21 [10]) : (arr_21 [8]))))))))));
        var_16 = var_1;
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 0;i_7 += 1)
            {
                {
                    var_17 -= ((((-(arr_21 [16]))) * ((254 / (arr_22 [i_7 + 1])))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            {
                                arr_31 [i_5] [10] [i_9] [i_8] [i_8] |= ((+(((arr_27 [i_9] [9] [i_5] [i_5]) ? 4 : (arr_23 [i_5] [i_8] [i_9])))));
                                var_18 = var_6;
                                arr_32 [i_5] [16] [i_5] [i_5] [16] [i_6] = (arr_24 [i_5]);
                            }
                        }
                    }
                }
            }
        }
        var_19 = ((31 - ((((arr_24 [i_5]) + var_8)))));
    }
    #pragma endscop
}
