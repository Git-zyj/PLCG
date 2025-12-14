/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (-32767 - 1);
    var_13 = (32760 + var_9);

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_14 = (max(var_14, ((min(((var_1 + ((8803309410077823942 / (arr_1 [i_0]))))), ((((((1905664866 ? var_3 : (arr_0 [i_0])))) ? (arr_0 [i_0]) : (arr_2 [i_0] [i_0])))))))));
        var_15 = 32767;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
        {
            arr_11 [i_1] = (((arr_6 [i_2]) ? (arr_1 [i_2]) : var_4));
            arr_12 [i_1] |= (1 & 31415);
            var_16 = (arr_4 [i_2]);
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 9;i_6 += 1)
                    {
                        {
                            var_17 = (((arr_2 [i_3] [i_6 - 1]) ? (arr_2 [i_1] [i_6 + 3]) : (arr_2 [i_6 - 2] [i_6 + 1])));
                            var_18 ^= ((((-1905664867 ? (arr_0 [i_4 - 1]) : 32763))) ? ((-(arr_15 [i_1] [i_1]))) : var_1);
                        }
                    }
                }
            }
            arr_22 [i_1] [i_3] [i_3] = (((arr_4 [i_1]) ? (((arr_17 [i_3] [i_1] [i_1] [i_1] [i_1] [i_1]) ? 32760 : var_4)) : (arr_18 [i_1] [i_3])));
        }
        for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_8 = 2; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 10;i_9 += 1)
                {
                    {
                        var_19 -= ((17765 ? (arr_16 [i_9] [i_7] [i_8] [i_9 + 1]) : 1905664866));
                        var_20 = (~var_6);
                        arr_31 [i_9] [i_7] [i_8 + 1] = var_6;
                    }
                }
            }
            var_21 = (arr_27 [i_1] [i_1] [i_1]);
            var_22 = (max((~var_0), (arr_6 [i_7])));
        }
        var_23 = ((var_6 ? (arr_10 [i_1] [i_1]) : (var_9 <= var_9)));
        var_24 |= (((((arr_6 [i_1]) >= (arr_15 [i_1] [i_1])))));
        var_25 = (max(var_25, (arr_14 [i_1] [i_1])));
        var_26 = (max((arr_7 [i_1]), (min(var_0, var_4))));
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 8;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 12;i_14 += 1)
                        {
                            {
                                var_27 = var_3;
                                var_28 ^= ((((((arr_1 [i_12 + 4]) ? (arr_7 [i_12 + 2]) : (arr_7 [i_12 + 1])))) > ((var_11 << (((((((arr_2 [i_12] [i_13]) + 2147483647)) << (((((arr_7 [i_12 + 2]) + 1183029496)) - 10)))) - 506046240))))));
                                var_29 = (max(var_29, ((((((arr_19 [i_14] [i_14] [i_13] [i_14] [i_13] [i_12 - 1] [i_10]) | (min((arr_40 [i_10]), -32758)))) >= (((arr_18 [i_10] [i_12]) * ((32767 ? -2188 : 3624180338707906829)))))))));
                            }
                        }
                    }
                    var_30 = (((arr_29 [i_11] [i_12] [i_11] [i_11] [i_10] [i_11]) << (((arr_29 [i_10] [i_10] [i_11] [i_11] [i_12] [i_11]) - 2096528646))));
                    var_31 ^= (arr_36 [i_12 + 2]);
                }
            }
        }
    }
    #pragma endscop
}
