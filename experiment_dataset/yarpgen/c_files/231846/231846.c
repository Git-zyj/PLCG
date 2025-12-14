/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        arr_3 [i_0] [i_0] |= ((!(arr_1 [i_0])));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_7 [i_0] [1] [i_0] = arr_1 [i_1];
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        {
                            arr_16 [i_0] [i_0] [2] [i_2] = ((!(arr_0 [i_0])));
                            arr_17 [i_0] [i_0] [i_2] [i_0] [12] = (!33554431);
                            arr_18 [i_2] [i_3 - 3] [i_2] [i_2] [i_1] [2] [i_2] = arr_9 [i_0] [i_2];
                        }
                    }
                }
            }

            for (int i_5 = 3; i_5 < 14;i_5 += 1)
            {
                arr_22 [i_0] [i_5] = (arr_4 [i_0] [i_1] [i_5 - 2]);
                arr_23 [1] = (arr_20 [i_5] [i_1] [i_5 + 1]);
            }
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                arr_27 [i_6] = ((~((~(arr_4 [i_1] [i_1] [i_1])))));
                arr_28 [8] [8] [i_1] [8] |= (arr_5 [i_0] [i_1] [i_6]);
                arr_29 [i_6] [i_0] = (-(arr_24 [1] [i_1] [i_1]));
                arr_30 [4] = (arr_26 [i_6] [14] [i_0]);
                arr_31 [8] [8] [i_6] [i_6] &= ((!(arr_4 [1] [i_1] [i_6])));
            }
            /* LoopNest 2 */
            for (int i_7 = 4; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 14;i_8 += 1)
                {
                    {
                        arr_37 [i_8] [i_1] = (arr_12 [i_8] [i_1] [i_7] [i_8] [i_1] [i_7 + 2]);
                        arr_38 [i_0] [0] [8] [i_7] |= (arr_13 [i_0] [i_7] [6] [i_7] [i_8]);
                        arr_39 [i_8] = arr_21 [i_0] [i_0] [i_0] [i_0];
                    }
                }
            }
            arr_40 [i_0] [i_0] [1] = ((~(arr_5 [i_0] [11] [5])));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            arr_43 [i_0] [i_0] [3] = ((-(arr_4 [i_9] [i_0] [7])));
            arr_44 [i_0] [i_0] [7] = (arr_36 [i_0] [i_9] [i_9] [i_9] [1]);
        }
        arr_45 [i_0] = ((!((!(arr_21 [i_0] [i_0] [12] [i_0])))));

        /* vectorizable */
        for (int i_10 = 1; i_10 < 13;i_10 += 1)
        {
            arr_49 [i_0] [i_0] = ((~((~(arr_6 [i_0] [i_10] [i_10])))));
            arr_50 [1] [i_10] = (arr_21 [i_0] [i_0] [i_10] [i_0]);
        }
    }
    var_10 = -var_0;
    var_11 = var_8;
    var_12 = (!var_7);
    #pragma endscop
}
