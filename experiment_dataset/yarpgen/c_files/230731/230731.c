/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_7 ? (var_7 != var_0) : ((var_4 ? var_1 : var_11))));
    var_14 = (max(var_14, (((((253 ? 253 : 8022679649077979273)) - (7931 || var_9))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [13] = (((!124) * (((arr_1 [i_0]) + 0))));
        var_15 = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            var_16 = (min(var_16, (arr_3 [i_2] [i_1])));
            var_17 = (min(var_17, ((max(-7931, (-7368604553384777497 + 1542865644))))));
            arr_10 [i_2] = (arr_9 [i_2] [i_2]);
            var_18 = (arr_9 [i_2] [i_2]);
            var_19 = ((1 | ((((arr_9 [i_2] [i_2]) != (min((arr_5 [i_1]), var_10)))))));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            var_20 = ((((arr_8 [i_1] [i_3] [20]) < ((~(arr_5 [i_3]))))) ? (((((~(arr_12 [i_1] [i_3] [i_3]))) != ((((var_12 != (arr_11 [i_1] [i_3])))))))) : (arr_7 [i_3] [0]));
            var_21 = ((!(min((((arr_3 [i_1] [i_3]) > var_6)), ((var_2 && (arr_6 [i_3] [4])))))));
            arr_13 [i_1] = (((((1 ? 126 : -801349203))) ? ((((((228 ? 1 : -52))) && var_2))) : (min(var_4, var_4))));
        }
        arr_14 [i_1] = var_8;
        arr_15 [i_1] [i_1] = (arr_5 [i_1]);
        var_22 = ((max(var_12, (arr_5 [i_1]))));
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        var_23 = (((((-(max(var_8, (arr_5 [i_4])))))) ? ((-((14669900063962112144 * (arr_9 [i_4] [i_4]))))) : var_1));
        var_24 = ((((!(arr_11 [i_4] [i_4]))) ? (-179460888 % 1) : var_12));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        var_25 = (((arr_4 [i_5] [i_5]) / (arr_4 [i_5] [i_5])));
        var_26 = (arr_11 [i_5] [i_5]);

        for (int i_6 = 4; i_6 < 11;i_6 += 1)
        {
            var_27 = -260551863;
            var_28 = (min(var_28, ((((~0) >= -7560068893471394525)))));
            /* LoopNest 2 */
            for (int i_7 = 3; i_7 < 9;i_7 += 1)
            {
                for (int i_8 = 4; i_8 < 11;i_8 += 1)
                {
                    {
                        arr_30 [i_6] [i_6] [i_6] = ((-((11 ? 127 : 1))));
                        var_29 = (((((-(arr_26 [i_6] [i_6])))) ? (arr_4 [i_5] [4]) : (arr_20 [4])));
                    }
                }
            }
            arr_31 [i_5] &= (((((arr_28 [i_5] [i_6] [i_5] [i_5] [i_5]) == var_6))) * 1);
        }
        for (int i_9 = 1; i_9 < 11;i_9 += 1)
        {
            arr_34 [i_9 + 1] = ((((arr_9 [i_5] [i_5]) ? (arr_12 [i_5] [i_9 - 1] [i_9]) : var_11)));
            var_30 = (((arr_7 [i_9 - 1] [i_5]) ? var_9 : (-709002263 && var_6)));
        }
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            var_31 = 1;
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 11;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        {
                            arr_44 [i_10] [i_10] [i_12] [i_12] [i_10] [i_10] [i_5] = (((arr_9 [i_10] [i_12 + 1]) || (arr_9 [i_10] [i_12 - 1])));
                            var_32 = (min(var_32, (~7931)));
                            arr_45 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = (((arr_6 [i_5] [i_10]) >> (var_9 - 49960)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
