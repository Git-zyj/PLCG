/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] = arr_5 [i_0] [i_0] [i_0];
                arr_7 [i_0] [i_1] = 0;
            }
        }
    }
    var_20 += ((min(var_11, -32414)));
    var_21 = var_6;
    var_22 ^= var_10;

    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        var_23 = (((min((((arr_9 [i_2]) / (arr_8 [i_2]))), ((-(arr_9 [i_2 + 1]))))) << (arr_10 [i_2 + 1] [i_2 + 1])));
        arr_11 [i_2 + 1] [i_2] = (min((max(((max((arr_8 [i_2]), (arr_10 [1] [13])))), (((arr_9 [i_2]) ? var_10 : (arr_8 [i_2]))))), ((max((arr_10 [i_2 + 1] [i_2 - 1]), (arr_9 [i_2]))))));
        var_24 = (((((var_0 ? var_12 : (arr_10 [1] [1])))) % (arr_9 [i_2])));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 8;i_5 += 1)
            {
                {
                    var_25 = (max(((min(((-32395 ? (arr_10 [i_3] [i_4]) : 14)), (arr_9 [i_4])))), (arr_13 [i_5] [i_4])));
                    /* LoopNest 2 */
                    for (int i_6 = 4; i_6 < 7;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_26 = -32409;
                                arr_28 [i_4] [i_3] = (((((((min((arr_27 [i_5]), -32406))) ? (arr_1 [i_3] [i_6]) : (((arr_26 [i_6] [i_6] [i_6] [i_6] [i_6]) / var_16))))) ? (((var_15 <= (((arr_26 [i_3] [i_3] [i_5] [i_3] [i_7]) | (arr_15 [i_3])))))) : (arr_20 [i_4] [i_5] [i_6])));
                                var_27 *= ((var_11 <= ((((32406 != 2207350331) <= ((((arr_8 [11]) != var_12))))))));
                                arr_29 [2] [i_7] [i_6] [i_6] [i_6] = (((((min(var_4, (arr_9 [i_3])))) || (((-1 ? (arr_8 [i_3]) : (arr_16 [0])))))) ? 65535 : (((!(arr_8 [i_5 - 3])))));
                            }
                        }
                    }
                    var_28 = ((((((arr_4 [i_5] [i_5] [i_5 - 3]) == (arr_25 [i_3] [i_4] [i_3]))))) ? (((((arr_15 [i_3]) ? (arr_15 [i_3]) : (arr_18 [i_4] [i_4]))) / (((var_10 || (arr_3 [i_3] [i_3] [i_3])))))) : ((((((arr_3 [i_3] [i_3] [i_3]) ? (-32767 - 1) : 32414))) ? (arr_15 [i_5]) : (arr_18 [i_3] [i_5]))));
                    arr_30 [7] [i_4] [i_4] = ((var_3 || (((((((arr_2 [i_3] [10]) ? (arr_25 [i_3] [i_3] [i_5]) : (arr_17 [i_3] [i_4] [4])))) ? (min(var_11, (arr_10 [i_4] [i_4]))) : (((((arr_5 [i_3] [9] [i_5]) != (arr_0 [i_4] [i_5]))))))))));
                }
            }
        }
        var_29 *= ((((-40 + (var_12 + var_19))) + ((((arr_4 [i_3] [i_3] [i_3]) ? ((((arr_10 [i_3] [i_3]) == (arr_10 [i_3] [i_3])))) : (((arr_3 [i_3] [i_3] [i_3]) ? var_7 : -32395)))))));
        var_30 = ((((max((arr_17 [i_3] [i_3] [i_3]), (arr_17 [1] [i_3] [i_3])))) != ((max(8616, -8617)))));
        var_31 = (arr_3 [i_3] [i_3] [i_3]);
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 8;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                {
                    arr_37 [i_3] [i_8 + 2] [i_9] [5] = (max((arr_2 [i_8 + 2] [i_8 + 1]), (((((min(59996, (arr_0 [2] [2]))))) / (3419604745 / 64)))));
                    var_32 -= ((arr_23 [i_8] [i_9]) ? (arr_26 [i_9] [i_3] [i_3] [i_3] [i_3]) : var_0);
                    arr_38 [i_9] [0] [i_9] [i_3] = (((arr_2 [i_8] [i_8]) * (2046 / 32405)));
                    arr_39 [i_3] [i_8 - 1] [3] [i_9] = (((arr_19 [i_3] [i_3] [1] [i_9]) | (min(((var_2 ? 1 : (arr_33 [i_8 - 1]))), ((var_18 ? 8609 : (arr_25 [i_3] [i_8] [2])))))));
                    arr_40 [i_3] [i_8 + 1] [i_9] [0] = 8624;
                }
            }
        }
    }
    #pragma endscop
}
