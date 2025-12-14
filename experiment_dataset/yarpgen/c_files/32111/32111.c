/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_12 = (min((min((arr_1 [i_0]), (arr_0 [i_0]))), -0));
        arr_2 [i_0] = ((!(((var_10 ? (var_1 != 2483608334074953662) : 2483608334074953657)))));

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            var_13 = ((var_6 ? (arr_1 [i_0]) : ((((min((arr_5 [i_0] [i_1] [i_1]), var_9))) ? (max(var_2, var_1)) : var_6))));

            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                arr_9 [0] [i_1] [0] &= ((((((((var_1 ? (arr_6 [4]) : 15963135739634597953))) ? (!var_8) : (((arr_5 [i_0] [i_0] [i_0]) >> (10094 - 10066)))))) && (((((arr_7 [i_0] [i_0] [i_0] [i_0]) ? 0 : 16))))));
                var_14 = (max(var_14, (((-(arr_0 [i_2]))))));
            }
            for (int i_3 = 1; i_3 < 9;i_3 += 1) /* same iter space */
            {
                arr_12 [i_1] [i_1] [i_3] = min((((+(((arr_4 [i_1]) ? (arr_6 [i_1]) : (arr_7 [i_3] [i_3] [i_0] [i_0])))))), (min(((2483608334074953662 ? 15963135739634597953 : 15963135739634597933)), ((max((arr_5 [i_0] [i_1] [i_3]), var_6))))));
                arr_13 [0] [0] |= ((!((min(0, (arr_7 [i_3] [i_1] [i_0] [i_0]))))));
            }
            /* vectorizable */
            for (int i_4 = 1; i_4 < 9;i_4 += 1) /* same iter space */
            {
                var_15 = (max(var_15, ((((arr_0 [i_1 + 2]) <= (arr_0 [i_1 + 2]))))));
                var_16 = ((-2483608334074953662 << (((arr_11 [i_0] [i_1] [i_1]) - 5667697947081792384))));
            }
            /* vectorizable */
            for (int i_5 = 1; i_5 < 9;i_5 += 1) /* same iter space */
            {
                var_17 += (((arr_3 [i_1 + 2] [i_5 + 2] [i_1 + 2]) ? (arr_15 [i_1 - 1] [i_1 - 1] [i_5 - 1]) : ((59257 ? (arr_15 [i_0] [i_0] [i_5]) : var_4))));
                var_18 = (max(var_18, 0));
            }
            arr_19 [i_1] [i_1] = (((arr_3 [i_1 + 1] [i_1 - 1] [i_1 + 1]) < (min((arr_16 [i_1 + 2] [i_1] [i_1]), (arr_11 [i_1 + 1] [i_1 + 1] [i_0])))));
            arr_20 [i_0] [i_1] [i_0] = ((!(((0 & (arr_0 [i_0]))))));
        }
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            arr_23 [i_6] = (((~((var_3 ? (arr_6 [4]) : var_1)))));
            var_19 = (((((min((arr_17 [6] [i_0] [i_6]), (arr_17 [4] [4] [i_6]))))) % ((-(((arr_16 [i_0] [i_0] [i_0]) ? var_0 : 1))))));
            var_20 = (((!0) ? (min((min(65535, var_2)), 17)) : var_8));
            var_21 = ((((((min((arr_1 [i_0]), 0))) ? (((max((arr_14 [4]), (arr_6 [8]))))) : (((arr_22 [i_0] [i_0] [i_0]) ? (arr_11 [i_0] [i_6] [i_0]) : (arr_8 [0] [0] [0] [0]))))) * (((((var_1 <= (arr_21 [i_0] [i_0]))))))));
        }
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            var_22 = ((((~(var_5 >= -16)))) ? (min(((min(129, 10))), (arr_16 [i_0] [i_0] [i_7]))) : 1509348533);

            for (int i_8 = 2; i_8 < 11;i_8 += 1)
            {
                var_23 = (max((min((arr_15 [i_0] [i_8 + 1] [i_8]), (arr_15 [i_0] [i_8 + 1] [i_8]))), ((-31260 | (((arr_8 [i_7] [i_0] [i_7] [i_8]) | (arr_11 [i_0] [i_7] [i_0])))))));
                arr_30 [i_0] [i_0] [i_0] [i_0] = (max((arr_17 [i_8] [i_7] [i_7]), (((!(arr_7 [i_8 - 2] [i_8 + 1] [i_8 - 1] [i_8 - 2]))))));
                var_24 = ((arr_18 [i_8]) && (arr_7 [i_0] [i_0] [i_8] [i_8]));
                arr_31 [i_0] [i_0] = (arr_26 [i_0] [i_0] [i_0] [i_0]);
            }
            var_25 = ((~(((~(arr_22 [i_0] [i_0] [i_0]))))));
        }
    }
    var_26 += (!var_0);

    for (int i_9 = 1; i_9 < 1;i_9 += 1)
    {
        var_27 = (max(var_27, ((!((((((~(arr_32 [i_9])))) ? ((var_9 ? (arr_35 [i_9]) : 16)) : (!-11))))))));
        var_28 = (min(var_28, ((((((min((arr_35 [i_9]), var_5)))) ? (((15963135739634597952 ? ((-21 ? 0 : -32747)) : ((((arr_35 [i_9]) ? 230 : 15)))))) : (arr_35 [i_9]))))));
    }
    #pragma endscop
}
