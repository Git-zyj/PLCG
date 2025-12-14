/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_14 = (max((((arr_6 [i_0] [i_1]) ? var_5 : 22)), ((1 >> (18446744073709551594 - 18446744073709551554)))));
                var_15 = (max(var_15, (min((max(var_5, (arr_6 [i_1] [i_0 + 1]))), (arr_4 [i_1] [i_0] [i_0 - 1])))));
            }
        }
    }
    var_16 = var_12;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    arr_14 [i_4] [7] [i_2] = (max(var_11, (arr_13 [i_2] [i_3] [i_4])));
                    var_17 = (max(var_17, ((((max((arr_11 [i_2] [i_3]), (((arr_10 [i_2] [i_3]) ? 15 : 6109549497724148366)))) >= ((((((18446744073709551569 ? var_5 : (arr_9 [i_2])))) ? 224 : ((var_4 ? (arr_10 [4] [i_2]) : (arr_11 [i_2] [i_2])))))))))));
                }

                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    var_18 = (max(var_18, ((((~(0 > 12171689096711961636)))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            {
                                arr_21 [i_6] [i_3] [i_5] [i_6] = ((((((min(112, 238))) ? 6275054976997589998 : var_5))) ? -211 : ((var_10 ? (max((arr_19 [i_6] [i_7]), var_4)) : var_8)));
                                var_19 = ((+((var_12 ? (arr_12 [i_2]) : (arr_18 [i_2] [18] [12] [i_3])))));
                                arr_22 [i_2] [i_2] [3] [i_2] [i_2] |= ((((max((arr_12 [i_2]), 18446744073709551594))) ? (max((arr_20 [i_2] [i_2] [i_2] [i_2] [i_2]), (arr_7 [i_2] [i_6]))) : (min((arr_20 [i_2] [i_2] [i_2] [i_2] [i_2]), (arr_12 [i_2])))));
                                arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] |= (arr_16 [11] [i_3] [i_3] [i_3]);
                            }
                        }
                    }
                }
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        arr_29 [i_9] [i_3] = (((arr_10 [i_8] [i_8]) ? (arr_10 [i_3] [i_2]) : (arr_10 [i_3] [i_8])));
                        var_20 = 7;

                        for (int i_10 = 2; i_10 < 17;i_10 += 1)
                        {
                            arr_33 [i_2] [i_3] [i_8] [i_8] [i_10] [i_8] [10] |= -189;
                            arr_34 [i_10] [17] [i_9] [19] = min(233, 127);
                        }
                        var_21 = (max(var_21, (203 * 0)));
                    }
                    var_22 = (max(((82 ? (arr_25 [i_2] [i_2] [i_2]) : (arr_25 [i_3] [i_3] [i_3]))), ((max((arr_25 [i_2] [4] [i_8]), (arr_25 [i_2] [i_3] [i_8]))))));
                    arr_35 [i_8] [i_3] = (((((~var_13) < ((var_8 >> (12171689096711961636 - 12171689096711961628))))) && ((min((arr_12 [i_2]), 238)))));
                    var_23 ^= (max(29, 1));
                }
                /* vectorizable */
                for (int i_11 = 1; i_11 < 18;i_11 += 1)
                {
                    var_24 ^= arr_25 [i_2] [1] [i_11];
                    arr_39 [i_11] [i_3] [i_3] [i_11] = (((arr_26 [i_2] [i_2] [i_11] [i_11 - 1]) ? 146 : (arr_31 [i_11] [i_11] [18] [i_11 + 3] [i_11])));
                    arr_40 [i_2] [i_11] [i_2] = (((((arr_8 [12]) != (arr_27 [2] [i_11] [i_2] [i_2] [i_11] [i_2]))) ? (arr_16 [i_3] [i_3] [i_11 + 1] [i_3]) : 133));
                }
            }
        }
    }
    #pragma endscop
}
