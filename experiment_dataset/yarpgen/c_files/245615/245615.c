/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_15 += (((((3682044437925791486 ? (arr_0 [i_1 + 1]) : 35402))) ? (((var_1 - var_4) ? ((var_10 / (arr_2 [i_0]))) : (!var_2))) : ((((arr_0 [i_0 - 2]) ? (arr_3 [i_0 + 1]) : var_0)))));
                arr_4 [i_0] [i_1 - 2] [i_1] &= (arr_3 [i_0]);
                var_16 = ((var_8 ? (arr_3 [i_0 + 2]) : (((((arr_0 [i_0]) > var_0))))));
                var_17 = (max((~1), (arr_0 [i_0 + 2])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_18 = ((var_2 ? ((min((arr_3 [i_0 - 1]), 42187))) : (((arr_3 [i_0 - 1]) - (arr_3 [i_0 - 1])))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] [i_2] = ((!(((arr_8 [i_0 - 2] [i_1 - 2] [5] [i_3]) || var_6))));
                                arr_14 [i_3] [i_1] [i_4] = (((!(arr_12 [i_4 + 1]))));
                                var_19 = (max(((-(arr_9 [i_1 - 2] [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_1] [i_1] [i_1 + 1]))), -var_11));
                                var_20 = (max((((((~(arr_11 [i_0 + 1] [i_0] [i_1] [1] [i_1] [i_3] [1])))) ? (((arr_7 [i_0 - 1] [i_1 - 1] [1] [i_2] [i_3] [i_4]) ? var_4 : 831682355586206078)) : (((~(arr_5 [i_0 - 2] [3])))))), (((!((min(17615061718123345552, 1497324763))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (max(((var_8 ? (700029597 & var_1) : ((var_6 ? var_1 : var_11)))), (((max(831682355586206064, -29059))))));
    #pragma endscop
}
