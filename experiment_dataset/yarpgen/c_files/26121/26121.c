/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_11 = (min(var_11, ((max(((1052685243 ? var_9 : (((min(var_1, 127)))))), var_5)))));
        arr_3 [i_0] &= var_1;
        arr_4 [i_0] = (min(((((7360572117173309654 ? 127 : var_6)))), ((~(arr_1 [i_0])))));
        arr_5 [i_0] = ((+((((arr_0 [i_0]) ? 0 : (arr_2 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        var_12 |= (arr_6 [i_1 - 1]);
        arr_9 [i_1] = (((((1 ? (arr_8 [i_1]) : 0))) ? (arr_8 [i_1]) : (arr_7 [i_1 + 3] [i_1 + 3])));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_14 [i_2] = (max((arr_11 [i_2]), (arr_10 [i_2])));
        var_13 = (min(var_13, ((max((arr_6 [i_2]), 1)))));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        arr_19 [i_3] = 209619142;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 8;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 0;i_7 += 1)
                        {
                            {
                                var_14 = (max(var_14, (((((min(-var_8, (arr_17 [i_5 + 1] [i_7 + 1])))) ? (arr_24 [i_4] [i_4] [i_4] [i_4]) : (~var_9))))));
                                var_15 |= (arr_6 [i_7]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 7;i_9 += 1)
                        {
                            {
                                var_16 = 1;
                                arr_37 [i_3] [i_3] [i_3] [i_3] [i_5] [i_5] [i_5] = (min(155, 31955));
                            }
                        }
                    }
                    arr_38 [i_3] [i_5] [i_4] [i_5] = var_4;
                }
            }
        }
    }

    for (int i_10 = 0; i_10 < 18;i_10 += 1)
    {
        arr_41 [i_10] = (arr_8 [i_10]);

        for (int i_11 = 0; i_11 < 18;i_11 += 1)
        {
            var_17 += ((((((arr_42 [i_11] [0] [i_10]) ? (arr_42 [i_10] [0] [i_11]) : (arr_42 [i_10] [6] [i_11])))) ? (((18446744073709551615 ? 31956 : (arr_42 [i_11] [4] [i_10])))) : (((arr_42 [i_10] [2] [i_11]) ? 18446744073709551615 : (arr_42 [i_10] [2] [i_11])))));
            var_18 = var_3;
            arr_45 [i_10] [i_10] [i_10] = -var_4;
        }
        arr_46 [i_10] [i_10] = (((((-(arr_7 [i_10] [i_10])))) ? ((((min(1, (arr_8 [i_10])))) ? (~var_5) : (!1595004523))) : -864963850));
    }
    for (int i_12 = 3; i_12 < 8;i_12 += 1)
    {
        var_19 = (arr_28 [i_12] [i_12] [6] [i_12] [i_12] [i_12]);
        var_20 = (((arr_34 [i_12] [i_12] [i_12] [i_12] [i_12]) == ((((!(arr_18 [i_12 + 2])))))));
        var_21 *= (((((~(max(var_2, (arr_30 [i_12] [i_12] [i_12])))))) ? (((-(arr_42 [i_12] [0] [i_12])))) : (min(var_7, var_8))));
    }
    var_22 = -1;
    #pragma endscop
}
