/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [4] = var_10;
        var_20 ^= (((arr_1 [i_0 - 1]) | (arr_1 [i_0 - 1])));
        arr_3 [i_0] = ((-(arr_0 [i_0 - 1])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] = ((((((!(arr_6 [1]))))) | (~var_0)));
        arr_8 [i_1] &= (-2147483633 ? (((arr_6 [i_1]) + 0)) : -1283717922);
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        var_21 = (((arr_14 [i_1] [7]) - (-2147483647 - 1)));
                        arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((!(arr_12 [i_1] [i_2 - 1])));
                        arr_18 [i_4] [i_3] [i_2] [i_1] = (arr_9 [i_2 - 1] [i_2 + 1]);
                    }
                    var_22 ^= ((~(arr_11 [i_1] [i_1])));
                }
            }
        }
        arr_19 [i_1] = -1283717922;
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            {

                for (int i_7 = 1; i_7 < 14;i_7 += 1)
                {
                    arr_27 [i_5] [4] [i_5] = ((-(min(var_0, -109))));
                    arr_28 [i_5] [i_6] [i_5] = (max(((-(max(0, 1174236408)))), 23899));
                    arr_29 [i_5] [i_6] = (arr_24 [i_5] [i_6] [12]);
                }
                for (int i_8 = 2; i_8 < 11;i_8 += 1)
                {

                    for (int i_9 = 1; i_9 < 11;i_9 += 1)
                    {
                        var_23 = -1283717922;
                        var_24 = (min(((var_5 / (arr_26 [i_5]))), (max((var_17 % var_11), (var_3 < -95)))));
                        arr_34 [i_5] [i_6] [i_8 - 1] [i_5] = 65515;
                        arr_35 [i_5] [i_8] [i_5] = -2147483613;
                    }
                    var_25 = ((!((min(((max(23896, var_19))), (((arr_30 [i_5]) * (arr_22 [i_5] [i_6] [i_8 + 2]))))))));
                }
                arr_36 [i_5] [5] [i_5] = (arr_24 [i_5] [i_5] [13]);
                /* LoopNest 3 */
                for (int i_10 = 1; i_10 < 13;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 15;i_12 += 1)
                        {
                            {
                                arr_46 [i_5] [12] [i_5] [i_11] [13] [i_10] = (((arr_32 [i_5] [i_6] [i_10] [i_11] [i_12] [i_12]) % (((arr_33 [i_11] [i_6] [i_10 + 2]) ? ((((arr_22 [i_5] [i_5] [i_10]) * var_11))) : 6))));
                                arr_47 [i_5] [i_5] [i_10 + 2] = ((+(((arr_25 [i_5] [i_6] [i_10 + 2] [i_11]) ? ((((arr_24 [i_5] [i_6] [i_10 + 2]) == var_9))) : ((-110 ? 29351 : (arr_39 [i_6] [i_10] [4] [i_12])))))));
                            }
                        }
                    }
                }
                var_26 = (((-2147483647 - 1) ? 2147483634 : 2591904157));
            }
        }
    }
    var_27 = (min(-var_8, ((((min(var_16, -110)) | (~var_15))))));
    #pragma endscop
}
