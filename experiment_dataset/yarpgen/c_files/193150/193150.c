/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_10 = ((((((min((arr_8 [i_0] [i_1] [i_2] [i_1]), (arr_5 [i_1])))) * (min(var_5, var_7))))) ? (arr_2 [i_3]) : (((((var_1 ? var_5 : (arr_0 [i_0])))) & ((var_4 ? var_0 : (arr_7 [i_0] [i_0] [i_3]))))));
                            var_11 = (max(var_11, ((min((arr_7 [i_1] [i_2] [i_3]), (arr_4 [1]))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_12 = (min((((arr_18 [i_0] [i_1] [i_4] [i_4] [i_4] [i_6] [i_6]) ? (var_4 * var_1) : (arr_15 [1] [6] [i_4] [i_5]))), (min(var_8, (arr_7 [i_0] [i_5] [i_5])))));
                                arr_21 [i_0] [i_4] [i_1] [i_6] = (min(1, 2147483647));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 0;i_9 += 1)
                        {
                            {
                                var_13 |= (min((((var_7 ? var_5 : var_6))), ((((arr_26 [i_9] [i_9] [i_9] [i_9] [i_9 + 1]) + (arr_26 [i_9 + 1] [i_9 + 1] [i_9] [i_9] [i_9 + 1]))))));
                                var_14 = (min(var_14, (min((((arr_7 [i_9 + 1] [i_9 + 1] [i_9 + 1]) << (((arr_19 [i_1] [i_9 + 1] [i_9 + 1] [i_9] [i_9 + 1]) - 46639)))), (((~(arr_2 [i_9 + 1]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 4; i_10 < 21;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 24;i_11 += 1)
        {
            {
                var_15 = (min(var_15, var_4));
                /* LoopNest 2 */
                for (int i_12 = 2; i_12 < 23;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 23;i_13 += 1)
                    {
                        {
                            var_16 = (max(((((arr_35 [i_10] [i_10] [i_10]) ? (arr_30 [i_10] [i_10]) : (((arr_30 [i_10] [i_12]) ? var_0 : (arr_28 [i_10 + 2] [i_10 + 2])))))), ((((((arr_34 [i_10] [i_10] [i_12] [i_13]) ? var_0 : var_9))) ? ((min((arr_34 [i_10] [i_11] [i_12] [20]), var_2))) : var_7))));
                            arr_38 [i_11] [i_11] [i_10] = ((((max((arr_33 [i_10 + 3] [i_11] [i_12 - 1]), var_1))) ? ((((var_0 > ((var_5 ? var_4 : var_0)))))) : ((((((arr_31 [i_11] [i_11]) ? var_2 : (arr_34 [i_10] [i_10] [21] [21])))) ? (!var_0) : var_5))));
                            var_17 = ((var_9 <= ((var_4 + (((arr_32 [i_10]) ? (arr_30 [i_10] [i_12]) : (arr_35 [i_10] [1] [i_13 - 2])))))));
                        }
                    }
                }
                arr_39 [i_10] [i_10] [i_10] = (((var_5 ? (((3717451259 ? 3717451253 : 197)) : (max(var_4, (arr_29 [i_10 - 1] [i_11])))))));
                /* LoopNest 3 */
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 24;i_15 += 1)
                    {
                        for (int i_16 = 3; i_16 < 20;i_16 += 1)
                        {
                            {
                                var_18 ^= (((((arr_46 [22] [i_10] [i_10 + 1] [22] [16] [i_11] [i_16 + 3]) && (arr_46 [i_10] [i_10] [i_10 + 2] [i_10] [22] [18] [i_16 + 3]))) ? (((arr_46 [i_10] [6] [i_10 + 1] [i_10] [6] [8] [i_16 + 3]) ? (arr_46 [i_10] [i_10] [i_10 + 3] [18] [1] [i_14] [i_16 - 3]) : (arr_46 [i_10 - 3] [i_10] [i_10 - 2] [i_10] [8] [i_11] [i_16 - 1]))) : (((((arr_46 [i_10] [i_10] [i_10 - 4] [i_10] [12] [i_15] [i_16 + 2]) || (arr_46 [i_10] [i_10] [i_10 - 1] [i_10] [1] [i_10 - 1] [i_16 + 3])))))));
                                arr_47 [i_10] [i_11] [i_14] [i_10] [i_16] = (((arr_37 [i_10 - 1] [i_10 + 1] [i_16 + 4] [i_16 + 3]) ? (max((arr_41 [i_10] [8] [8] [i_15]), ((var_0 ? (arr_37 [i_10] [i_11] [i_14] [i_11]) : var_3)))) : var_6));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
