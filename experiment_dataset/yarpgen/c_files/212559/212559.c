/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_9;
    var_20 = ((!((min(var_17, var_12)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 24;i_2 += 1)
            {
                {
                    var_21 = (max(var_21, (arr_1 [1])));
                    var_22 = var_2;

                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_7 [i_0]);
                        arr_12 [i_0] [i_0] = ((((arr_3 [i_0] [i_0]) ? -713818409330694155 : var_18)));
                    }
                }
            }
        }
        var_23 = (~(var_17 | var_14));
        var_24 = (((var_0 + 9223372036854775807) >> (var_13 + 1030238172)));
        var_25 = -713818409330694157;
    }

    for (int i_4 = 2; i_4 < 19;i_4 += 1)
    {
        arr_16 [i_4] = (((!((((-713818409330694181 + 9223372036854775807) << (713818409330694164 - 713818409330694164)))))));
        var_26 = (max(var_26, ((((((var_9 ^ (((!(arr_5 [i_4]))))))) != (min((((arr_9 [i_4] [i_4 - 2]) + -713818409330694150)), (arr_13 [i_4] [i_4]))))))));
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        arr_21 [i_5] = ((((min(((var_9 << (arr_2 [i_5]))), -1326784307)) + 2147483647)) << (arr_2 [i_5]));
        var_27 &= ((-((min(var_2, -713818409330694169)))));
        var_28 = (((min((((1967350123 ? (arr_2 [i_5]) : -1))), (((arr_13 [i_5] [i_5]) - var_8)))) <= ((((!((((arr_5 [2]) ? (arr_15 [i_5]) : (arr_20 [i_5]))))))))));
        var_29 = ((5073015920970852792 ? var_11 : (min(((0 ? -713818409330694150 : 1162749497)), 713818409330694149))));
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        var_30 = (arr_4 [1] [1]);
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    {
                        var_31 = (((min(-var_4, (var_8 <= 1016078492)))) ? ((((!(arr_30 [i_6] [i_6] [i_6] [i_6]))))) : (min(((min((arr_9 [i_9] [i_7]), -806211950))), (var_15 & 806211917))));
                        arr_32 [i_6] [i_7] [i_8] [i_8] [i_9] = ((-713818409330694150 && (806211917 || var_13)));
                        arr_33 [i_6] [i_7] [i_6] [i_8] [i_6] [i_6] = ((!((min(((var_14 ? -3 : 5)), ((-(arr_29 [i_6] [i_6] [i_8] [i_9]))))))));
                        var_32 = var_4;
                    }
                }
            }
        }
        var_33 = min((((((806211941 >> (var_17 + 123949510))) >= (((arr_29 [i_6] [i_6] [i_6] [i_6]) ? 806211949 : var_8))))), (min((((-5559238613757038491 >= (arr_4 [6] [6])))), (min(-287965941, var_10)))));
        arr_34 [i_6] = arr_22 [i_6] [i_6];
    }
    for (int i_10 = 1; i_10 < 1;i_10 += 1)
    {
        var_34 = var_14;
        var_35 &= 1;
        var_36 += ((((((var_18 ? (arr_30 [i_10] [i_10] [i_10] [i_10]) : (arr_7 [12])))) ? ((var_13 ? (arr_36 [1]) : -13)) : (min(5486896093101598905, (arr_4 [24] [10]))))));
    }
    #pragma endscop
}
