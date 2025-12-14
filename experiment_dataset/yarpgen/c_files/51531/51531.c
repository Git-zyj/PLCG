/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] = ((((((((-38 ? 37 : (arr_2 [i_0])))) ? ((max((arr_3 [i_0]), (arr_2 [i_0])))) : ((1 ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : -37))))) ? -var_7 : ((-35412 - (arr_2 [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_4 + 1] = ((((((arr_12 [i_0] [i_3] [3] [i_1] [i_1] [i_0]) ? (arr_10 [i_0 + 2] [i_1] [i_0 + 2] [i_3] [i_4 + 3]) : 25)) << (((arr_10 [i_0 + 1] [13] [i_0 + 2] [3] [i_0]) - 17825547662728037573)))));
                                arr_15 [i_0 - 2] [i_0 + 2] [i_0] = (((((((!(arr_5 [i_0]))) ? (((arr_0 [i_0] [4]) ? (arr_12 [i_0] [14] [i_3] [i_2] [17] [i_0]) : (arr_11 [i_0 - 1] [1] [10] [i_3] [9] [i_0]))) : (!var_3)))) || (((-((~(arr_3 [i_0]))))))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 1; i_5 < 19;i_5 += 1)
    {
        var_10 *= (((((((arr_9 [2] [i_5] [0] [i_5] [4]) / (arr_11 [12] [i_5] [i_5 + 1] [i_5 + 1] [18] [12]))) - -12)) * (((-(min((arr_3 [20]), (arr_12 [20] [i_5] [i_5] [i_5] [i_5 + 2] [20]))))))));
        var_11 *= ((0 ? ((var_3 ? 1 : 37)) : -37));
        arr_18 [4] &= (max((((~(((arr_9 [i_5 + 2] [i_5] [1] [i_5] [8]) ? -5088 : (arr_16 [i_5])))))), ((~((var_7 ? var_6 : var_0))))));
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        var_12 ^= (max(((-25 ? ((-38 ? (-127 - 1) : 0)) : -var_9)), ((((arr_17 [i_6]) == -534291619)))));
        arr_22 [8] = (((max((arr_21 [i_6]), -4196133103391153760)) < ((((arr_21 [i_6]) << (((arr_11 [i_6] [8] [i_6] [i_6] [i_6] [i_6]) - 6679694046208233303)))))));
        arr_23 [i_6] [1] &= min(((max((~-1049765797), ((max(var_4, var_1)))))), (((arr_20 [i_6]) ? (((min((arr_1 [i_6]), 0)))) : 17651789329065250262)));
    }
    #pragma endscop
}
