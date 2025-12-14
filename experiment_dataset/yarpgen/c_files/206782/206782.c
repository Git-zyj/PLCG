/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_9 & (max((((var_6 ? var_8 : var_4))), var_12))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_16 = (min(var_16, (((3290372466 ? 9091 : 21)))));
                            var_17 = ((~(arr_9 [i_1] [i_2] [i_2 - 1] [i_3 - 1] [i_3 - 1] [i_3 + 1])));
                            var_18 = ((((((arr_3 [i_0] [i_1 - 1] [i_2]) >> (((arr_3 [i_0] [i_1 - 1] [i_2]) - 5601))))) ? ((~(arr_3 [i_0] [i_1 - 1] [i_2]))) : ((max((arr_3 [i_0] [i_1 - 1] [5]), (arr_3 [i_0] [i_1 - 1] [i_2]))))));
                            arr_10 [i_0] [i_1] = var_7;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_19 = (max(var_19, ((min(((var_1 ? var_8 : var_4)), ((min(var_1, (arr_3 [i_0] [i_1 + 2] [i_4])))))))));
                                var_20 = (((20 ? 40 : 32763)));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 1; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 19;i_9 += 1)
                        {
                            {
                                var_21 = var_2;
                                var_22 ^= ((var_6 || ((((arr_8 [i_1] [i_9 - 2] [i_9] [i_9] [1] [1]) ? (arr_8 [i_1] [i_9 - 2] [i_9] [1] [i_9 - 1] [i_9]) : var_10)))));
                                var_23 = ((((arr_0 [i_9 - 1]) ^ var_12)));
                                arr_25 [i_8] = var_12;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 3; i_10 < 19;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 18;i_11 += 1)
                    {
                        {
                            arr_31 [i_0] [i_1] [i_1] = var_10;
                            arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((((arr_1 [i_0]) ? var_11 : var_1)) < (arr_24 [11] [i_1 - 2] [i_1] [i_11 + 1]))) ? ((~(arr_12 [i_10] [i_1] [i_0]))) : ((((!var_9) ? (max((arr_8 [i_0] [i_0] [i_10] [i_11] [i_0] [i_0]), var_1)) : (min((arr_5 [i_11 + 2] [i_11 + 2] [1]), (arr_2 [i_0] [15])))))));
                        }
                    }
                }
                arr_33 [i_1] [i_0] = ((0 == 111) ? (arr_24 [i_0] [i_1 - 4] [i_0] [i_1]) : -var_10);
            }
        }
    }
    var_24 = var_12;
    var_25 -= (max((((((max(var_14, var_0))) ? -var_11 : var_13))), var_12));
    /* LoopNest 2 */
    for (int i_12 = 2; i_12 < 21;i_12 += 1)
    {
        for (int i_13 = 3; i_13 < 21;i_13 += 1)
        {
            {
                arr_40 [i_13] [i_13] = ((~((var_12 | (~var_10)))));
                /* LoopNest 2 */
                for (int i_14 = 3; i_14 < 20;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 23;i_15 += 1)
                    {
                        {
                            var_26 ^= (!-1685701229);
                            var_27 = ((((!((!(arr_34 [i_13 + 2]))))) ? var_2 : (!var_7)));
                            var_28 = (!(((arr_43 [i_14 + 1] [i_13] [i_13 - 1] [i_13] [11]) < (arr_43 [i_14 + 3] [i_13] [i_12] [i_13] [i_12]))));
                            var_29 |= ((!(((56464 >> (111 - 90))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
