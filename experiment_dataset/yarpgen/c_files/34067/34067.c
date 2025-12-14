/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= (((((var_5 ? var_10 : var_7))) % ((~(var_0 || var_8)))));
    var_12 = ((-(-7758325847927120706 && 123)));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_13 = ((~var_6) >> ((((((arr_2 [i_0] [i_0]) && var_3)) || (arr_1 [i_0 - 2] [i_0])))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                var_14 = ((-(!var_8)));
                var_15 = (min(var_15, (arr_7 [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_0])));
                arr_9 [1] [i_1] [i_2] [i_1] |= ((((var_9 ? var_2 : var_1)) - (arr_8 [i_2])));
                var_16 = (arr_4 [i_0 + 1] [i_0 + 1]);
            }
            var_17 = var_6;
            arr_10 [17] [17] = var_5;
            var_18 = (((arr_3 [i_1] [i_0] [i_0 + 1]) ? (arr_1 [i_1] [13]) : ((var_6 ? (arr_2 [18] [9]) : (arr_2 [i_0] [17])))));
            var_19 -= (arr_6 [i_0] [i_0] [i_0] [2]);
        }
        /* vectorizable */
        for (int i_3 = 3; i_3 < 18;i_3 += 1)
        {
            var_20 = (min(var_20, (arr_11 [i_0 + 1] [i_0])));
            arr_14 [i_0] &= ((!((var_0 >= (arr_13 [i_0] [1])))));
            var_21 = ((-((var_5 ? var_10 : var_9))));
            var_22 = (((((var_1 && (arr_6 [1] [13] [i_3] [1])))) * (var_4 == var_0)));
            var_23 = (min(var_23, (((17 << (((arr_3 [i_0] [i_0 + 2] [i_3 - 2]) - 65500)))))));
        }
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        var_24 ^= (((max((arr_2 [11] [i_4]), (arr_0 [i_4]))) * (arr_2 [i_4] [i_4])));
        arr_19 [i_4] |= (((max(((max((arr_13 [i_4] [i_4]), var_9))), var_6)) <= (arr_5 [i_4])));
    }
    for (int i_5 = 1; i_5 < 12;i_5 += 1)
    {
        arr_23 [i_5] = (arr_15 [0]);
        var_25 -= (arr_20 [i_5]);

        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
        {
            var_26 = (min(var_26, ((((!var_6) && (((var_6 ^ var_4) && ((max(var_7, var_3))))))))));
            arr_27 [i_5] [i_6] [i_5] = (arr_26 [i_5 + 1] [i_6] [i_5 + 1]);
            var_27 -= ((-(9223371487098961920 <= 1)));
            var_28 = (min(var_28, ((((arr_1 [i_5] [i_6]) ? (((arr_13 [i_5] [i_6]) + var_9)) : -var_1)))));
            arr_28 [i_5] [i_6] [i_6] = (arr_13 [i_5 - 1] [i_5 - 1]);
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
        {
            var_29 *= arr_3 [i_5 - 1] [1] [i_5 - 1];
            var_30 = ((((~var_0) / (arr_4 [i_7] [17]))));
            var_31 = (min(var_31, (((-(max((arr_17 [i_5 + 1] [i_5 + 1]), (((arr_6 [i_7] [i_7] [i_5] [1]) ? var_9 : (arr_29 [5] [5]))))))))));
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
        {
            arr_34 [i_5] [i_8] [i_5] = (((((~(arr_1 [i_8] [i_5])))) ? (arr_4 [i_5 + 1] [i_5 - 1]) : (((arr_31 [i_5] [9] [i_8]) ? (arr_20 [i_5]) : var_7))));
            var_32 = ((-((-(arr_31 [i_5] [9] [i_5])))));
        }
        arr_35 [i_5] = ((!((((22290 >> (-587290522 + 587290547)))))));
    }
    #pragma endscop
}
