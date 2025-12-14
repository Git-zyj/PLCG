/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = 57;
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_15 -= (((((194 < (arr_13 [i_0 - 1] [i_0] [2] [i_0 + 3] [i_0 + 1]))))) % (((((arr_0 [i_2 + 1]) + 9223372036854775807)) >> (((arr_0 [i_2 - 1]) + 7351816613693282430)))));
                                arr_15 [8] [i_3] [i_3] [2] [i_3] [i_1] [i_0] &= (max(((max((arr_7 [i_2 - 2] [i_0 - 1]), (arr_7 [i_2 - 3] [i_0 - 1])))), (((arr_7 [i_2 - 3] [i_0 - 1]) ? (arr_7 [i_2 - 3] [i_0 - 1]) : 1))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 8;i_6 += 1)
        {
            {

                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    arr_23 [i_6] [i_6] [i_6] = (min((min((var_1 * -32755), (arr_13 [i_6] [i_6 + 1] [i_6] [i_6] [i_6 - 1]))), (((max(var_8, (arr_1 [0])))))));
                    var_16 = ((!((max(var_12, (~var_13))))));
                    arr_24 [i_5] [i_6] [i_6] [7] = (((199 ? var_10 : ((~(arr_0 [i_5]))))));
                }
                /* vectorizable */
                for (int i_8 = 1; i_8 < 8;i_8 += 1)
                {
                    var_17 -= 62;
                    arr_27 [i_5] [i_6] = 1;
                    var_18 = (((arr_13 [i_6 - 2] [i_8 + 2] [i_8 + 1] [i_8 + 2] [i_5]) / (arr_13 [i_6 + 2] [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_5])));
                }

                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    var_19 = ((!((max(70, (max(var_2, var_3)))))));
                    var_20 += ((2 ? var_2 : (((arr_14 [i_5] [8] [i_9] [i_6 - 1] [8]) >> (((arr_25 [i_6] [i_6] [i_6 - 2] [i_6 + 1]) + 1729286595))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            {
                                var_21 ^= ((-(max((arr_18 [i_6 + 1] [i_10]), -9223372036854775792))));
                                var_22 = (max(var_22, (max(var_3, ((var_3 ? (arr_5 [i_5] [i_5] [i_11] [i_5]) : (arr_5 [i_5] [10] [i_11] [i_9])))))));
                                var_23 ^= ((-(((arr_28 [i_6 + 2] [i_6 + 2] [i_6 + 2]) ? (max(var_5, -29274)) : 211))));
                            }
                        }
                    }
                }
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    var_24 = ((((((min((arr_20 [i_6 - 2] [i_6 - 2] [i_6 + 1]), (arr_20 [i_6 - 2] [i_6 - 1] [i_6 - 1])))) + 2147483647)) << (((((((arr_20 [i_6 + 2] [i_6 + 2] [i_6 - 1]) ? (arr_20 [i_6 + 1] [i_6 - 1] [i_6 + 2]) : (arr_20 [i_6 + 1] [i_6 + 2] [i_6 - 2]))) + 130)) - 15))));
                    var_25 = (arr_31 [i_6]);
                }
            }
        }
    }
    var_26 += ((var_13 != (((31 % var_1) ? var_8 : var_5))));
    var_27 = (!73);
    #pragma endscop
}
