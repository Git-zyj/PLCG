/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 = ((min((arr_2 [i_0] [i_0]), (arr_1 [i_0]))) % (arr_1 [i_0]));
        arr_3 [i_0] [i_0] = (max(((min(5657928684030850193, 102))), (((((min(-74, 1))) && ((var_0 != (arr_2 [i_0] [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((var_12 ? var_0 : ((max(var_10, (1 == var_10))))));
        arr_7 [i_1] = var_8;
        var_14 += (arr_1 [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        arr_11 [i_2] [11] = 1;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 18;i_4 += 1)
            {
                {

                    for (int i_5 = 4; i_5 < 17;i_5 += 1)
                    {
                        var_15 ^= (((arr_14 [i_4 - 1] [i_4 - 2] [i_4 + 1]) ? var_9 : var_8));
                        arr_18 [i_2] [i_3] [i_3] [i_5] [i_5] [i_5] |= var_8;
                        var_16 = ((var_7 ^ (arr_13 [i_2 + 1])));
                        arr_19 [i_2] [i_2] [i_4 + 1] [i_2] = ((var_6 + (-103 == -8653638039739274762)));
                    }
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        var_17 |= (((arr_16 [i_2] [16] [i_4] [16] [i_6]) ? (arr_16 [i_2] [i_3] [i_3] [i_4 + 1] [i_6]) : var_7));

                        for (int i_7 = 4; i_7 < 20;i_7 += 1) /* same iter space */
                        {
                            var_18 = (arr_23 [i_2 - 1] [i_7 - 4]);
                            var_19 = (((arr_21 [i_4 - 3] [i_4 - 3] [i_2] [i_4 + 1]) * (arr_20 [i_2 - 1] [i_2 + 2] [i_2] [i_7 + 1])));
                            var_20 = var_9;
                        }
                        for (int i_8 = 4; i_8 < 20;i_8 += 1) /* same iter space */
                        {
                            var_21 = 1;
                            arr_26 [i_2] [i_2 + 1] [i_2] = (arr_17 [i_8] [i_6] [i_4 - 2] [1] [3]);
                            arr_27 [i_3] [i_3] [i_3] [i_4] [i_3] [i_2 + 1] &= ((+((((arr_20 [i_2] [i_3] [i_3] [0]) || (arr_20 [i_2 - 1] [i_3] [i_3] [i_3]))))));
                        }
                        for (int i_9 = 4; i_9 < 20;i_9 += 1) /* same iter space */
                        {
                            var_22 += ((var_2 | (arr_17 [i_2] [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 + 2])));
                            var_23 = (((arr_10 [i_2 - 1]) && var_10));
                            var_24 -= var_1;
                        }
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            arr_33 [i_10] [i_10] [i_10] [i_6] [i_10] &= 8653638039739274753;
                            arr_34 [i_3] [i_3] [i_3] &= var_12;
                            arr_35 [i_2] = (((arr_22 [i_2 - 1] [i_3] [i_4] [i_10]) ? 0 : var_4));
                        }
                        arr_36 [i_2] = var_0;
                    }
                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        arr_40 [i_2] [i_2] [i_2] [i_3] [i_4] [i_11] = 0;
                        var_25 = ((var_9 ? var_1 : -98));
                    }
                    var_26 *= (arr_10 [i_2 + 2]);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_12 = 1; i_12 < 9;i_12 += 1)
    {
        for (int i_13 = 4; i_13 < 7;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                {
                    var_27 = (arr_9 [17] [i_14]);
                    var_28 = (((((arr_47 [i_12]) | ((var_7 ^ (arr_2 [i_12 - 1] [i_12]))))) >= ((((var_7 ? var_1 : var_2))))));
                    var_29 *= var_5;
                }
            }
        }
    }
    var_30 = (var_9 != ((112 ? 1 : 0)));
    #pragma endscop
}
