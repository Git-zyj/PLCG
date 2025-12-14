/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_11 = (((((-9223372036854775805 + 9223372036854775807) << (((arr_4 [i_0 - 2]) - 533841831))))) ? ((min(3, 0))) : ((var_1 ? (arr_3 [i_0 - 2] [i_1]) : var_2)));
                var_12 = 193;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_13 [9] [i_1] [9] [i_3] = ((~(!193)));
                            var_13 = (arr_6 [i_0] [i_2] [5]);
                            arr_14 [i_2] &= (((max((arr_1 [i_0 - 2]), var_7)) % var_10));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            {
                arr_22 [i_4] = (((((max((arr_17 [i_5] [i_4]), var_7)) / (arr_21 [i_4] [i_5] [i_4]))) / (((((max(var_2, (arr_16 [i_4])))) * (((arr_18 [i_5]) ? var_6 : (arr_20 [i_4] [i_4]))))))));
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            {
                                arr_33 [i_4] [15] [i_4] [i_8] [i_4] = (((((max(var_10, (arr_29 [i_4] [i_4] [i_7 + 1] [i_4] [16]))) != ((-(arr_16 [i_4]))))) ? (((min(var_10, (arr_29 [i_4] [i_5] [16] [i_5] [i_8]))) >> (((min((arr_15 [i_4] [i_8]), var_10)) - 24415)))) : (max(var_9, var_10))));
                                var_14 = (max((--0), ((~(arr_25 [i_7] [i_7 - 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = (((32767 <= 26) & var_1));
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 21;i_10 += 1)
        {
            {
                arr_42 [i_9] [i_9] = ((-(1 % 96)));
                arr_43 [i_10] [i_9] = 123;
                arr_44 [9] [1] [i_10] &= ((-(arr_18 [5])));
                var_16 *= ((((((arr_37 [i_9]) >= (var_3 <= var_1)))) * (arr_24 [i_9] [i_10])));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        {
                            arr_50 [i_9] [i_10] [i_11] [i_12] = var_0;
                            arr_51 [i_11] [1] = ((((-(((arr_19 [i_9] [i_9]) ? 26 : (arr_45 [i_9] [0] [i_9] [i_9]))))) % (~109)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
