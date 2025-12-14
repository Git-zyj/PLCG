/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_16 = ((((((arr_0 [i_0]) == var_0)))) ^ var_13);
        var_17 = ((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [17]));
        var_18 = var_7;
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        arr_5 [i_1 - 2] = ((((((arr_3 [i_1] [i_1]) ? (32967 ^ -32) : (((arr_4 [i_1] [i_1]) | (arr_3 [i_1] [i_1])))))) ? (arr_2 [i_1 - 2]) : ((min(((((arr_0 [i_1]) || (arr_4 [i_1] [i_1])))), var_3)))));
        arr_6 [i_1] = (arr_2 [i_1]);
    }
    var_19 = ((((var_11 ? var_4 : var_10))));

    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    {
                        arr_21 [i_2] [i_2] [i_2 - 1] [i_2] = (((arr_10 [i_2]) ? var_3 : (((arr_11 [i_2] [i_2 - 1]) ? (arr_11 [i_2] [i_2 - 1]) : (arr_1 [i_2] [i_2 - 1])))));
                        arr_22 [i_2] [i_3] [i_4] [i_5] = var_1;
                    }
                }
            }
        }
        var_20 = (min((((((var_10 ? var_10 : (arr_11 [i_2] [i_2]))) <= (((var_7 ? var_7 : var_7)))))), var_14));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                {
                    arr_30 [i_2] [i_2] [i_7] = ((((((arr_26 [i_2] [i_6] [10]) ? (max(var_0, (arr_2 [i_2 - 1]))) : (arr_0 [i_2])))) ? (arr_26 [i_2] [12] [i_2]) : ((((min(var_9, (arr_15 [i_2] [i_6] [6])))) ? ((((var_9 != (arr_25 [i_7] [i_6]))))) : (arr_25 [i_2 - 1] [i_6])))));
                    var_21 = var_15;
                    arr_31 [i_2] [i_2] [i_6] [i_2] = 1203125263;
                }
            }
        }
        var_22 = (((var_11 << (((arr_19 [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1]) - 11803417719713576909)))));
    }
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        var_23 &= var_5;
        var_24 = 31;
        var_25 = ((((((((arr_8 [i_8]) == var_14)) ? (((var_9 != (arr_12 [i_8] [i_8] [i_8])))) : (arr_15 [i_8] [i_8] [i_8])))) ? (((max((var_6 > var_14), var_3)))) : (max(((((arr_10 [i_8]) != (arr_27 [i_8] [4] [i_8])))), ((var_2 / (arr_32 [i_8])))))));
        arr_34 [i_8] = ((((var_13 ? (arr_20 [i_8] [i_8] [i_8] [i_8]) : (arr_20 [i_8] [i_8] [i_8] [i_8])))) ? (1097205804 ^ 1203125263) : (arr_20 [i_8] [i_8] [i_8] [i_8]));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
    {

        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            var_26 = (min(var_26, (arr_37 [i_10] [i_9])));
            arr_40 [i_9] = (arr_38 [i_9] [i_9] [i_9]);
            arr_41 [10] [i_10] = (((arr_37 [i_9] [i_10]) || var_14));
            var_27 = ((((arr_38 [i_9] [i_9] [i_10]) != (arr_36 [i_9]))));
        }
        for (int i_11 = 0; i_11 < 17;i_11 += 1)
        {
            arr_44 [i_9] [i_11] = (arr_36 [i_9]);

            for (int i_12 = 1; i_12 < 16;i_12 += 1)
            {
                var_28 = (max(var_28, (((var_5 == (arr_38 [i_12 - 1] [i_12 + 1] [i_12 - 1]))))));
                var_29 = var_8;
            }
            arr_47 [i_9] [i_9] [i_11] = ((((-32 ? 0 : 57344)) << 31));
        }
        var_30 = ((arr_1 [i_9] [i_9]) / (arr_1 [i_9] [i_9]));
        var_31 = (arr_37 [i_9] [i_9]);
        var_32 = (arr_45 [i_9]);
        var_33 = (max(var_33, (arr_43 [i_9])));
    }
    for (int i_13 = 0; i_13 < 17;i_13 += 1) /* same iter space */
    {

        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            var_34 = (min(var_34, (max(((3629338657026399440 ? 38400 : 1)), var_11))));
            var_35 = ((((min(((var_13 ? (arr_37 [i_14] [5]) : (arr_38 [i_14] [i_13] [i_13]))), ((max(var_9, var_3)))))) ? (arr_45 [i_13]) : (((((arr_50 [i_13]) != (arr_46 [i_13] [i_14])))))));
        }
        arr_53 [i_13] [i_13] = (arr_45 [i_13]);
        var_36 = (min(var_36, ((max(1, 21)))));
    }
    #pragma endscop
}
