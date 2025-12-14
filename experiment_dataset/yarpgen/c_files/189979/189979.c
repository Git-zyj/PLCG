/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(1290756293, 4168333417));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_12 = var_0;
                arr_4 [i_0] = ((var_8 ? var_10 : (((!((max((arr_3 [i_1]), (arr_2 [i_0] [i_1] [i_0])))))))));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_13 = (max(var_13, ((min((((((min((arr_5 [i_0 - 1]), (arr_0 [i_2])))) && ((((arr_6 [i_2] [i_1]) >> (((arr_2 [i_0] [i_1] [i_2]) - 45864)))))))), var_6)))));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_14 = (((max(126633883, var_1))));

                        for (int i_4 = 1; i_4 < 7;i_4 += 1) /* same iter space */
                        {
                            var_15 = (min(var_15, ((((arr_11 [i_0 + 1] [i_0 + 1] [i_4 + 1] [i_4] [i_4]) ? ((var_3 ? (arr_11 [i_0 - 1] [i_0 - 3] [i_4 + 2] [i_4 + 2] [i_4 + 3]) : (arr_11 [i_0 - 1] [i_0 - 3] [i_4 + 1] [i_4] [i_4 + 4]))) : (((arr_11 [i_0 - 3] [i_0 - 3] [i_4 + 4] [i_4] [i_4]) ? (arr_11 [i_0 - 2] [i_0 + 1] [i_4 + 3] [2] [i_4]) : (arr_11 [i_0 - 3] [i_0 - 1] [i_4 + 1] [i_0 - 1] [i_4]))))))));
                            var_16 = (min((((var_10 && (!4168333417)))), (max((((var_6 ? var_8 : (arr_13 [i_3] [i_1] [i_2] [i_1] [i_4] [i_1])))), (min((arr_3 [1]), (arr_1 [i_0])))))));
                        }
                        for (int i_5 = 1; i_5 < 7;i_5 += 1) /* same iter space */
                        {
                            var_17 = (max((min((arr_7 [i_0 - 3] [i_5 + 4] [i_0]), (arr_7 [i_0] [i_5 + 4] [i_0]))), (((!(arr_7 [i_0] [i_5 - 1] [i_0]))))));
                            var_18 = (((((var_1 ? var_1 : ((-(arr_2 [i_1] [i_1] [i_0])))))) ? (((arr_1 [i_5 - 1]) ? (((var_8 | (arr_12 [i_0 + 1])))) : (max((arr_3 [i_3]), (arr_8 [i_0 - 3] [i_1] [1] [i_3]))))) : ((-(var_2 + var_4)))));
                            var_19 -= (((126633878 ? -288230376151711744 : -1)) >= ((((arr_10 [i_1] [i_1] [i_5 + 3] [4] [i_0 - 3]) ? var_6 : var_3))));
                        }
                        for (int i_6 = 1; i_6 < 7;i_6 += 1) /* same iter space */
                        {
                            var_20 = (((((((max(var_4, (arr_14 [i_0 - 2] [i_0] [i_0 - 1] [7] [i_0 - 3])))) ? var_1 : (arr_1 [i_0 - 3])))) ? (arr_2 [i_0 + 1] [i_1] [i_0]) : (max((((var_10 ? var_10 : var_10))), (min((arr_17 [i_0 - 2] [i_0 + 1]), (arr_3 [i_0 - 1])))))));
                            var_21 -= (((((var_7 != (arr_1 [i_2]))) ? 32681 : (max((arr_1 [i_0]), var_2)))));
                        }
                        var_22 = ((((((((arr_0 [i_0]) ? var_9 : (arr_6 [i_0] [i_1])))) ? (((arr_13 [i_0 - 3] [i_1] [1] [i_3] [i_1] [i_1]) ? 17086285586375849020 : (arr_7 [4] [i_1] [i_0]))) : var_5)) ^ (arr_16 [i_2] [0] [i_2] [i_3] [i_0] [i_2] [i_3])));
                        var_23 = (((arr_12 [i_0 - 2]) ? ((~(arr_6 [i_0] [i_2]))) : (arr_16 [i_0] [i_0 + 1] [i_0 + 1] [4] [i_0] [i_0 + 1] [5])));
                        arr_18 [i_0] = var_0;
                    }
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        var_24 &= (58 > 4168333417);
                        var_25 = (i_0 % 2 == zero) ? ((min((((((min((arr_17 [i_0 - 2] [i_0 - 2]), var_3)) + 9223372036854775807)) << ((((~(arr_10 [i_0] [i_1] [i_1] [i_1] [i_1]))) - 68)))), (arr_8 [i_0] [i_0] [i_0] [i_7])))) : ((min((((((min((arr_17 [i_0 - 2] [i_0 - 2]), var_3)) + 9223372036854775807)) << ((((((((~(arr_10 [i_0] [i_1] [i_1] [i_1] [i_1]))) - 68)) + 150)) - 15)))), (arr_8 [i_0] [i_0] [i_0] [i_7]))));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            {
                                var_26 = (arr_8 [i_0] [10] [6] [i_8]);
                                var_27 = (arr_8 [i_9] [i_8] [i_2] [i_1]);
                            }
                        }
                    }
                }
                var_28 = (((((((var_9 ? (arr_7 [i_0] [i_1] [i_0]) : (arr_15 [i_0] [i_1] [1] [i_1])))) ? ((min((arr_21 [i_0] [i_0]), var_8))) : (max(126633883, 32144)))) % var_1));
            }
        }
    }
    #pragma endscop
}
