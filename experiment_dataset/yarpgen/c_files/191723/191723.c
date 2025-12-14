/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;
    var_15 += var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_1] |= (min(((((min(var_9, (arr_3 [i_0] [i_1] [i_1])))) ? (min(-52, (arr_2 [i_0] [i_1]))) : (arr_2 [i_1] [i_0]))), ((((((arr_1 [i_1]) | 1)) ^ 3)))));
                arr_5 [i_1] |= ((((((arr_2 [i_0] [i_0]) + (arr_2 [i_0] [i_1])))) ? (min((arr_0 [i_1]), ((18 ? 18298097388852667965 : 1)))) : (arr_3 [i_0] [i_1] [i_1])));
                var_16 += (min((max((arr_3 [i_0] [i_0] [i_0]), (arr_3 [i_1] [i_1] [i_1]))), (min((arr_0 [i_1]), (arr_3 [i_0] [i_1] [i_1])))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_12 [i_1] [i_2] [i_2] = (arr_10 [10] [i_1] [i_2] [i_3] [i_1]);
                                var_17 += (max(((79794536 / (arr_6 [i_3] [i_1] [i_3]))), (((arr_7 [6] [i_3 + 1] [i_2 + 1]) * (arr_7 [i_3] [i_3 - 1] [i_2 - 1])))));
                                var_18 |= (arr_10 [i_0] [i_1] [i_2] [i_3] [i_4]);
                                arr_13 [i_0] &= ((((((arr_0 [i_4]) / (min(232, -1503968743))))) ? (arr_10 [i_4] [i_0] [13] [i_1] [i_0]) : (((252 || (arr_3 [i_2 - 1] [i_2 + 1] [i_4]))))));
                                var_19 = min((((arr_1 [i_3 - 2]) ? (~192) : (arr_10 [i_2] [i_2 - 1] [i_2] [i_2 + 1] [i_3 - 3]))), (((arr_6 [i_3 + 1] [i_3] [i_2 + 1]) ? (arr_6 [i_3 + 1] [i_3 + 1] [i_2 + 1]) : (arr_6 [i_3 + 1] [i_1] [i_2 + 1]))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = var_7;
    var_21 = ((((max((12846828720271569536 | var_3), (var_0 & 237)))) ? ((((((var_6 ? var_11 : 91))) ? ((var_4 ? var_11 : 34970)) : (var_9 > var_1)))) : ((((min(2, var_10))) ? (min(6676899358434355756, var_8)) : var_0))));
    #pragma endscop
}
