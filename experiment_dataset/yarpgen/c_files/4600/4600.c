/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_19 = ((var_9 ? (arr_3 [i_0] [i_1]) : var_14));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] [9] = ((-((max(-107, (arr_9 [i_1] [i_1] [5] [4] [i_4]))))));
                                var_20 |= (((max(((var_18 ? 13236 : var_13)), (arr_10 [i_0] [i_1] [i_2] [i_3] [i_4]))) + (((arr_8 [i_4 - 4] [i_1] [i_1] [i_3] [11] [i_3]) * var_17))));
                                var_21 = (min((max(var_16, -116)), ((min(-99, var_1)))));
                                var_22 = (max(var_22, (((~(((((arr_13 [i_4] [i_4 - 2] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 - 2] [i_4]) + 2147483647)) >> (var_6 - 6166547695061534591))))))));
                                arr_15 [i_0] [i_1] [11] [i_3] [i_4] = (((max(var_16, 4294967295)) ^ (((((arr_12 [i_0] [i_4 + 1] [i_2]) && (arr_7 [i_4 - 1] [i_1] [11])))))));
                            }
                        }
                    }
                    var_23 = (max((max((arr_5 [i_2]), var_5)), (arr_5 [i_0])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            {
                var_24 = (((((((-(arr_19 [i_5] [i_5] [i_6])))) ? var_14 : (var_17 | 109))) | ((-(min((arr_20 [i_5] [i_5]), var_16))))));
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            {
                                var_25 = (min(var_5, var_5));
                                var_26 = var_3;
                            }
                        }
                    }
                }
                var_27 = (min(var_27, ((((((var_3 | (var_17 || 11583028744069563711)))) ? -var_7 : (11583028744069563712 < 5111484123702374674))))));
                var_28 = (max(var_28, ((max(-18732, (min(var_12, (!var_11))))))));
            }
        }
    }
    var_29 |= var_1;
    var_30 = ((var_16 ? var_1 : ((-var_14 ? ((min(var_17, var_9))) : ((var_13 ? var_1 : var_7))))));
    #pragma endscop
}
