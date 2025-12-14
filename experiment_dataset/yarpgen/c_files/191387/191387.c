/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = 1;

        /* vectorizable */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            arr_6 [i_1] = (arr_3 [i_1 - 1] [14] [i_0]);
            var_15 = ((0 < (arr_5 [i_0] [i_0] [i_0])));
            var_16 += (((arr_0 [i_1] [i_1 - 2]) > (arr_0 [i_1] [i_1 - 2])));
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_17 = 15;
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        var_18 |= (((~(arr_3 [i_3 + 1] [i_4] [i_4]))));
                        var_19 = (min(var_19, (((((((~var_8) ? 15 : 4471152642621882681))) ? ((((arr_11 [i_0] [i_0] [10] [i_3] [i_4] [i_0]) && (arr_10 [i_4] [7] [i_2] [i_0])))) : (((((arr_1 [i_3 - 1]) >= (arr_12 [i_4]))) ? (3895 < 255) : (arr_5 [i_0] [i_0] [i_3 + 3]))))))));
                        var_20 ^= (arr_1 [i_3 + 1]);
                        arr_13 [i_2] = ((((~(arr_11 [i_3 + 1] [i_3] [i_3] [i_3] [i_3] [i_4]))) - (((arr_11 [i_3 + 3] [i_4] [i_4] [i_4] [i_4] [i_4]) ? (arr_11 [i_3 + 1] [i_3 + 1] [13] [i_3 + 1] [10] [i_4]) : (arr_11 [i_3 - 1] [i_3] [i_4] [i_4] [i_4] [i_4])))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            var_21 = (max(var_21, 21056));
            arr_17 [i_0] [i_5] = (arr_11 [i_0] [i_5] [i_5] [i_0] [4] [4]);
        }
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                arr_23 [i_6] [i_6] [i_6] [i_6] = (arr_7 [14] [i_7]);
                arr_24 [i_6] [i_6] [i_0] = (99 || 1);

                for (int i_8 = 2; i_8 < 14;i_8 += 1)
                {
                    var_22 = (min(var_22, (((((-(arr_11 [i_8 - 1] [i_8 - 2] [i_8 - 2] [i_8 - 1] [i_8 - 1] [i_8 - 1]))) < (arr_11 [i_8 - 2] [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_8 - 2] [i_8 - 2]))))));
                    var_23 = ((~(arr_5 [i_0] [i_6] [i_8])));
                }
            }
            arr_27 [i_6] = (arr_9 [i_0] [i_6]);

            /* vectorizable */
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                var_24 -= (arr_29 [i_0]);
                arr_31 [i_6] [14] = 141;
                var_25 -= -var_2;
            }
            var_26 = ((~(((arr_12 [i_0]) ? (arr_8 [i_6] [1] [i_0]) : (arr_7 [6] [1])))));
        }
    }
    for (int i_10 = 1; i_10 < 18;i_10 += 1)
    {
        arr_35 [i_10] [11] = (arr_34 [i_10 + 1] [i_10]);
        var_27 += (arr_34 [i_10 - 1] [i_10 - 1]);
    }
    var_28 = var_5;
    #pragma endscop
}
