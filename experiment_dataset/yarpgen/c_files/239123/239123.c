/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 0;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_14 = arr_0 [i_0] [i_0];
        var_15 = (max(var_15, (((((arr_1 [0]) ? 0 : (arr_0 [i_0] [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 23;i_3 += 1)
            {
                {
                    var_16 = ((min(var_11, 127)));
                    arr_10 [i_3] = (((min((arr_5 [i_3 - 2] [i_3 - 1] [i_3 - 2]), (arr_5 [i_3 - 2] [i_3 + 1] [i_3 - 2]))) ? (arr_5 [i_3 - 1] [i_3 - 1] [i_3 + 1]) : (((arr_5 [i_3 - 1] [i_3 - 1] [i_3 - 2]) ? (arr_5 [i_3 - 2] [i_3 + 1] [i_3 + 1]) : (arr_5 [i_3 - 2] [i_3 - 1] [i_3 + 1])))));
                }
            }
        }
        var_17 = (min((((var_8 && (((1 | (arr_6 [i_1] [i_1]))))))), 3572604258));
        var_18 = 25153;
    }

    for (int i_4 = 1; i_4 < 9;i_4 += 1) /* same iter space */
    {
        var_19 = ((1801492834 ? ((-(arr_2 [i_4 + 1]))) : (arr_2 [i_4 + 3])));

        for (int i_5 = 1; i_5 < 11;i_5 += 1)
        {
            var_20 = (((arr_8 [i_5] [i_5 + 1] [i_5 - 1]) ^ (arr_11 [i_5 - 1])));
            arr_15 [i_4] [i_5] = ((var_9 / (((((0 ? 140 : 254474543))) ? (arr_0 [i_5] [i_4]) : ((((arr_0 [7] [i_5]) ? (arr_7 [i_4] [i_4] [i_5]) : (arr_3 [i_5]))))))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_21 *= -1;
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        var_22 |= (((((arr_12 [i_4 + 3] [i_6]) ? -1801492835 : var_5)) - ((((arr_9 [20] [20]) ? 3866365730 : 0)))));
                        var_23 = ((((var_6 && (arr_11 [i_8]))) ? (arr_17 [i_4 + 1]) : -var_7));
                    }
                }
            }
        }
    }
    for (int i_9 = 1; i_9 < 9;i_9 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 9;i_11 += 1)
            {
                {
                    var_24 = (min(var_24, ((((max((((-1801492835 ? 74 : 1))), (arr_6 [i_9] [i_11]))) < var_10)))));
                    var_25 *= ((((64 >> (arr_18 [i_9 + 3] [i_10] [i_11 + 2])))) ? (((((((arr_7 [i_11 + 2] [i_11 + 2] [i_11]) == (arr_1 [14])))) / (min((arr_24 [i_9] [i_10] [i_11] [i_9]), (arr_12 [i_9] [i_10])))))) : (arr_17 [i_9]));
                }
            }
        }
        var_26 |= (max(((0 ? (arr_22 [i_9 - 1]) : (arr_22 [i_9 + 2]))), ((var_4 ? (arr_22 [i_9 + 3]) : (arr_22 [i_9 - 1])))));
    }
    /* vectorizable */
    for (int i_12 = 1; i_12 < 9;i_12 += 1) /* same iter space */
    {
        var_27 = var_7;
        arr_35 [i_12 + 2] = (((arr_9 [0] [i_12]) >= -var_2));
    }
    #pragma endscop
}
