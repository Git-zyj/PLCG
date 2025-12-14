/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_17 = ((((var_9 == 889480221140177779) % ((((arr_3 [i_0] [i_1 + 1]) || var_4))))) < (((-var_15 || (arr_4 [i_1] [i_0])))));

                for (int i_2 = 4; i_2 < 17;i_2 += 1)
                {
                    arr_8 [1] [1] [i_1] [i_2] = (((min((arr_3 [i_2 + 1] [i_2]), var_9)) ^ (((~((~(arr_1 [i_0]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_18 = ((max((max((arr_4 [i_0] [i_1]), var_15)), (-2147483636 || 2774009409))));
                                arr_14 [i_0] [i_0] &= ((((max(((((arr_7 [1] [i_1 - 1] [1]) || (arr_6 [i_1] [i_1 + 1] [i_1])))), (arr_11 [i_2 - 4] [i_2 + 2] [i_2] [i_2 + 3] [4] [i_2 - 2])))) & ((~(arr_11 [i_0 + 2] [i_1] [i_1] [i_3] [i_1] [i_4])))));
                                var_19 = 3;
                                var_20 = ((((((((arr_12 [i_2]) & var_2)) >= (((((arr_13 [i_0] [i_0] [19] [i_3] [i_4]) && 18446744073709551615))))))) != ((((arr_10 [i_0 - 2] [i_4]) || (((arr_4 [i_0 + 2] [i_2]) < 1)))))));
                                var_21 = min((arr_13 [i_0] [0] [i_0] [10] [i_0]), ((~((-(arr_10 [i_2] [i_4]))))));
                            }
                        }
                    }
                    arr_15 [i_0] [i_0] [i_2] [i_0] &= (((((-3279 > (18 > 31)))) << 1));
                    arr_16 [i_2] [i_1] = 0;

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                    {
                        var_22 = (arr_17 [i_1] [i_2] [i_5]);
                        arr_20 [13] = (arr_11 [i_0] [i_0] [i_1 - 1] [1] [1] [1]);
                        arr_21 [i_5] [6] [1] [i_0] = 2896535000;
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                    {
                        arr_24 [i_0] [i_0] [i_0] [i_1] [i_1] = ((arr_5 [i_1] [i_1] [i_2]) << (!18446744073709551615));
                        arr_25 [i_6] [1] [1] [1] = 2147483647;
                    }
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        var_23 = (((-(arr_10 [i_0 - 1] [i_0 - 1]))));
                        arr_28 [i_7] = ((((~(var_11 ^ -2))) << (((!(arr_19 [i_0] [i_1 + 1] [i_1 + 1] [i_7]))))));
                    }
                    for (int i_8 = 4; i_8 < 17;i_8 += 1)
                    {
                        arr_31 [i_8] [i_0 + 2] [i_1] [i_0 + 2] = (((((((arr_17 [i_0] [i_1] [i_2]) / 10473)))) ^ (((((((arr_1 [8]) && (arr_17 [i_0] [i_0] [i_0])))) > (((var_0 || (arr_13 [i_0] [i_0 + 1] [i_0] [i_0] [i_0])))))))));
                        var_24 = (arr_9 [i_0] [9]);
                    }
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                arr_42 [7] = 3215473894;
                                arr_43 [i_11] [14] [i_10] [i_9] [i_9] [i_1 + 2] [i_0] = (arr_1 [i_11]);
                            }
                        }
                    }
                    arr_44 [i_9] [i_1] = ((-((var_3 + (arr_5 [i_9] [11] [i_9])))));
                    arr_45 [i_0] [i_0] = var_2;
                }
                var_25 |= (arr_12 [15]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 23;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 23;i_13 += 1)
        {
            {
                var_26 = (max(var_26, (((((((((arr_49 [i_12] [i_13]) || (arr_49 [i_12] [i_12])))) >> 1)) <= (-1610099085 ^ var_12))))));
                /* LoopNest 2 */
                for (int i_14 = 4; i_14 < 21;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 23;i_15 += 1)
                    {
                        {
                            arr_55 [i_14] = (((((((!(arr_46 [i_12] [i_12])))))) >= (((((arr_51 [i_12] [i_13] [i_14]) << (var_10 - 9678437051670555420))) << (((4294967264 | 4) - 4294967252))))));
                            arr_56 [2] [2] = ((((1 == 65535) && (arr_50 [18] [i_15]))) && (((~(max(var_1, var_1))))));
                        }
                    }
                }
                arr_57 [i_12] [i_13] [i_13] = 2567455560;
            }
        }
    }
    #pragma endscop
}
