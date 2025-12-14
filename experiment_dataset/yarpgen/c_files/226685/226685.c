/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(((-(var_5 <= var_4))), (((!(((var_5 ? var_13 : var_10))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] = (arr_2 [i_1]);
                    arr_10 [i_2] [i_0] [i_0] = (~-1223988193);

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 9;i_4 += 1) /* same iter space */
                        {
                            arr_15 [i_0] [i_0] [i_1] [i_0] [i_3] [i_4 + 1] [i_4 + 1] = ((((((arr_0 [i_1 - 2] [i_2 - 1]) ? (arr_0 [i_1 - 2] [i_2 - 1]) : (arr_0 [i_1 - 1] [i_2 - 1])))) ? (arr_0 [i_1 + 1] [i_2 + 1]) : (arr_0 [i_1 - 4] [i_2 - 1])));
                            arr_16 [i_3] [i_3] = (((((2251799813685247 >> (((arr_12 [i_4 + 1] [i_4 - 1] [i_4 + 2] [i_4 + 2] [i_4]) - 11242351295184157515))))) ? ((min(var_1, (arr_13 [i_4] [i_4 + 1] [i_2 - 1] [i_1 + 1] [i_1 + 1])))) : ((min((arr_6 [i_0] [i_0] [i_0]), (arr_0 [0] [i_3]))))));
                            arr_17 [i_4] [i_0] [i_0] [2] [i_0] [i_0] = ((~((((arr_14 [i_4 + 2] [i_0] [i_0]) == ((-(arr_14 [i_0] [10] [i_3]))))))));
                        }
                        for (int i_5 = 1; i_5 < 9;i_5 += 1) /* same iter space */
                        {
                            var_19 = (((((arr_2 [i_0]) > (arr_7 [i_0] [i_2] [i_3] [4])))));
                            arr_20 [i_0] [1] [1] [1] &= ((min((arr_19 [i_2 - 1] [i_5 - 1] [i_2 - 1] [i_1 + 1]), (arr_19 [i_5] [i_5 - 1] [i_2 - 1] [i_1 - 2]))));
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = (((1223988192 || (arr_2 [9]))));
                            arr_22 [i_3] [i_1] [i_3] [i_3] [i_5 - 1] = arr_13 [i_5] [i_3] [i_0] [i_0] [i_0];
                        }
                        var_20 = ((~((((arr_4 [i_2] [i_0]) <= (arr_13 [7] [i_2] [i_1 + 1] [i_0] [i_0]))))));
                        arr_23 [i_1] [i_1] = (((arr_3 [i_1]) == ((min((arr_7 [i_0] [i_1] [i_1] [i_3]), var_11)))));
                        var_21 = (min(((((min((arr_19 [i_0] [1] [i_1] [i_0]), 1223988193))) ? (((max((arr_1 [i_2]), (arr_6 [i_0] [i_0] [i_0]))))) : (arr_3 [i_1 - 1]))), (((((arr_7 [i_3] [i_2] [i_1] [i_0]) && var_5))))));
                        var_22 = (arr_12 [i_2] [i_2] [i_2] [i_2] [i_2]);
                    }
                    arr_24 [i_2] [i_1] [i_0] [i_0] &= (1223988185 % (((arr_4 [i_1 - 3] [i_1 - 4]) | (arr_2 [i_1]))));
                }
            }
        }
    }

    for (int i_6 = 3; i_6 < 10;i_6 += 1)
    {

        for (int i_7 = 4; i_7 < 13;i_7 += 1)
        {
            arr_30 [5] = ((!((((arr_28 [i_6]) | (((arr_29 [i_7] [i_6]) ^ (arr_25 [i_7]))))))));
            var_23 += (((arr_27 [i_7]) | ((+(((arr_28 [5]) ? var_11 : (arr_25 [i_6])))))));
            var_24 = (((22781 && 1223988193) && var_17));
            var_25 &= var_6;
        }
        var_26 = 1223988192;
    }
    for (int i_8 = 1; i_8 < 11;i_8 += 1)
    {
        var_27 ^= (((!var_17) ? (!1223988193) : (arr_32 [i_8])));
        var_28 ^= ((((((((arr_31 [11]) ? (arr_31 [i_8]) : var_3)) - (arr_31 [1])))) ? ((((!(!var_8))))) : ((((arr_32 [i_8]) << (((arr_32 [i_8]) - 6023526250248179801)))))));
        arr_33 [1] = (arr_32 [i_8 + 2]);
    }
    var_29 = (~(((min(var_2, 160)))));
    #pragma endscop
}
