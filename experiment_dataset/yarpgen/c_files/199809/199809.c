/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (30170 ^ var_1);

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_12 = (~4294901760);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_10 [10] [i_0] [i_2] [i_2] = ((~(arr_5 [i_2] [i_1])));
                    var_13 = (max(30170, 3506487211));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            {
                var_14 = (min(var_2, ((~(((arr_6 [i_4] [i_4] [4]) ^ (arr_9 [i_3] [i_4])))))));

                /* vectorizable */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_15 = (((((-2108094744462562551 && (arr_22 [7] [i_6] [i_5] [i_4] [1])))) << (var_10 - 10793727615003334866)));
                                var_16 += (var_6 ^ var_0);
                                var_17 = (arr_4 [i_3] [0]);
                            }
                        }
                    }
                    var_18 = (min(var_18, 159));

                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        var_19 = ((arr_25 [i_8] [5] [1] [i_3]) == -var_7);
                        arr_26 [1] [i_4] [i_3] [6] [i_8] = ((172 >> (30170 - 30160)));
                        var_20 += (0 + var_9);
                    }
                }
                for (int i_9 = 1; i_9 < 9;i_9 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            {
                                var_21 = -30149;
                                arr_33 [i_3] [i_4] [9] [4] [i_3] = (((((max(var_2, (arr_17 [i_3] [i_9 + 1] [0]))) + (((((arr_22 [i_3] [8] [i_9 + 1] [0] [9]) != (arr_17 [i_3] [i_3] [i_3]))))))) / (19 <= 159)));
                                arr_34 [i_4] [i_3] [4] [i_11] = (min((arr_11 [i_3]), (var_4 & 1246671144)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 6;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 10;i_13 += 1)
                        {
                            {
                                arr_40 [i_3] [9] [3] [4] [i_3] [1] = (max(((min((arr_1 [i_4] [1]), ((max(var_9, 97)))))), (~var_7)));
                                var_22 = (max(-9608, (arr_38 [2] [6] [i_9 - 1] [i_12 + 3] [1] [2])));
                                var_23 = (~var_8);
                            }
                        }
                    }
                    var_24 = (max(var_24, (max(4259020502, (((var_5 / ((~(arr_28 [5]))))))))));
                    arr_41 [i_3] [9] [i_3] [1] = ((-((max(((!(arr_14 [i_9 - 1] [7]))), (118 == 27843))))));
                }

                for (int i_14 = 1; i_14 < 7;i_14 += 1)
                {
                    var_25 = (max(((min((arr_8 [6] [i_14 + 2]), var_3))), (((~(arr_44 [1] [i_4] [i_4]))))));
                    var_26 = (max(((-(max(2711934694, (arr_19 [6]))))), 1488344531));
                    var_27 = (min(-117, (min(var_6, 788480085))));
                    var_28 = (((min((arr_39 [i_3]), 0)) % ((((-var_10 || (arr_21 [7] [i_14 + 1] [i_14 + 2] [9])))))));
                    arr_45 [6] [i_3] [i_14 + 2] = ((-(~3978379185)));
                }
                for (int i_15 = 0; i_15 < 10;i_15 += 1)
                {
                    var_29 |= (1 || 31071);
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 10;i_17 += 1)
                        {
                            {
                                var_30 = (min((((((arr_52 [4] [8] [9] [2] [i_17]) <= -9223372036854775793)))), ((-(1 <= 34684)))));
                                var_31 += (((max((var_9 != 3441994206), (max((arr_35 [3] [i_4] [4] [i_16] [3] [i_3]), 43)))) + (((max((arr_1 [2] [10]), (arr_1 [i_3] [i_15])))))));
                            }
                        }
                    }
                }
                var_32 = (min(1, ((-(arr_14 [i_4] [i_4])))));
            }
        }
    }
    #pragma endscop
}
