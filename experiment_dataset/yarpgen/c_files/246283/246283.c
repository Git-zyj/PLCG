/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_12 -= ((var_9 >> (((~var_3) + 14142))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_3] [i_0] = 0;
                        arr_14 [i_0] [i_1] [i_3] [i_3] = (min((((((-9223372036854775807 - 1) ? 99 : -5434505243670615125)))), ((((14485471619213300239 ? (arr_11 [i_0] [i_2 + 1] [i_3]) : var_0)) / ((max(-5434505243670615125, -1198165693)))))));
                    }
                }
            }
        }
        var_13 = (((((1145736824 ? (max(var_5, var_11)) : var_2))) ? 14757783314736681462 : (max((~-1198165693), 27038))));
        arr_15 [22] = (min((((((((-9223372036854775807 - 1) ? var_11 : var_10))) > 14757783314736681458))), var_1));
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
    {
        arr_18 [i_4] [i_4] = (((var_11 ? (arr_0 [i_4]) : 27038)));
        arr_19 [i_4] = (((((((arr_1 [i_4]) ? var_2 : 14757783314736681458))) ? var_0 : ((((arr_9 [i_4]) * var_8))))));
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
    {
        var_14 += (~-1237411801);
        arr_22 [i_5] [i_5] = 40890;
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
    {
        var_15 ^= 65531;

        /* vectorizable */
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            var_16 = -194;
            var_17 = 19971;
            var_18 = (min(var_18, (!-27038)));
        }
        /* vectorizable */
        for (int i_8 = 3; i_8 < 17;i_8 += 1)
        {
            var_19 = (-9223372036854775784 && 27026);
            arr_30 [i_6] [i_8] = ((-((2703782810479136578 ? -2572515988821824148 : (arr_16 [i_8] [i_6])))));
            var_20 = (min(var_20, 93));
        }
        arr_31 [i_6] = ((-((-(((arr_29 [i_6] [i_6]) + 1))))));
        var_21 = 18234035777579875394;
        var_22 = (min(var_22, ((((min((arr_5 [i_6] [i_6] [i_6]), (arr_27 [i_6] [i_6] [7]))) | (((!(arr_5 [i_6] [i_6] [0])))))))));
    }
    /* LoopNest 3 */
    for (int i_9 = 1; i_9 < 1;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 24;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 25;i_13 += 1)
                        {
                            {
                                arr_46 [i_9] [i_9] [i_10] [i_10] = ((((min(var_9, var_5))) >= (var_11 / var_0)));
                                var_23 = (((max(59, 29482))));
                                var_24 -= (((((((-1491926519 ? -1237411801 : -32757))) ? ((min((arr_40 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]), var_11))) : (arr_38 [i_13] [i_13] [i_10])))) ? ((((max(var_7, (arr_4 [i_12] [i_12] [i_9]))) * 54528))) : ((-var_2 ? (arr_32 [i_9 - 1]) : (min((arr_39 [i_11] [i_12]), (arr_11 [i_9 - 1] [i_9] [i_9]))))));
                            }
                        }
                    }
                    var_25 = ((((max((arr_45 [i_9] [i_9 - 1] [i_9 - 1] [i_10] [i_9 - 1]), (arr_45 [i_9] [i_9 - 1] [i_9 - 1] [i_10] [i_9 - 1])))) ? (((var_4 ? (arr_45 [i_9] [i_9 - 1] [i_9 - 1] [i_10] [i_9 - 1]) : 27038))) : (((arr_45 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_10] [i_9 - 1]) + (-9223372036854775807 - 1)))));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 25;i_15 += 1)
                        {
                            {
                                var_26 += (-9223372036854775807 - 1);
                                var_27 = ((!((((arr_47 [i_9 - 1] [i_9] [i_9] [i_10]) ? 0 : var_8)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
