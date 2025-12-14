/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 92;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 19;i_2 += 1)
                {
                    arr_9 [i_1] = 1;
                    var_11 = 1;
                    var_12 = (((((var_0 + 1) ? (((min(var_5, 1)))) : var_9)) == -var_2));
                }
                for (int i_3 = 2; i_3 < 20;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            {
                                arr_20 [6] [i_1] [i_1] [i_4] [i_4] = (((((var_8 ^ var_4) * (var_4 || 122))) | ((((arr_10 [i_3 + 1] [i_1] [i_1] [i_3 - 1]) < (arr_15 [i_3] [i_3 - 2] [20] [i_5] [i_5] [i_5]))))));
                                var_13 = (min(var_13, ((min((((!((((arr_1 [i_1]) ? 1 : (arr_16 [6] [i_1] [i_3] [i_5]))))))), (((arr_15 [i_0] [i_1] [i_5] [7] [i_5] [i_3 + 1]) ? (!var_9) : (min((arr_19 [10] [i_4] [1] [i_1] [i_0]), 9223372036854775807)))))))));
                                var_14 -= 0;
                                var_15 = ((((arr_0 [i_3 - 1] [i_3 - 1]) ? (arr_0 [i_3 - 2] [i_3 + 1]) : -6)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 19;i_7 += 1)
                        {
                            {
                                arr_26 [i_0] [i_1] [i_3 - 2] [4] [1] [i_3 - 2] [i_3 - 2] = 1;
                                var_16 &= 0;
                            }
                        }
                    }
                    var_17 = 1;
                }
                var_18 -= ((min((-93 - 1), (max(var_7, var_6)))));
                /* LoopNest 2 */
                for (int i_8 = 3; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        {
                            var_19 -= ((var_6 < ((((var_1 ? (arr_32 [i_0] [i_0] [i_8] [i_9]) : var_1))))));
                            arr_33 [6] [i_1] [6] [i_1] = (((min(((111 | (arr_24 [i_1] [5] [i_8] [i_9] [i_1] [i_1]))), (arr_7 [i_9] [i_8] [i_1]))) >> (min(((-(arr_31 [0] [i_1]))), 1))));
                            var_20 += (((((1 << (((((~9223372036854775807) - -9223372036854775778)) + 50))))) ? ((-((var_5 ? var_4 : -943663246608052273)))) : ((((arr_18 [i_0] [i_0] [i_0] [i_1] [i_0] [i_9] [i_9]) >> (((arr_18 [i_0] [i_1] [14] [i_8 - 2] [i_9] [i_8] [i_9]) - 18943)))))));
                            arr_34 [i_0] [i_1] [1] [1] [20] [i_1] = (arr_19 [i_9] [3] [12] [3] [0]);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 0;i_11 += 1)
                    {
                        for (int i_12 = 4; i_12 < 19;i_12 += 1)
                        {
                            {
                                arr_43 [4] [11] [i_12] [i_12] [i_1] [i_12] = (arr_36 [i_0] [i_1] [i_1] [i_11]);
                                var_21 |= var_6;
                                var_22 = ((!((((arr_22 [i_1] [i_12] [i_1] [i_1] [i_12 - 2] [i_11 + 1]) ? 3 : (arr_0 [i_12 - 2] [i_11 + 1]))))));
                                arr_44 [i_0] [10] [i_10] [17] [i_1] [i_12] = (((((arr_23 [i_12 + 1] [i_1] [i_1] [i_11 + 1]) ? -8934946755647431473 : var_8)) < ((((var_6 != (arr_24 [i_12] [i_11 + 1] [i_12 + 1] [i_11 + 1] [i_11] [i_11 + 1])))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 21;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 20;i_14 += 1)
                    {
                        {
                            arr_49 [i_1] [i_13] [1] [i_1] = -8476643097666087019;
                            var_23 = ((-((min(var_8, (arr_35 [i_0] [i_1] [i_13] [i_1]))))));
                            arr_50 [i_0] [i_1] [i_13] [i_14] = ((~(((!-6491285747596630461) ? (min(65106, var_9)) : ((min(var_2, (arr_8 [i_1] [i_1] [i_1] [i_1]))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
