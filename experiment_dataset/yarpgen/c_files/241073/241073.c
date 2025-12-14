/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    var_13 -= (min(var_10, ((var_1 ? var_0 : (((max(63, 63))))))));
    var_14 = (+(min((8840239237646931998 != 63), var_11)));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_4 [2] &= 147036079;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_18 [i_0] [i_0] [i_2] [i_0] [i_4 - 2] = (((8108466466309801417 * 162) | (((-(!47393))))));
                                var_15 = (max(var_15, ((((-(arr_0 [i_0 + 1]))) + (((!((var_5 < (arr_17 [i_2] [i_2]))))))))));
                            }
                        }
                    }
                    arr_19 [i_0] [9] [8] [i_0] = (10338277607399750198 | 65535);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_16 = (max(var_16, ((min((((arr_6 [i_0 + 1] [i_2] [i_2]) ? (((arr_13 [i_1] [i_1] [8] [i_1 - 1] [0]) ? var_0 : 8646911284551352320)) : var_3)), 56)))));
                                var_17 = (min((((~(arr_3 [i_0 + 1])))), (max((arr_24 [i_1 + 2] [i_0 + 1] [i_0 + 1] [i_0] [i_0]), (arr_25 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1 + 2] [i_1] [6] [i_1 + 2])))));
                                arr_26 [i_0] [i_0] = (arr_8 [i_0 + 1] [i_6]);
                                var_18 = (arr_7 [i_0 + 1] [i_0 + 1] [i_2]);
                            }
                        }
                    }
                    var_19 ^= -147036058;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_20 = ((-((((~(arr_31 [i_8] [i_7] [i_2] [i_1 + 1] [i_0 + 1]))) & (max(33, 7))))));
                                var_21 = ((!((!(arr_2 [i_0])))));
                                var_22 = (min((((arr_17 [12] [i_1 - 1]) * (arr_31 [i_0] [i_0] [i_0 + 1] [i_1 - 1] [8]))), (arr_20 [i_0] [i_8] [i_0 + 1] [i_1 + 2] [i_8] [i_2])));
                                arr_32 [i_0] [4] [i_1] [i_0] [2] [i_8] [i_8] |= ((((!(arr_14 [i_0 + 1] [i_1 + 3] [i_2]))) && ((max((arr_20 [i_0] [i_0] [i_2] [i_7] [i_8] [i_2]), (!1))))));
                                arr_33 [i_0] [i_0] [i_0 + 1] [i_0] [1] [i_0] = ((((-(~7051754685548404526))) % (71 ^ 9223372036854775807)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
