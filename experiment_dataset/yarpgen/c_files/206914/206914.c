/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    var_11 ^= (((~11939636205717073715) < var_3));
                    var_12 = (-((-2147483642 - (((arr_3 [i_0]) * var_10)))));
                }
            }
        }
    }
    var_13 = (min(var_13, var_2));
    var_14 ^= var_5;
    var_15 = (min((((~1) ? 65522 : var_10)), var_10));
    /* LoopNest 2 */
    for (int i_3 = 4; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 22;i_4 += 1)
        {
            {
                var_16 *= ((~(max((min((arr_9 [i_4 - 2] [i_4 - 2] [i_3 + 2] [i_3 + 2]), 2147483647)), (~var_10)))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        {

                            for (int i_7 = 0; i_7 < 24;i_7 += 1)
                            {
                                var_17 = (min(var_17, (((arr_9 [i_4 + 1] [i_4 + 1] [i_4 - 2] [i_4]) ? ((~(arr_15 [i_4 - 2] [i_4 - 3]))) : (arr_15 [i_4 + 1] [i_4 + 1])))));
                                arr_21 [i_7] [i_6] [i_5] [i_4] [i_7] |= ((~(arr_2 [i_7])));
                                var_18 |= (arr_19 [i_3] [4] [4] [i_3] [4] [i_7] [14]);
                                var_19 ^= 65527;
                            }
                            for (int i_8 = 2; i_8 < 20;i_8 += 1)
                            {
                                arr_24 [i_4] [i_3] = (~(((~11191398061552337353) ? 24 : (max(187, (arr_5 [i_3] [i_6] [i_3]))))));
                                arr_25 [i_3] [i_3] [i_3] [i_3] [i_3] = ((~(54 | var_2)));
                            }
                            /* vectorizable */
                            for (int i_9 = 0; i_9 < 24;i_9 += 1)
                            {
                                var_20 = (min(var_20, (((arr_29 [i_4 + 1]) || 1))));
                                arr_30 [i_6] [i_3] [1] [i_6] [i_9] = (arr_23 [i_3 - 2] [i_3 - 2] [9] [i_3 + 1] [i_3 + 1]);
                                arr_31 [8] [i_4 + 1] [i_6] [i_3] = 0;
                            }
                            for (int i_10 = 0; i_10 < 24;i_10 += 1)
                            {
                                arr_35 [i_3] [i_4 - 1] [i_3] [i_6] [5] = 119;
                                arr_36 [i_10] [i_3] [14] [i_5] [i_5] [i_3] [5] = (((87 ? (((-7609 && (arr_20 [i_3])))) : (((!(arr_34 [i_3 + 2])))))));
                                var_21 ^= (((((~(max((arr_7 [i_3] [i_4 - 1] [i_5]), 65525))))) ? ((((~(arr_4 [i_5]))))) : (((((~(arr_6 [i_3 - 4] [i_4] [i_4])))) ? (~var_5) : (arr_8 [i_3 - 1] [i_3 - 1] [i_3 - 2] [i_10])))));
                                arr_37 [i_3] [13] [i_4 - 3] [i_3] [i_6] [i_10] = (arr_16 [i_3] [i_3] [i_3] [i_4 - 2]);
                            }

                            for (int i_11 = 0; i_11 < 24;i_11 += 1)
                            {
                                var_22 = (min(var_22, (arr_0 [i_3] [9])));
                                var_23 ^= 17741;
                            }
                            for (int i_12 = 2; i_12 < 21;i_12 += 1)
                            {
                                arr_42 [8] [i_3] [8] = (-1 || var_10);
                                var_24 = (min(var_24, ((((~var_0) <= (arr_2 [i_6]))))));
                                var_25 = ((~(arr_23 [i_4 - 2] [i_6] [i_5] [i_4 - 2] [12])));
                            }
                            for (int i_13 = 0; i_13 < 24;i_13 += 1)
                            {
                                arr_45 [i_3] = var_6;
                                arr_46 [4] [i_4] [i_5] [22] [22] [i_3] = (~28);
                                arr_47 [i_13] [i_3] [19] [i_5] [19] [i_3] [19] = ((~(((var_8 && (arr_14 [i_3 - 2] [i_4] [i_4 + 2] [i_4 + 1]))))));
                                arr_48 [i_3] [4] [i_5] [4] [i_3] = (((((max(7632, (arr_18 [i_4] [i_3]))))) ? (~var_1) : (~2417284429)));
                            }
                            var_26 = (min(var_26, (~var_7)));
                        }
                    }
                }
                arr_49 [16] [i_4] [i_3] = ((~((~(arr_3 [i_3])))));
            }
        }
    }
    #pragma endscop
}
