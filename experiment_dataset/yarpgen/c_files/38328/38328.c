/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_1 == var_12);
    var_16 = (((-((max(var_10, var_3))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
                    {
                        var_17 ^= (arr_8 [i_3] [1] [10] [10] [4] [i_0]);
                        arr_10 [i_3] [i_1] [5] [i_1] [i_1] [i_0] = ((~(((((arr_1 [2]) >= (arr_7 [i_0] [i_1] [i_2] [i_3] [i_1])))))));
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 3; i_5 < 19;i_5 += 1) /* same iter space */
                        {
                            var_18 = ((((~((min(var_10, (arr_9 [i_1] [14] [i_1])))))) ^ 0));
                            arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_0] [i_4] = (((arr_15 [i_0] [i_1] [i_0] [2] [i_0]) == 1));
                            var_19 ^= (((!(arr_1 [i_0]))));
                            arr_18 [i_5] [i_1] [i_2 + 1] [i_1] [i_0] = (arr_4 [i_1]);
                            var_20 ^= ((-(max((arr_1 [i_0]), (arr_1 [i_0])))));
                        }
                        for (int i_6 = 3; i_6 < 19;i_6 += 1) /* same iter space */
                        {
                            var_21 = (min(var_21, (((-(min((var_0 & var_7), (min(2794629215, 1500257406914517600)))))))));
                            var_22 = (min(var_22, (arr_6 [i_6 - 2] [i_0] [i_1] [i_0])));
                        }
                        for (int i_7 = 3; i_7 < 19;i_7 += 1) /* same iter space */
                        {
                            arr_27 [i_0] [17] [i_2] [i_1] = (arr_20 [i_0]);
                            var_23 = (max(var_23, var_12));
                        }
                        /* vectorizable */
                        for (int i_8 = 3; i_8 < 19;i_8 += 1) /* same iter space */
                        {
                            arr_31 [i_1] = (--1);
                            arr_32 [i_8] [i_1] [i_2 - 2] [i_4] [i_8] = (((-(arr_29 [10] [i_1] [i_2 - 1] [i_4] [i_2 - 1] [i_1]))));
                        }
                        var_24 = (max(var_24, (((-var_2 ? ((((arr_11 [i_4]) >> (((arr_28 [i_0]) - 2842386718043390782))))) : ((((max((arr_13 [i_0] [i_0] [7] [i_0]), var_3)) / -85))))))));
                    }
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            var_25 |= ((-((((arr_14 [i_2 + 1] [i_2] [i_2 - 1] [1] [1]) < var_5)))));
                            var_26 *= -var_14;
                            var_27 = (max(var_27, (((max((arr_12 [i_0] [i_2 + 1] [i_10] [i_10]), (arr_12 [8] [i_2 + 3] [i_10] [i_10])))))));
                        }
                        for (int i_11 = 4; i_11 < 19;i_11 += 1)
                        {
                            var_28 = (max(var_28, 20));
                            var_29 ^= (((((~var_5) ^ (9107659942497571771 < 187))) & ((((((-(arr_13 [i_0] [i_1] [4] [4])))) && (arr_21 [i_2 + 3] [i_2] [i_2 - 1] [i_2 + 3] [i_11 - 1]))))));
                            arr_41 [i_0] [i_0] [i_0] [i_0] [i_1] = var_7;
                            var_30 = (max(var_30, ((((((var_13 * var_0) ? (187 == 29472) : (arr_33 [i_11] [i_2] [i_9] [i_2]))) / var_11)))));
                            arr_42 [i_1] [i_1] [9] = ((-(arr_33 [i_1] [1] [i_2] [i_1])));
                        }
                        var_31 |= ((~(((arr_36 [i_0] [i_0] [i_0] [i_1] [i_2 - 1] [1] [i_9]) * (arr_14 [i_0] [i_1] [2] [i_9] [i_2 - 1])))));
                        arr_43 [i_1] [i_2] [18] [i_1] = (min(((161 ? -15594818273585222837 : 2794629227)), ((min(-8, 3)))));
                        var_32 = (max(var_32, (arr_12 [i_1] [i_1] [i_2 + 2] [i_1])));
                    }
                    for (int i_12 = 2; i_12 < 19;i_12 += 1)
                    {
                        var_33 = (max(var_33, var_9));
                        arr_48 [i_1] = (arr_1 [13]);
                        arr_49 [i_1] [i_1] = (max(32584, -2147483643));
                        arr_50 [18] [i_1] [i_1] [i_1] = (arr_12 [i_0] [i_0] [1] [i_0]);
                    }
                    var_34 = (((arr_7 [2] [i_0] [i_0] [2] [1]) ? (arr_21 [i_2 + 3] [i_2 - 2] [i_2] [i_2 + 2] [i_2 + 2]) : ((max((arr_36 [i_2 - 2] [10] [i_2] [i_2] [i_2] [i_2 - 2] [i_2]), (arr_9 [i_1] [i_2] [i_1]))))));
                }
            }
        }
    }
    #pragma endscop
}
