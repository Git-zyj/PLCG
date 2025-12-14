/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-var_10 ? ((((-38 && -36) ? 36 : -38))) : var_4));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_11 [0] [i_1] [i_0] [10] = ((((((((-(arr_0 [2])))) ? (((!(arr_8 [i_0] [i_0])))) : (arr_1 [i_0 - 1])))) - ((0 ? (arr_7 [4] [i_0 + 1] [i_0 - 1] [i_2 - 1]) : (38 & 2305843009213562880)))));

                            for (int i_4 = 0; i_4 < 20;i_4 += 1)
                            {
                                arr_14 [13] [i_0] [i_0] [i_0] = max((max(165, (((arr_12 [i_0] [i_1] [i_0] [2]) ? 370096487 : 133)))), 1879048192);
                                arr_15 [i_0 - 1] [i_1] [14] [i_0 - 1] [i_0 - 1] [i_0] [i_1] = ((((max(var_2, (arr_12 [i_0 - 1] [i_1] [i_0] [i_2 - 1])))) ? (((arr_12 [i_0 - 2] [1] [i_0] [i_2 - 1]) + (arr_12 [i_0 - 2] [17] [i_0] [i_2 - 1]))) : (arr_12 [i_0 + 1] [i_1] [i_0] [i_2 - 1])));
                                arr_16 [13] [i_0] = (min(36, (min(var_6, ((-1330 ? -38 : 1487608681))))));
                                var_18 = ((((1368770377 != (arr_9 [i_0] [i_2 - 1])))));
                            }
                            /* vectorizable */
                            for (int i_5 = 1; i_5 < 19;i_5 += 1)
                            {
                                var_19 = (((((2807358615 ? 23 : var_2))) ? (((((arr_19 [i_5 + 1] [i_2 - 1] [i_1] [i_2 - 1] [i_1] [i_0]) <= 0)))) : (arr_9 [i_0] [i_0])));
                                var_20 = 1487608681;
                                var_21 *= 38;
                            }
                            for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
                            {
                                var_22 &= var_11;
                                var_23 = (max((693373851 ^ 36), ((((max(1, 116))) ? -25 : -2065333669))));
                            }
                            for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
                            {
                                var_24 = (((arr_13 [7] [i_3] [i_2] [i_1] [i_0 + 1] [i_0 + 1]) ? (((450924108128376815 ? 544328307 : (min(var_13, (arr_5 [i_7 - 1] [i_7 - 1] [i_7 - 1])))))) : (arr_3 [i_0])));
                                var_25 = (max((arr_9 [i_0] [i_0]), (((((1 ? var_15 : (arr_0 [i_0 - 3])))) ? (arr_6 [i_0]) : var_13))));
                                var_26 = 35046933135360;
                            }
                            var_27 = 1879048162;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 18;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        {
                            var_28 = (arr_22 [i_0 + 1] [i_1] [i_1] [i_9 - 1] [i_9 - 1]);
                            var_29 = (!17592181850112);
                            var_30 += (arr_7 [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 3]);
                            var_31 = (arr_6 [i_0]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
