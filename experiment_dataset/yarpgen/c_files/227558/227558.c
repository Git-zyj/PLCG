/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = (arr_5 [i_0]);
                var_12 = 3817206431;
            }
        }
    }
    var_13 = (!7890914221707200151);
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    arr_14 [i_2] [i_2] [i_3] [i_4] = ((((min((arr_8 [i_2]), 7971703520086845212)) > (arr_11 [i_4]))));
                    var_14 = (min(var_14, ((((~((var_6 ? 2631794973 : 1))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_19 [i_2] [i_3] [18] [i_2] [i_6] = (((((((arr_18 [i_2] [i_3] [i_4] [i_4] [i_4] [i_5] [1]) ? (arr_8 [i_2]) : (arr_18 [i_2] [i_2] [10] [i_2] [i_2] [21] [21]))) < (!var_10))) ? (max((arr_17 [i_6] [i_6] [i_6 + 2] [i_6 - 2] [1]), var_11)) : (arr_10 [i_2] [i_3] [i_5])));
                                var_15 += (arr_8 [8]);
                                var_16 = (max(var_16, (((~((-((242 ? (arr_16 [i_6] [i_4] [17] [i_2]) : (arr_17 [1] [i_4] [i_4] [5] [i_2]))))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
