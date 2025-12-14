/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_20 = 4294836224;

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        arr_8 [i_2] [i_0] = ((var_1 < (arr_5 [1] [i_2] [1] [i_0])));
                        var_21 *= (~1);
                    }
                    var_22 = (min((arr_3 [i_1]), (var_5 <= var_18)));
                    arr_9 [13] [13] [13] [i_2] |= var_0;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 18;i_5 += 1)
        {
            {

                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    var_23 |= (!var_3);
                    arr_19 [i_4] = var_14;
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 16;i_9 += 1)
                        {
                            {
                                var_24 = (max(var_12, (arr_22 [i_4] [i_5 - 1] [i_5] [i_5 - 2])));
                                var_25 = (arr_13 [i_4] [i_7] [i_4]);
                            }
                        }
                    }
                    arr_27 [i_4] [i_5 + 1] [i_5] = (max(-2210939764499045244, 7));
                }

                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    arr_31 [i_4] [i_5] [i_4] = (((((-(arr_13 [i_4] [i_5 - 2] [i_4])))) - var_17));
                    var_26 *= (min((((-(arr_23 [i_5 - 2] [18] [i_5 - 2] [i_5 - 2])))), 4294836244));
                    var_27 = (var_0 == 142);
                    arr_32 [i_4] [i_5] [i_10] [i_4] = ((~(arr_26 [i_5 - 2] [i_4] [i_10] [i_5 - 1] [i_5 - 2])));
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    arr_35 [i_4] = (((arr_11 [i_4] [i_5]) ^ (~45176)));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 19;i_13 += 1)
                        {
                            {
                                var_28 = var_1;
                                var_29 = 1;
                                arr_41 [i_11] [i_4] [16] = ((-(arr_14 [i_4] [i_4])));
                            }
                        }
                    }
                    arr_42 [5] [i_5] [i_4] = (2417 < 24978);
                }
            }
        }
    }
    var_30 = var_12;
    #pragma endscop
}
