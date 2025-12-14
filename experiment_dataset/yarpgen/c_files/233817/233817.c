/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0 - 1] = (((arr_0 [i_0 + 2]) | -var_8));
        arr_3 [i_0] = (max((arr_1 [i_0]), (arr_1 [i_0 - 1])));
        var_13 = (min(var_13, (((+((var_5 ? (arr_0 [i_0 + 2]) : 102215614)))))));
    }
    for (int i_1 = 3; i_1 < 17;i_1 += 1)
    {
        var_14 = (max((min((((~(arr_5 [i_1])))), (max((arr_5 [i_1]), var_8)))), (max((arr_6 [i_1]), (arr_6 [i_1 + 3])))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_15 = 580343968;

            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                var_16 = var_4;
                arr_13 [7] [i_2] [19] [i_2] = ((!(arr_7 [i_1 + 2] [i_2])));
            }
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 16;i_5 += 1)
                {
                    {
                        var_17 = ((-(arr_17 [i_1 - 3] [i_1 - 3] [i_1] [i_1 + 1] [i_1 - 2] [1])));
                        var_18 ^= var_7;
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_6 = 3; i_6 < 19;i_6 += 1)
        {
            arr_20 [i_6] = (((1 | 2596540031) ? 1 : var_9));
            var_19 = ((580343968 >= (arr_16 [i_1 + 1] [i_6] [i_6 + 1] [7] [i_1] [i_6])));
        }
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            var_20 = (arr_6 [6]);
            arr_24 [i_7] [i_7] = (((~(arr_11 [i_1] [i_1 - 2] [i_1 - 2] [i_7]))));
            arr_25 [i_7] [i_7] [3] = (max((var_8 >= 0), -8));
        }
        arr_26 [1] [i_1] = (min((((((min(var_8, var_11))) ? (arr_23 [3] [2]) : var_6))), ((((min((arr_10 [0] [0]), var_7))) ? ((var_9 ? var_3 : (arr_6 [i_1]))) : (((var_2 ? var_8 : 580343968)))))));
        /* LoopNest 2 */
        for (int i_8 = 3; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    arr_33 [i_1] [i_9] [i_1] = ((~((((((arr_23 [16] [i_8 - 1]) ? (arr_30 [i_9] [i_9]) : (arr_27 [i_1] [i_1 + 2] [i_1 + 2])))) | (arr_8 [i_8 - 2])))));
                    var_21 = (min(var_21, (((((var_1 || -2199023255552) ? (min(15403965612207254560, 3714623332)) : ((min(3950461236, (arr_16 [12] [i_1] [1] [i_8] [i_8] [10]))))))))));
                }
            }
        }
        arr_34 [i_1] [i_1 - 1] = (((((-((580343968 ? (arr_9 [14]) : var_11))))) || (((~(!var_10))))));
    }
    for (int i_10 = 0; i_10 < 18;i_10 += 1)
    {
        var_22 = (max(var_22, 0));
        var_23 = (max(var_23, (arr_17 [i_10] [3] [i_10] [14] [i_10] [i_10])));
        arr_38 [i_10] [i_10] = (~65);
    }
    var_24 = var_4;

    for (int i_11 = 0; i_11 < 20;i_11 += 1) /* same iter space */
    {
        var_25 = (max((min(((var_4 ? (arr_29 [i_11] [i_11] [i_11] [1]) : 2994778742)), ((((arr_14 [i_11] [i_11] [i_11]) ? 17 : var_9))))), ((max(((2994778742 ? var_10 : var_12)), var_11)))));
        var_26 = ((((max((min(var_11, var_2)), 45))) ? (max(((67783358 ? 2994778742 : (arr_31 [i_11] [i_11] [i_11]))), -1)) : 1300188553));
        var_27 = (arr_23 [i_11] [5]);
        arr_43 [i_11] = (min(((((min(67783358, 67783358)) < ((max(44, var_11)))))), (max((~var_6), (!var_2)))));
    }
    for (int i_12 = 0; i_12 < 20;i_12 += 1) /* same iter space */
    {
        arr_46 [i_12] [i_12] = (min(21030, ((((arr_4 [i_12]) || (arr_45 [i_12]))))));
        arr_47 [i_12] [3] = (-2147483647 - 1);
        arr_48 [19] [19] = (min(2147483647, (((arr_39 [i_12]) ? var_6 : (((arr_23 [i_12] [i_12]) | (arr_18 [i_12] [i_12])))))));
        arr_49 [11] [i_12] = (((~(arr_23 [i_12] [i_12]))));
    }
    /* vectorizable */
    for (int i_13 = 1; i_13 < 10;i_13 += 1)
    {

        for (int i_14 = 1; i_14 < 9;i_14 += 1)
        {
            arr_56 [i_13] = 1;
            arr_57 [i_14 + 3] = (((arr_12 [i_14] [16] [i_14 + 2] [i_14]) || (arr_16 [i_14 + 3] [i_14 + 2] [i_14] [i_14] [i_14] [14])));
        }
        for (int i_15 = 1; i_15 < 8;i_15 += 1)
        {
            arr_60 [i_13] [i_15 - 1] &= -1;
            var_28 = (34359738367 ? var_5 : (var_11 >= var_8));
        }
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 0;i_16 += 1)
        {
            for (int i_17 = 1; i_17 < 11;i_17 += 1)
            {
                {
                    var_29 = (min(var_29, (arr_27 [i_13] [i_13] [i_17])));
                    var_30 = ((-(arr_27 [i_13 + 2] [15] [17])));
                    var_31 = (max(var_31, (arr_1 [i_13 + 1])));
                    var_32 = (max(var_32, (((var_0 ? (arr_8 [i_13 + 1]) : var_5)))));

                    for (int i_18 = 0; i_18 < 12;i_18 += 1)
                    {
                        arr_71 [i_17] [i_17] = (arr_65 [i_17]);
                        var_33 = var_3;
                        var_34 = (min(var_34, -600443946));
                        var_35 = (max(var_35, (((7643960075365251227 >= (!var_0))))));
                        var_36 = (min(var_36, var_5));
                    }
                }
            }
        }
        var_37 = (max(var_37, var_3));
    }
    #pragma endscop
}
