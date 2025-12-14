/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((-25 ? var_11 : var_4))) && (((1845596106 ? ((max(var_1, var_13))) : var_11))));
    var_15 = var_13;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] [12] = 1925812995;
        var_16 = ((!((min((arr_1 [i_0 + 1] [12]), var_4)))));
    }
    for (int i_1 = 3; i_1 < 10;i_1 += 1)
    {
        arr_6 [i_1 - 3] = (arr_1 [i_1] [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    var_17 = (min((max((!var_6), ((var_2 ? var_1 : var_6)))), ((min((arr_1 [i_1] [i_1 + 1]), 247)))));

                    for (int i_4 = 2; i_4 < 10;i_4 += 1)
                    {
                        var_18 = -1507718976725226637;
                        arr_15 [10] [i_2] [i_3] [1] = ((!(((~(arr_13 [i_1] [i_2] [i_2] [6]))))));
                        var_19 += (max(((((((!(arr_14 [i_1 - 2] [i_2])))) == var_3))), ((((min(var_5, var_2))) ? ((max(var_3, var_1))) : (arr_12 [7] [i_2] [9] [i_4 + 2])))));
                        var_20 = var_4;
                    }
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        var_21 += (~1);
                        var_22 = (min(var_22, ((((((((var_8 ? var_7 : (arr_1 [i_1] [i_2])))) < (((arr_8 [i_1 - 2] [11] [1]) ^ (arr_10 [i_1] [i_2] [1] [10]))))) ? -var_11 : (min((arr_9 [i_1 - 3]), (arr_18 [i_1 - 3] [i_2] [i_3] [i_5] [i_2] [i_5]))))))));
                    }

                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {
                        var_23 = (~12);
                        var_24 = ((((((arr_5 [3] [i_2]) ? (((max(23, 113)))) : (arr_8 [i_1] [i_1] [4])))) ^ (max((var_6 < var_9), (arr_4 [i_3] [i_3])))));
                    }
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        arr_24 [i_1] [0] [i_3] [i_7] [i_7] [i_2] = (max((arr_16 [i_1 - 2] [i_1 + 2] [7] [i_1] [i_1 - 3] [i_3]), (arr_8 [i_1] [i_1] [i_1])));
                        arr_25 [i_7] [i_3] [i_3] [i_1] &= ((~(min((~6), (~1416207037)))));
                        var_25 = (max(var_25, (~var_5)));
                        arr_26 [i_2] [i_2] [10] = -var_1;
                    }
                    for (int i_8 = 1; i_8 < 8;i_8 += 1)
                    {
                        var_26 = max(2, 235);
                        arr_30 [i_2] = ((~(((((min(var_8, var_8))) < (arr_11 [i_1] [i_1] [i_1 + 1] [i_8 + 4]))))));
                        var_27 = ((131 << (2110587484 - 2110587479)));
                    }
                }
            }
        }
    }
    for (int i_9 = 1; i_9 < 1;i_9 += 1)
    {
        arr_34 [1] [i_9] = (max(var_9, (((arr_31 [i_9] [i_9]) ? ((var_10 ? var_8 : (arr_0 [i_9]))) : ((max((arr_33 [i_9] [i_9]), var_10)))))));
        var_28 = (min(var_28, ((((arr_2 [i_9]) * ((max((arr_33 [i_9 - 1] [i_9 - 1]), (~var_10)))))))));
    }
    /* LoopNest 2 */
    for (int i_10 = 1; i_10 < 7;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            {
                var_29 = (arr_22 [i_10] [i_10] [i_10] [i_11] [i_11]);
                var_30 = min(((((var_0 ? (arr_39 [i_11] [2] [i_11]) : var_9)))), var_2);
                var_31 = (min((((arr_19 [4] [i_11] [3] [6] [i_10]) ? var_2 : var_0)), ((max((min(var_4, (arr_31 [i_10] [i_10]))), (arr_40 [i_10]))))));
                arr_41 [i_10] [9] &= -var_10;
                var_32 *= (arr_27 [i_10 + 1] [i_11]);
            }
        }
    }
    #pragma endscop
}
