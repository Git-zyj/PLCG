/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((-21 ? 1 : (0 - 1490404541))));
    var_17 |= (min(((-((var_13 ? var_11 : var_3)))), (-105 == -2000086993)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = (~(arr_9 [i_1 + 2] [i_1 + 2]));
                    var_19 = ((-var_11 ? ((max(16762, (!-32757)))) : (arr_4 [i_0] [i_1] [i_0])));
                }
            }
        }
    }
    var_20 *= (((((((max(-2000086993, -2000086968))) ? var_11 : ((max(var_7, var_1)))))) == var_5));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            {

                for (int i_5 = 1; i_5 < 12;i_5 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 12;i_6 += 1)
                    {
                        arr_19 [i_3] [i_3] [i_3] [i_6] [i_6] = (arr_4 [i_5 + 1] [17] [4]);
                        var_21 = (min(var_21, var_4));
                        arr_20 [i_3] [i_6] [i_4] [i_5 + 1] [2] = (var_12 == -var_7);
                    }

                    for (int i_7 = 4; i_7 < 11;i_7 += 1) /* same iter space */
                    {
                        arr_24 [i_3] [1] [4] = ((((((arr_0 [i_4 + 1]) || ((min(var_5, var_12))))))) & (((arr_14 [i_7 + 1] [i_4]) ? 74 : var_3)));
                        var_22 ^= ((((max(656815292, 33741))) ? (arr_1 [i_4]) : (((+(((arr_5 [i_3] [i_5 - 1] [i_7]) ? var_6 : var_11)))))));
                        var_23 = (min(var_23, (arr_18 [i_5 - 1] [i_5 - 1] [i_5])));
                    }
                    for (int i_8 = 4; i_8 < 11;i_8 += 1) /* same iter space */
                    {
                        var_24 = (max(var_24, (((~(((var_5 <= (arr_17 [i_3])))))))));
                        var_25 = (((((~var_7) + 2147483647)) << (((((((arr_11 [i_4]) ? (arr_10 [1]) : (arr_7 [i_3] [11] [i_8]))))) - 49))));
                        arr_28 [i_8] [i_5 - 1] [i_5 - 1] [i_3] [i_3] = (((((((((arr_11 [3]) ? var_13 : var_7))) ? (arr_25 [i_8 + 1] [i_5 + 1] [i_8 + 1] [i_4 + 1]) : (arr_12 [i_8 - 4] [i_4 + 1] [i_5 - 1])))) ? (((min(var_8, (arr_7 [i_5 - 1] [i_4 + 1] [11]))) | (((~(arr_15 [i_5 - 1] [i_5 - 1] [i_3])))))) : (arr_9 [i_8] [i_5 + 1])));
                        var_26 = var_5;
                    }
                    for (int i_9 = 4; i_9 < 11;i_9 += 1) /* same iter space */
                    {
                        var_27 = (max(var_27, (((+(((arr_32 [i_3] [i_3] [i_4 + 1] [i_4] [i_5] [i_9]) ? 2147483647 : 31794)))))));
                        var_28 = ((((-656815293 ? -5149350125152572486 : 1530650415)) == (((((var_2 ? var_14 : var_8))) ? (var_14 / 2147483647) : (31794 / 2602206945725463424)))));
                        arr_33 [7] [i_4] [i_5] [i_9 - 4] = ((((min((max(var_10, var_10)), (arr_30 [i_9] [i_5 - 1] [9] [9])))) ? (((-(!var_1)))) : (((((var_3 << (65535 - 65517)))) ^ (arr_29 [i_3] [9] [10] [i_9 - 1])))));
                        var_29 = (32747 ^ 166);
                    }
                }
                for (int i_10 = 1; i_10 < 12;i_10 += 1) /* same iter space */
                {
                    var_30 = (max(var_30, var_5));
                    arr_36 [i_10] [i_4 + 1] [i_4 + 1] [i_3] = (min(2147483647, (min((arr_3 [i_3]), (max(255, (arr_12 [i_3] [i_3] [i_3])))))));
                }
                arr_37 [i_3] [i_3] = (min((arr_11 [i_4 + 1]), (arr_11 [i_4 + 1])));
                var_31 &= ((~((max((arr_30 [i_3] [i_3] [i_3] [i_3]), var_10)))));
            }
        }
    }
    #pragma endscop
}
