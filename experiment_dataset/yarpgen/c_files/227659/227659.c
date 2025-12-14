/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min(((!(((-(arr_1 [i_0])))))), (((arr_0 [i_0]) || (((0 ? (arr_0 [i_0]) : (arr_0 [i_0]))))))));
        arr_3 [i_0] = (!(((13965770043520967484 * (arr_0 [i_0])))));
        arr_4 [i_0] = (max((arr_1 [i_0]), (((1 && (arr_1 [i_0]))))));
        arr_5 [i_0] [i_0] = 2147483647;
        arr_6 [i_0] = (min(var_9, (arr_0 [i_0])));
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            {
                                arr_21 [i_3] = (i_3 % 2 == zero) ? (((((max((arr_18 [i_3] [i_3] [i_1 - 1] [i_3] [i_1 - 1]), 30))) ? ((1 << (((arr_13 [i_3] [i_5] [i_1 + 1]) - 15)))) : (((!(arr_18 [i_2] [i_3] [i_1 + 2] [i_3] [i_1 + 1]))))))) : (((((max((arr_18 [i_3] [i_3] [i_1 - 1] [i_3] [i_1 - 1]), 30))) ? ((1 << (((((arr_13 [i_3] [i_5] [i_1 + 1]) - 15)) - 22)))) : (((!(arr_18 [i_2] [i_3] [i_1 + 2] [i_3] [i_1 + 1])))))));
                                var_14 = (max(1, (max((min((arr_17 [i_1] [i_2] [i_3] [i_3] [i_5]), (arr_7 [i_2] [i_2]))), ((max(var_10, var_6)))))));
                                var_15 = ((((((!(arr_0 [i_1 + 1]))))) < (arr_16 [i_1 + 2])));
                            }
                        }
                    }
                    arr_22 [i_3] [i_2] [i_2] [1] = (1 == 1);
                    arr_23 [i_3] [i_3] = (((((min(44634, 1)))) <= (arr_16 [i_3])));
                    arr_24 [i_3] [i_2] [i_3] [i_3] = (((((-(arr_11 [i_1 - 1])))) && (arr_19 [i_3] [i_1 + 1] [i_1 + 3] [i_1])));
                    arr_25 [i_3] [i_2] [i_1] [i_3] = ((6964833245605251740 >= (((arr_15 [i_1 - 1] [i_1] [i_3] [i_1] [i_3] [i_3]) * (arr_13 [i_3] [i_2] [i_3])))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    {
                        var_16 *= ((!(((-(arr_11 [i_1 + 3]))))));
                        var_17 -= 16383;
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    {
                        var_18 = ((((arr_28 [i_1 + 2] [i_1 + 2] [i_1]) - 1)) >> ((+((((arr_19 [i_11] [i_9] [i_10] [i_10]) && (arr_13 [i_11] [i_10] [i_11])))))));
                        arr_45 [i_11] [i_10] [2] [2] [i_9] [i_1] |= (max(((((((arr_39 [i_11] [i_1]) - var_13))) ? ((max(var_13, var_5))) : (max((arr_39 [i_1] [i_10]), (arr_29 [i_11] [1]))))), ((max((arr_38 [i_1 + 2]), (arr_38 [i_1 + 3]))))));
                        arr_46 [i_1] [i_1] [i_11] [i_10] [i_11] = (((((arr_39 [i_11] [i_1 - 1]) ? (arr_30 [i_11]) : (arr_39 [i_1] [i_1 - 1]))) & (((-(arr_26 [i_11]))))));
                        var_19 = ((-((~((var_9 / (arr_19 [i_11] [i_9] [i_10] [i_10])))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 21;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 21;i_13 += 1)
            {
                {
                    var_20 = (max(var_20, (((-(arr_18 [i_1] [16] [i_12] [i_13] [i_13]))))));
                    var_21 *= var_1;
                    var_22 = (max(var_22, (((!((((arr_14 [6] [6]) ? (arr_49 [i_1 - 1]) : var_10))))))));
                }
            }
        }
        var_23 = (min(var_23, (((!(((((!(arr_9 [i_1 + 1] [i_1 - 1])))) <= (~1))))))));
    }
    var_24 = ((var_7 ? var_7 : (max(var_6, (max(var_1, 0))))));
    #pragma endscop
}
