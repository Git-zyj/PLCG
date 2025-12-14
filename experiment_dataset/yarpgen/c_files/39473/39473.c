/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= var_4;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_15 = (max((arr_0 [i_0]), (arr_0 [i_0])));
        var_16 = 42866;
    }

    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_8 [i_1] = (((((arr_0 [i_1]) ? var_0 : var_6))) && var_11);
        var_17 = (+-64);

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            arr_11 [i_1] [3] = ((+((min((arr_0 [i_1]), 30316)))));
            arr_12 [1] [i_2] [1] = (min(-106, (~-96)));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_18 = (min(var_18, ((min(((var_0 & (arr_3 [i_1]))), ((((arr_3 [i_1]) || 124))))))));
            var_19 = (min(var_19, (((min(var_9, 111))))));
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    {
                        var_20 = var_6;
                        var_21 |= max((arr_15 [i_1] [i_3]), (max((arr_0 [i_3]), (((var_2 > (arr_4 [i_1])))))));
                        var_22 = (2510671757 % 2023126514);
                        arr_22 [i_5] [i_1] = (arr_7 [i_1]);
                        arr_23 [i_1] [7] [i_4] [i_5] = (min(((((min(var_12, var_11))) || ((var_8 || (arr_17 [i_1] [i_1]))))), 2325639893));
                    }
                }
            }
            arr_24 [i_1] = min(56702, ((var_12 ? -44 : var_8)));
        }
        for (int i_6 = 1; i_6 < 11;i_6 += 1)
        {
            arr_28 [i_1] [i_6] = ((((((arr_7 [i_6 + 2]) & 2325639881))) ? (1 > var_0) : (arr_16 [i_6 + 2] [i_6 + 3] [i_6])));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 13;i_8 += 1)
                {
                    {
                        arr_33 [i_6] [i_6] [i_6] = ((var_1 ? (arr_19 [i_1] [1] [5] [i_1] [i_8]) : ((1 ? (arr_19 [i_6 + 2] [i_6] [i_6 + 3] [i_6 + 1] [i_6 - 1]) : -36))));
                        arr_34 [i_1] [i_6] [i_1] [i_7] [i_8] [i_8] = (((((-26024 ? (arr_26 [1]) : (arr_0 [9])))) && (arr_19 [9] [i_8] [1] [9] [i_7])));
                        arr_35 [i_6] [i_6] [i_7] [i_8] = ((((min(((((arr_20 [i_1] [i_7]) ? 1 : var_9))), (min(var_2, 8751729599903256386))))) ? 24 : (arr_26 [i_7])));
                    }
                }
            }
            arr_36 [i_6] [6] [i_6] = (((arr_19 [i_1] [i_1] [i_1] [i_1] [i_1]) ? (min((arr_7 [i_6]), ((max(var_3, (arr_27 [i_1] [i_6])))))) : (((((((1 ? (arr_19 [i_1] [i_6] [4] [i_6] [5]) : (arr_19 [i_1] [i_6] [i_1] [i_6] [10])))) || ((((arr_15 [i_1] [i_6]) ? 8751729599903256377 : (arr_3 [16]))))))))));
        }
        for (int i_9 = 2; i_9 < 12;i_9 += 1)
        {
            var_23 = (arr_3 [i_1]);
            arr_41 [i_9] [i_1] = ((((((((~(arr_14 [11] [8] [8])))) || (arr_2 [i_9])))) != (((((!(arr_1 [i_1]))) && ((min(var_6, (arr_26 [0])))))))));
            arr_42 [5] |= (min((((arr_30 [i_1] [i_9] [12]) ? var_6 : var_6)), 2072244349));
        }
    }
    for (int i_10 = 3; i_10 < 15;i_10 += 1)
    {
        var_24 = ((min(((var_4 ? var_6 : 1)), ((((arr_1 [i_10]) >= (arr_45 [i_10] [i_10])))))));
        arr_47 [12] [i_10] = (~255);
        arr_48 [i_10] [i_10] = (~var_11);
        var_25 = (max(var_25, (arr_43 [i_10 - 1])));
        arr_49 [7] = (max(((min(var_13, (arr_0 [i_10])))), (((min(105, var_4)) / (arr_43 [i_10])))));
    }
    var_26 = var_4;
    #pragma endscop
}
