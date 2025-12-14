/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((((var_5 ? var_6 : var_4)) <= var_2))) ^ ((max(var_2, (min(var_7, var_7)))))));
    var_11 = ((-19681 ? var_2 : var_3));

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0 - 3] [i_0]) ? (((!(arr_1 [i_0 + 2])))) : var_3));
        var_12 = (max((arr_0 [i_0] [i_0]), (19689 * 1)));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] [i_1 + 4] = arr_6 [i_0] [13] [i_1];
                    arr_8 [4] [i_1 - 1] [i_1 + 4] [i_1] = (19668 > 1350298031);
                }
            }
        }
    }
    for (int i_3 = 1; i_3 < 9;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 9;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 9;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 9;i_6 += 1)
                {
                    {
                        var_13 = (((((arr_22 [i_6 + 1] [i_4] [i_4 - 1] [i_6]) ? (arr_14 [i_4 + 1] [i_3]) : (arr_14 [i_4 + 1] [i_3]))) - (arr_14 [i_4 - 1] [i_3])));
                        var_14 = (min((((arr_16 [i_6 - 1] [i_3] [i_3] [i_3 - 1]) ? (arr_16 [i_6 - 1] [i_3] [i_3] [i_3 - 1]) : 19680)), (((((var_5 + (arr_22 [7] [i_4] [i_4] [i_6]))) ^ (arr_18 [i_3] [i_4 - 1] [i_4 - 1]))))));

                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            var_15 = 1;
                            arr_25 [i_3] = (max((((((arr_17 [i_5 - 2] [9]) ? var_1 : (arr_6 [i_3 - 1] [i_3] [i_3]))) * (arr_13 [i_6 + 1]))), (((((min((arr_19 [i_3]), -29968))) == ((1 ? (arr_4 [i_4] [10]) : -612859811)))))));
                            arr_26 [i_3] [i_3] [i_5] [i_6] [i_7] = (max(22397, (arr_22 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_4 - 1])));
                            arr_27 [i_3] [i_3] [i_4 - 1] [i_5 - 2] [i_6] [i_7] = ((((((arr_20 [i_3 - 1] [i_4 + 1] [1] [i_6 + 1] [i_7]) ? (arr_20 [i_3] [i_3] [i_3] [i_6 - 2] [i_3]) : (arr_20 [i_3 - 1] [i_4 - 1] [i_4 - 1] [i_6 - 2] [i_7])))) ? ((((arr_20 [i_3] [i_3] [i_5] [i_6 - 2] [i_7]) ? (arr_20 [i_6] [i_4] [2] [i_6 + 1] [2]) : (arr_20 [i_3 - 1] [i_4] [i_5 + 1] [i_6 - 1] [i_7])))) : (arr_20 [i_3] [i_4] [i_5 + 1] [i_6 - 1] [4])));
                        }
                        arr_28 [i_3] [i_3] [i_3 + 1] [i_3 + 1] [i_3] = (max((max(-19698, (arr_10 [i_3]))), (((!((((arr_0 [i_5 + 1] [i_6]) ? var_7 : -29961))))))));
                    }
                }
            }
        }
        arr_29 [i_3] [i_3] = (arr_15 [i_3] [i_3]);
        arr_30 [i_3] = (max(var_7, (arr_3 [i_3] [i_3 + 1] [i_3])));
        arr_31 [i_3] = ((!((max(((((arr_10 [i_3]) / (arr_11 [3])))), (max((arr_9 [1]), (arr_13 [i_3]))))))));
    }
    var_16 = ((((((1 & 3041) ? var_5 : (max(var_6, var_3))))) ? -var_3 : (((var_6 ? var_8 : var_4)))));
    #pragma endscop
}
