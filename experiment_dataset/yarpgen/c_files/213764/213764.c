/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((!((max((max((arr_3 [i_1]), (arr_0 [i_0]))), (arr_0 [i_0]))))));
                var_18 = ((((min(((((arr_3 [i_0]) == (arr_3 [i_1])))), ((var_15 ? 4423203659146388067 : (arr_3 [i_0])))))) ? (((((var_10 ? var_0 : -29513))) ? -279911535 : (max(3747219049, 5189013337890619786)))) : var_9));
                var_19 = (~((max((max((arr_2 [i_0] [i_0] [i_0]), var_2)), (!-5189013337890619787)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_20 = (min(var_20, ((max(((((((-296684617 ? -5189013337890619787 : (arr_5 [i_3])))) ? 53555 : ((max(var_17, var_8)))))), ((var_1 ? (min((arr_6 [i_4] [i_3]), var_6)) : (arr_1 [i_2]))))))));
                    var_21 = (((arr_1 [i_4]) + (arr_0 [i_4])));
                    var_22 = ((!(arr_3 [i_2])));
                    arr_13 [i_2] [i_2] = (((((((arr_7 [i_2] [i_2] [i_2]) >> (11981 - 11977)))) ? 1 : (arr_5 [i_2]))));
                }
            }
        }
    }
    #pragma endscop
}
