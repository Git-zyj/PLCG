/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] [i_3] [i_0] [i_1] [i_0] |= ((((((arr_2 [i_3 - 1]) / (arr_7 [i_0] [i_1] [i_3 - 1])))) ? (((arr_5 [i_1] [i_0]) ? (arr_7 [i_0] [i_0] [i_0]) : 562949953421312)) : ((((((562949953421282 ? 562949953421323 : -562949953421332))) ? -1 : (arr_9 [i_0] [i_0]))))));
                                arr_15 [i_0] [i_0] = (arr_11 [i_0] [i_3] [i_2] [i_4] [i_3]);
                                arr_16 [6] [6] [1] [i_3] [6] = (-40 + 15);
                                arr_17 [3] [i_1] [3] [i_1] [i_1] = ((~(~0)));
                                arr_18 [i_0] [i_0] [9] = (((arr_4 [i_3 + 1] [i_3 - 2] [i_3 + 2]) ? ((~(arr_11 [i_3] [i_3 + 1] [i_3 + 2] [i_3 + 1] [i_3 + 1]))) : ((((arr_6 [i_1] [i_3 + 1] [i_3]) || -17)))));
                            }
                        }
                    }
                    arr_19 [i_0] [i_0] [i_2] = 18045;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        {
                            arr_30 [i_5] [i_5] [i_5] [i_8] = ((1 || ((((arr_5 [9] [14]) ? ((min(562949953421331, 462808238))) : (((arr_12 [i_8] [i_7] [i_6] [i_5] [i_5]) ? var_7 : 5847858403970859567)))))));

                            for (int i_9 = 3; i_9 < 14;i_9 += 1)
                            {
                                arr_33 [i_5] [i_6] [i_6] [i_5] [i_9] [i_9] [i_5] = ((((((arr_12 [i_9 - 3] [i_9 - 3] [i_6] [0] [i_6]) ? 18032 : 3))) | (min(65533, 7403564937360434365))));
                                arr_34 [i_5] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((max(562949953421331, 18446744073709551615)));
                            }
                            for (int i_10 = 0; i_10 < 15;i_10 += 1)
                            {
                                arr_38 [5] [i_6] [i_6] [i_5] [i_6] = ((~(arr_26 [i_8] [i_8] [i_8] [i_8])));
                                arr_39 [i_6] [i_6] |= (((((arr_2 [i_5]) ? (arr_2 [i_7]) : 65533)) & (arr_32 [i_5] [i_5] [i_5] [i_6] [i_5] [i_8] [i_10])));
                            }
                            arr_40 [i_6] [i_7] [i_5] [i_6] = (~897520642);
                            arr_41 [i_6] [i_6] [i_7] [i_6] |= (max(4611686018427125760, (max((~16458), ((~(arr_13 [i_5] [i_7] [i_5])))))));
                        }
                    }
                }
                arr_42 [i_5] = (arr_29 [i_5] [i_5] [i_5] [12] [i_5] [i_5]);
                arr_43 [i_6] |= (arr_21 [i_6] [i_6]);
                arr_44 [i_5] [i_6] = ((var_0 ? 3397446681 : ((((arr_6 [i_5] [i_6] [i_6]) ? (arr_6 [i_5] [i_5] [i_5]) : 1)))));
            }
        }
    }
    #pragma endscop
}
