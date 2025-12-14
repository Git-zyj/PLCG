/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_3 - ((27495 >> (((var_13 - var_12) - 3928972391))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    arr_9 [i_0 + 4] [i_1] [i_1] = (arr_2 [i_0] [i_0 + 3] [i_0]);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_14 [i_0] [i_3] [i_2] [i_0] [i_3] [i_2 + 1] &= (~158);
                        var_16 = (max(var_16, ((((arr_10 [i_0] [i_0 + 3] [i_1 - 2] [i_2 + 1]) < var_3)))));
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 10;i_4 += 1) /* same iter space */
                    {
                        var_17 = (((arr_6 [i_0] [i_1]) >> (var_5 - 121)));
                        var_18 = (min(var_18, ((((arr_6 [8] [8]) ? var_1 : 255)))));
                    }
                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 10;i_5 += 1) /* same iter space */
                    {
                        var_19 ^= var_10;
                        var_20 = (((arr_13 [2] [i_1] [i_2 + 1] [i_5 + 2] [i_0 + 4] [i_5]) >> (var_6 - 3514293405)));
                    }
                }
                for (int i_6 = 2; i_6 < 9;i_6 += 1)
                {
                    arr_25 [i_1] [i_0 + 1] [i_1] = arr_19 [i_0] [i_0] [10] [i_6 + 1];

                    for (int i_7 = 2; i_7 < 8;i_7 += 1)
                    {
                        arr_29 [8] &= (((arr_7 [i_0] [4] [i_0] [i_7]) <= (min((arr_24 [i_0] [i_0] [i_0 + 3] [4]), (arr_18 [i_0 + 2] [i_0 + 2] [6] [i_0 + 2])))));
                        var_21 = (((arr_19 [i_0] [i_0] [i_0] [i_0 - 1]) ? (((!(arr_21 [i_1])))) : ((((arr_24 [i_0] [i_0 + 3] [i_0 + 1] [i_1]) <= (arr_22 [i_6] [7] [i_6] [i_1]))))));
                        var_22 = (max(var_22, ((max((((arr_18 [i_7 - 2] [i_1 - 1] [0] [i_6 - 1]) ? (!97) : (arr_8 [i_7 + 4] [i_0 + 1]))), ((((arr_5 [i_1 - 2] [i_1] [i_6 + 1]) >= 3))))))));
                        var_23 = (max(var_23, ((((((var_3 ? (var_10 - var_9) : ((191 ? var_13 : var_6))))) ? 236 : (((((((arr_20 [i_6 - 2] [i_6] [i_6] [i_6] [2] [i_6]) ? 236 : (arr_19 [i_0] [i_1] [i_6 - 1] [i_7 - 1])))) && (arr_28 [i_0] [i_0] [i_1] [i_1] [i_0] [i_0])))))))));
                    }
                    arr_30 [i_0] [i_1] [9] = (max((max((min((arr_18 [i_1] [i_1] [i_1] [6]), (arr_22 [i_0] [i_1] [i_1] [i_1]))), (arr_3 [i_0 - 1] [i_1]))), (((3 ? 191 : 62)))));
                }
                for (int i_8 = 1; i_8 < 11;i_8 += 1)
                {
                    var_24 = (max(var_24, (((((((-734 + 2147483647) >> 3))) ? ((var_2 + (arr_21 [0]))) : (((0 && (arr_21 [8])))))))));
                    var_25 += (min(((((arr_0 [i_0 + 1]) ? 77 : var_4))), ((var_0 ? var_6 : (arr_8 [i_8 - 1] [i_0 + 1])))));
                    arr_33 [i_0] [0] [10] |= (min(((~(arr_19 [i_0] [i_1 - 1] [i_1 + 1] [i_1]))), ((min(-1368, (!var_5))))));
                }
                arr_34 [i_0] [i_1] [i_0 + 4] = ((((((((arr_2 [i_0] [i_0] [i_0]) ? var_6 : 65)) >= (arr_21 [i_1])))) ^ var_5));
                var_26 -= min(var_6, (((((max((arr_0 [i_1]), var_1)))) ^ ((12658 ? 3730405515 : 28)))));

                for (int i_9 = 3; i_9 < 10;i_9 += 1)
                {
                    var_27 = ((((((arr_21 [i_1]) < var_6))) | 54));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 11;i_11 += 1)
                        {
                            {
                                arr_42 [i_0] [i_10] &= (+(((arr_3 [i_9 - 2] [i_10]) - var_10)));
                                var_28 = (((((var_7 ? (max((arr_31 [i_0] [i_1 + 1] [i_9]), (arr_11 [i_1]))) : ((var_5 ? var_11 : (arr_20 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0])))))) ? var_2 : (78 != -var_7)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
