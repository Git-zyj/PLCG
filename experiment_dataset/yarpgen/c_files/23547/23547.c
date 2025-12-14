/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_17 = var_12;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_0] = ((!(!-1)));
                            arr_14 [i_0] [i_2] [i_2] [i_0] = (((((((var_4 / (arr_0 [i_0])))) == (min((arr_3 [i_0]), var_7)))) ? (min((arr_3 [i_0]), (((~(arr_9 [i_0] [i_0] [i_0] [1])))))) : ((((((var_3 ? (arr_10 [i_0] [i_0] [i_2] [i_3]) : (arr_1 [4])))) ? ((((arr_8 [i_0] [1]) || (arr_3 [i_0])))) : ((-1 ? (arr_8 [i_0] [i_0]) : (arr_5 [i_0] [i_3] [i_2]))))))));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_6 [9] [9] [1]);
                            var_18 ^= var_5;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        {
                            arr_23 [i_0] = (min(((var_7 ? (arr_20 [i_0] [i_0] [i_1 - 1]) : (arr_11 [i_0] [i_0] [i_1 + 1] [i_0]))), -54));
                            var_19 = ((((((((arr_9 [i_0] [i_0] [i_0] [i_4]) ? -1013727367 : (arr_1 [i_1]))) + 2147483647)) << (((((~var_6) + 28)) - 26)))));
                        }
                    }
                }
            }
        }
    }
    var_20 = max((~var_9), (690627579 ^ 1));
    var_21 = (max(var_21, var_6));
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 24;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    for (int i_9 = 4; i_9 < 21;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            {
                                arr_39 [i_10] [1] [i_6] [i_6] [i_7] [i_6] = (((arr_28 [i_6] [i_6 - 1] [i_6]) / (arr_28 [i_6] [i_6 + 1] [i_6])));
                                var_22 ^= (((((arr_30 [i_6]) << (((arr_29 [i_6] [i_6 - 1] [i_6 - 1]) - 378294943))))) ? ((-(arr_29 [i_6] [i_6 - 1] [i_6 + 1]))) : (((1 ? 1 : 2147483631))));
                            }
                        }
                    }
                }
                arr_40 [i_6] [i_6] [i_6] = 847980874;
                /* LoopNest 2 */
                for (int i_11 = 2; i_11 < 22;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        {
                            var_23 = ((2651265425 - ((+(min((arr_25 [i_6]), var_4))))));
                            arr_47 [i_6] [i_7] [i_6] [i_6] = (((arr_24 [i_6] [i_6]) > 0));
                            var_24 ^= (((arr_35 [i_6 - 1] [i_6 + 1] [i_7] [i_12] [i_12] [i_12]) ? (arr_35 [i_6] [i_6 + 1] [i_7] [i_7] [i_7] [i_7]) : var_10));
                            var_25 = (max(var_25, ((((((max(var_0, (arr_26 [i_12]))) * (min((arr_43 [i_6] [i_7] [i_7] [i_12]), -1795859493)))))))));
                        }
                    }
                }
                arr_48 [i_6] = (~var_1);
                arr_49 [i_6] [i_6] = ((var_4 == (((((arr_27 [i_6]) == (arr_38 [i_6] [i_6 - 1] [i_6] [i_6 + 1] [i_6] [i_6] [i_6 - 1])))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 22;i_13 += 1)
    {
        for (int i_14 = 1; i_14 < 20;i_14 += 1)
        {
            {
                arr_55 [0] [i_13] [0] |= (~var_12);
                arr_56 [i_13] [i_13] [i_13] = (arr_53 [i_13] [9] [18]);
                arr_57 [i_13] [i_13] [i_13] = (min((arr_54 [i_14]), ((((((((arr_26 [i_13]) && var_14)))) <= (max((-127 - 1), (arr_53 [i_13] [i_14] [i_14]))))))));
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 22;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 22;i_16 += 1)
                    {
                        {
                            var_26 = (max(1, -1478803854));
                            var_27 = arr_50 [i_15];
                            var_28 = (min(var_28, (((+((((arr_29 [i_13] [12] [i_13]) > (arr_38 [i_16] [i_14] [i_16] [i_14] [i_14] [i_14] [23])))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
