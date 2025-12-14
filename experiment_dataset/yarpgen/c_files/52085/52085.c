/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_12 &= (max((((arr_7 [i_1 + 1] [i_1 - 1]) ? 224 : var_8)), (min(-1, (((arr_0 [6]) ? 1 : (arr_7 [i_0] [11])))))));
                    var_13 = (max(var_13, (((((((max(var_6, (arr_2 [i_1])))) + 1))) ? (min((arr_7 [i_2] [i_1 - 1]), (arr_6 [i_2] [i_1] [i_0] [i_1]))) : (((min((arr_3 [i_1] [i_1 + 1] [i_1 + 1]), (arr_3 [i_1] [i_1] [i_1 + 1])))))))));
                    arr_8 [i_1] [i_1] [i_1] = (max(var_4, ((var_9 ? var_9 : var_4))));
                    var_14 |= ((!(var_0 * var_8)));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_15 [3] [i_0] [i_1] [i_3] [i_4] = (((((+((1 ? (arr_10 [i_0] [11] [11] [i_3] [i_3] [i_4]) : var_2))))) ? ((max(((min(var_7, var_6))), (((arr_2 [i_0]) ? var_1 : 10))))) : (min((((arr_10 [7] [7] [i_2] [i_1] [i_4] [i_2]) & 3540094518)), (((-(arr_14 [i_3] [i_1 + 1] [i_1 + 1] [i_3] [i_4] [i_1] [i_4]))))))));
                                arr_16 [i_1] = (max(((21266 ? ((max(var_7, var_4))) : ((var_5 ? 16957535482103411043 : (arr_0 [i_2]))))), ((var_0 >> (1977729628 - 85)))));
                                var_15 = (max(((3272959122 ? (arr_4 [i_0] [i_0]) : (arr_4 [i_4] [i_4]))), ((var_4 ? (arr_4 [i_2] [i_4]) : (arr_4 [i_0] [i_1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = ((max((min(var_4, var_1), (260096 / var_3)))));
    #pragma endscop
}
