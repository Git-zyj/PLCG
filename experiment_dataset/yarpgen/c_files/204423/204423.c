/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 = (arr_2 [i_0]);
        arr_3 [i_0] = (max(((max((arr_1 [21]), (((!(arr_1 [1]))))))), ((((max((arr_0 [i_0]), var_15))) ? (arr_0 [i_0]) : (var_0 && var_14)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        var_19 &= (((arr_4 [i_1]) | ((-58 ? -1779837139 : (arr_4 [i_1])))));
                        arr_14 [i_4] [i_3] [i_2] [i_1] = (arr_11 [i_1] [12] [12] [i_4]);
                        arr_15 [i_1] [i_1] [18] [i_1] [i_1] = ((-(((-9223372036854775807 - 1) / (arr_8 [i_1] [i_3] [i_4])))));
                        var_20 = (((22228 ^ (arr_0 [i_4]))));
                        var_21 |= (arr_9 [i_1] [0] [i_3] [i_4]);
                    }
                }
            }
        }
        var_22 = 3596584432169692880;
        var_23 = (min(var_23, ((((arr_9 [i_1] [i_1] [i_1] [i_1]) | ((((arr_13 [i_1] [i_1] [2] [2] [i_1] [i_1]) | var_11))))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    {
                        arr_26 [i_6 + 2] = (((arr_5 [i_6 + 1] [i_7 - 1]) ? (arr_5 [i_6 + 2] [i_7 - 1]) : (arr_5 [i_6 - 1] [i_7 - 2])));
                        arr_27 [i_5] [i_5] = (-28436 ? (((arr_19 [16] [i_5] [i_5]) >> (((arr_22 [i_5] [i_5] [i_7 - 2]) + 550314282063017132)))) : (arr_23 [13]));
                        var_24 = (213 ? ((((arr_23 [i_5]) | 96))) : (arr_21 [7] [i_5] [7]));
                    }
                }
            }
        }
        var_25 = ((-(arr_2 [i_5])));

        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            var_26 = (min(var_26, (((~(arr_22 [i_5] [i_5] [i_5]))))));
            arr_30 [i_5] [i_5] [i_5] = (((arr_25 [i_9] [i_5]) < (arr_18 [i_9] [7])));
        }
        var_27 = (arr_29 [i_5]);
    }
    var_28 = (((((-((max(var_8, var_0)))))) ? 4095 : ((max(((var_13 ? var_11 : 1779837139)), ((max(30482, var_1))))))));
    #pragma endscop
}
