/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                arr_6 [i_0] [i_0] [2] = (arr_4 [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1]);
                var_20 = ((~(var_14 && 4162131956)));
            }
            var_21 = ((min(var_8, (arr_5 [i_0] [i_1] [i_0] [i_0]))));
            arr_7 [9] [2] [3] = (((((-(arr_2 [i_0] [i_0] [i_0])))) ? (0 || -1) : (arr_2 [i_0] [i_1] [i_1])));
            arr_8 [i_0] [i_1] = (+((var_2 ? ((((arr_4 [i_0] [i_1] [5] [5]) == (arr_4 [i_0] [i_0] [i_1] [i_0])))) : (((arr_2 [i_0] [i_1] [i_1]) ? var_12 : (arr_1 [i_0]))))));
        }
        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            arr_12 [i_3] [1] [1] = ((((((((arr_5 [4] [4] [4] [4]) - (arr_9 [i_0] [i_3] [7])))) ? (arr_0 [i_0]) : ((var_2 - (arr_11 [i_3]))))) + ((((max((arr_5 [i_3 + 1] [i_3 + 1] [2] [i_0]), var_14))) ? 3281846207 : 3281846207))));
            arr_13 [i_3] = ((((((var_5 ? (arr_5 [i_0] [i_0] [i_0] [i_3 + 1]) : (arr_0 [i_3 + 1]))))) ? 1 : (arr_1 [i_0])));
            arr_14 [i_3 + 2] [i_3] [10] = (((arr_0 [i_3]) ? ((((-127 - 1) < (~var_9)))) : (((var_3 ? var_9 : (arr_2 [i_3] [i_0] [i_0]))))));
            arr_15 [i_0] [i_3] = ((~(arr_9 [i_3 - 1] [i_3] [i_3])));
        }
        var_22 = ((((!(arr_5 [i_0] [i_0] [i_0] [4]))) || (arr_5 [i_0] [i_0] [i_0] [10])));

        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            var_23 = ((max(3239753206, (arr_0 [i_4]))));
            arr_18 [i_0] [i_0] [10] = (((-(arr_9 [i_0] [i_0] [i_0]))));
            arr_19 [i_0] = (min((((min(var_1, var_4)) ^ (((var_4 << (var_10 - 70)))))), (arr_9 [i_0] [i_0] [i_0])));
        }
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            var_24 = (((arr_1 [i_0]) * (((arr_1 [i_0]) / (arr_1 [i_5])))));
            arr_22 [i_0] [i_0] [i_0] = var_3;
        }
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            arr_26 [i_0] = (arr_24 [9] [i_0] [9]);
            var_25 = (min(((((var_5 ? (arr_23 [i_0] [i_0] [i_6]) : (arr_20 [i_0]))) - ((max((arr_16 [7] [7]), (arr_24 [i_0] [i_0] [9])))))), ((max(((max((arr_25 [i_0]), (arr_0 [i_6 - 1])))), (var_2 + 14336))))));
            var_26 = (1 ? (1 ^ var_16) : (((((33713 ? var_14 : var_10))) ? (((arr_2 [i_0] [i_6 - 1] [i_0]) ? var_17 : 2141176657536327318)) : (((max(var_6, 191)))))));
        }
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
    {
        var_27 = (arr_28 [i_7]);
        arr_31 [i_7] [16] = ((!(((((arr_30 [1]) + (arr_30 [1])))))));
    }
    for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
    {
        arr_34 [11] = ((var_0 + (var_16 < 3736746828)));
        arr_35 [5] = (arr_29 [13]);
        arr_36 [0] [i_8] = ((-((((arr_27 [i_8] [i_8]) < (arr_27 [i_8] [i_8]))))));
        arr_37 [i_8] = ((~((~((~(arr_30 [i_8])))))));
    }
    var_28 = (((((~((var_7 ? var_14 : var_0))))) % var_17));
    var_29 = (((((((var_3 ? var_0 : var_3)) < var_13))) + var_9));
    #pragma endscop
}
