/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_12 = ((((max((min((arr_10 [i_3] [i_2] [i_1] [i_0] [i_0]), (arr_10 [i_0] [i_0] [i_2] [i_3] [i_3]))), ((((arr_2 [i_0]) ? (arr_9 [i_0] [i_0] [i_0]) : (arr_11 [i_0] [i_1] [i_0] [20] [i_2] [i_3]))))))) ? ((((((arr_2 [i_2]) ? (arr_8 [12] [i_1] [i_1] [14]) : (arr_7 [i_2] [15] [i_2])))) ? (min((arr_2 [8]), (arr_3 [i_0] [i_0]))) : (((min((arr_8 [i_0] [i_0] [8] [i_3]), (arr_11 [1] [i_3] [i_2] [i_1] [i_0] [i_0]))))))) : (((((arr_9 [i_0] [i_1] [i_2]) | (arr_9 [8] [i_1] [i_0]))) ^ ((((arr_1 [i_1]) | (arr_8 [i_3] [i_2] [i_1] [i_0]))))))));
                            arr_12 [i_3] [i_1] [19] = (((min((arr_4 [i_0]), (min((arr_11 [18] [i_2] [i_2] [i_1] [i_0] [i_0]), (arr_2 [i_0])))))) ? ((((arr_10 [i_1] [4] [i_1] [i_0] [2]) ? (((arr_9 [i_0] [i_1] [i_3]) ? (arr_5 [i_3] [i_0]) : (arr_1 [i_3]))) : (((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [11]) * (arr_9 [i_0] [i_0] [i_0])))))) : (((((197 ? 4842774258488761811 : 134213632))) ? 4846015638920467827 : -4842774258488761812)));
                        }
                    }
                }
                arr_13 [i_0] = ((((((((-(arr_11 [i_0] [7] [i_0] [i_0] [i_0] [i_0])))) ? ((((arr_10 [16] [i_1] [i_1] [i_0] [i_0]) ? (arr_1 [2]) : (arr_2 [i_0])))) : (((arr_6 [i_1]) ? (arr_10 [i_1] [15] [i_0] [i_0] [i_0]) : (arr_7 [i_0] [i_0] [i_1])))))) ? (((((arr_1 [8]) + (arr_7 [i_1] [i_0] [i_0]))) + (((arr_10 [i_0] [i_0] [i_1] [i_0] [i_1]) - (arr_6 [i_0]))))) : ((((((arr_6 [i_0]) ? (arr_2 [i_0]) : (arr_4 [i_0]))) - ((((arr_2 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))))))));
            }
        }
    }
    var_13 = (((((((min(var_8, var_0))) ? ((var_0 ? var_8 : var_0)) : (((max(var_4, var_3))))))) ? (((((var_0 ? var_3 : var_8)) > (((var_3 ? var_4 : var_1)))))) : (((4846015638920467825 < -4842774258488761812) ? ((var_2 ? var_4 : var_1)) : ((var_8 ? var_7 : var_3))))));
    var_14 = (min(190, 65));
    #pragma endscop
}
