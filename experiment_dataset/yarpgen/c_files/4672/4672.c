/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        var_14 += ((-(((arr_1 [i_0 + 1]) ? (arr_2 [i_0] [0]) : ((var_1 ? (arr_2 [i_0] [0]) : var_4))))));

        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                arr_11 [i_0] = ((var_4 && (((-(arr_4 [i_0 + 1] [i_1 + 2]))))));
                arr_12 [i_0] [i_0] [i_0] = ((var_10 == ((((arr_5 [i_0 - 3] [i_1] [i_2]) && var_10)))));
                var_15 = ((((max((~1334290123270284098), (arr_7 [i_0] [i_0 - 1] [i_1] [i_1])))) ? ((((arr_3 [i_0 - 3] [i_0 - 3]) ? (arr_3 [i_0 - 2] [i_2]) : (arr_3 [i_0 - 3] [i_2])))) : (((arr_9 [3] [i_1 + 1] [i_0]) ? (((~(arr_3 [i_0] [i_0 + 1])))) : var_12))));
            }
            arr_13 [i_0] = 16;

            for (int i_3 = 1; i_3 < 8;i_3 += 1) /* same iter space */
            {
                arr_16 [i_0] [i_1] [i_1 + 4] = ((((var_5 >= (arr_5 [1] [2] [9]))) ? (((!(arr_5 [i_0 - 3] [i_0] [i_0 - 3])))) : (((arr_5 [i_0 + 2] [i_0 + 2] [1]) ? (arr_5 [i_3 + 2] [i_1] [9]) : var_2))));
                var_16 = (min(var_16, (arr_0 [2])));
                arr_17 [i_0] = ((((((arr_15 [i_1] [i_1 + 4] [i_1 + 2] [i_1 + 1]) ? var_8 : (arr_15 [i_1] [i_1] [i_1 + 2] [i_1 + 1])))) | 3339285526));
                var_17 = (max(var_17, (((((min((!51), ((-(arr_6 [1] [i_3 + 2])))))) ? ((((arr_5 [i_1 + 2] [i_1] [i_3]) ? (arr_5 [i_1 + 2] [i_1 + 2] [i_0 + 1]) : var_3))) : (((arr_14 [i_0 + 2] [i_1 + 3] [i_1 + 1]) ? (arr_7 [i_1 - 1] [i_1 + 4] [i_1 + 2] [i_1 + 4]) : (((arr_14 [i_0] [i_1] [i_3]) ? (arr_9 [i_0 + 1] [0] [2]) : var_6)))))))));
            }
            for (int i_4 = 1; i_4 < 8;i_4 += 1) /* same iter space */
            {
                var_18 *= ((var_13 || ((((arr_5 [i_4 + 1] [i_1 + 2] [i_1 + 2]) ? 57 : (arr_5 [i_4 + 2] [i_4] [i_4]))))));
                arr_21 [i_0] [i_0] [i_0] = ((((((2484457027 ? 2540686207 : 57)))) && (arr_18 [i_0 - 1])));
            }
            for (int i_5 = 1; i_5 < 8;i_5 += 1) /* same iter space */
            {

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_19 = ((10 % (((-(arr_8 [i_0] [i_5 + 1] [i_5 + 1] [i_6]))))));
                    arr_29 [i_0] [i_0] [9] [i_0] [i_6] = (arr_2 [i_1] [i_0]);
                    arr_30 [i_0] [i_0] = (((arr_2 [i_0 - 3] [i_0]) ? ((-(arr_9 [i_0] [i_0 - 3] [i_0]))) : (arr_20 [5] [i_5 - 1] [0] [i_0])));
                }
                arr_31 [i_0] [i_0 - 2] [i_0 - 2] [8] = var_9;
                var_20 = ((~((1 ? (!var_6) : ((~(arr_0 [i_0])))))));
            }
            for (int i_7 = 1; i_7 < 8;i_7 += 1) /* same iter space */
            {
                var_21 = (arr_7 [i_0] [i_1] [i_0] [i_7]);
                var_22 = (((((~(arr_5 [i_0] [i_0] [3])))) && ((((arr_14 [i_0] [i_0 - 1] [i_7 + 2]) | var_11)))));
                arr_36 [i_0] [i_1] [i_0] = (-var_11 ? var_1 : (arr_34 [i_7 + 1] [i_0 - 1]));
            }
            var_23 = (arr_35 [i_0]);
            var_24 = (arr_4 [i_0] [i_0 + 1]);
        }
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            var_25 -= var_4;
            var_26 = (i_0 % 2 == 0) ? (((-(((arr_35 [i_0]) >> (((arr_35 [i_0]) - 114))))))) : (((-(((arr_35 [i_0]) >> (((((arr_35 [i_0]) - 114)) - 108)))))));
            var_27 = (((arr_28 [i_0 + 3] [i_0 + 3] [i_0] [i_8] [i_0]) ? ((((!(arr_26 [0] [i_8] [i_8] [i_8] [i_8] [i_8]))))) : (arr_1 [i_0])));
            var_28 = (max(var_28, (((~(arr_15 [i_0] [i_0 - 3] [i_0] [i_8]))))));
        }
    }
    for (int i_9 = 2; i_9 < 16;i_9 += 1)
    {
        arr_43 [i_9] = (arr_40 [14]);
        var_29 *= ((1 ? var_12 : (~var_3)));
    }
    var_30 &= var_10;
    #pragma endscop
}
