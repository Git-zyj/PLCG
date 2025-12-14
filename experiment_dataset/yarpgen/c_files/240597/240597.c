/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= var_0;
    var_14 = (((var_7 == ((min(var_5, -1))))) ? var_8 : ((max(var_3, (var_10 && var_1)))));

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = ((-(-1 < 1)));
        arr_5 [i_0] = ((~((((var_7 ? (arr_0 [i_0]) : var_9)) & ((var_9 ? 255 : 11152))))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_15 = (((arr_3 [6]) ? (max((151578887 + 1), 11153)) : (((max(var_7, (-127 - 1)))))));
                        var_16 -= (arr_2 [1]);

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            arr_17 [1] [i_3] [i_2] [i_3] = var_1;
                            arr_18 [i_2 - 1] [i_3] [3] = min((max(((max((arr_2 [i_4]), var_2))), (~11153))), (arr_1 [i_0 - 2] [i_1 + 2]));
                            var_17 = ((var_7 ? (((arr_13 [i_0 + 1] [i_2 - 1]) ? ((var_9 ? (arr_3 [i_0 + 2]) : (arr_7 [i_3] [i_1 - 2]))) : ((min((arr_6 [i_1] [i_4]), (arr_2 [i_0 + 1])))))) : (arr_13 [i_2] [i_1 - 2])));
                        }
                    }
                }
            }
        }
        var_18 = (arr_15 [i_0] [11] [i_0 + 3] [i_0 - 2] [i_0 + 3]);
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
    {
        arr_21 [1] [i_5] = 1;
        var_19 = (((((~(arr_15 [i_5] [i_5] [i_5] [i_5] [i_5])))) && (((-(arr_0 [i_5]))))));
        var_20 *= (((((arr_7 [i_5] [i_5]) == (((arr_19 [i_5]) ? var_4 : var_7)))) ? ((((((18 ? (arr_13 [i_5] [i_5]) : 2641766892)) == (arr_13 [i_5] [i_5]))))) : ((-5892 ? 6217 : 321524916))));
        arr_22 [i_5] [i_5] = ((1 ^ (-2147483647 - 1)));
    }
    for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
    {
        arr_25 [8] |= ((((((arr_10 [i_6] [i_6] [i_6] [i_6] [i_6]) ? (arr_10 [i_6] [i_6] [0] [i_6] [i_6]) : (arr_10 [i_6] [7] [7] [i_6] [i_6])))) ? (arr_9 [i_6] [i_6] [i_6] [i_6]) : ((-(arr_9 [i_6] [i_6] [i_6] [i_6])))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 12;i_8 += 1)
            {
                {
                    var_21 = (arr_19 [i_6]);
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            {
                                var_22 &= (((min(var_5, (min(1, var_4))))));
                                var_23 *= (arr_30 [i_6] [i_7] [i_6] [i_10]);
                                var_24 = (((((arr_31 [i_8 - 2]) ? (arr_31 [i_8 - 1]) : (arr_31 [i_8 - 2]))) & ((3 ? (-2147483647 - 1) : (-2147483647 - 1)))));
                                arr_38 [0] [i_7] [i_8 - 2] [i_7] [i_10] = ((var_2 & (min((((arr_14 [i_6]) ? var_12 : var_11)), ((min((arr_26 [i_7]), (arr_24 [i_6]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_11 = 1; i_11 < 15;i_11 += 1)
    {
        arr_41 [i_11 - 1] = (((33 ? -4 : 112)));
        arr_42 [i_11] [5] = ((~((((arr_40 [i_11 + 2]) && (arr_40 [i_11 + 1]))))));
        var_25 = ((~((-((4294966272 ? (-32767 - 1) : -1))))));
        var_26 = (min((arr_39 [i_11 + 1]), ((var_2 == ((var_11 ? var_10 : (arr_40 [i_11])))))));
        arr_43 [i_11] = (-15 ? 234 : 18);
    }
    #pragma endscop
}
