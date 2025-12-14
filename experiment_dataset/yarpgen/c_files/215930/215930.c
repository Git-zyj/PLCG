/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;
    var_19 = (min(((!(((var_10 ? var_0 : var_11))))), 1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = arr_4 [i_1];
                arr_6 [i_1] [i_1] [9] = ((((var_9 ? (((arr_2 [i_0] [i_1] [i_1]) ? var_14 : (arr_4 [i_0]))) : (arr_0 [i_0] [i_0])))) ? (arr_2 [i_0] [i_0] [i_1]) : 3);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] &= (min((min((arr_10 [i_0] [i_0] [i_3] [i_3] [i_3 + 1]), (arr_10 [i_0] [i_3] [i_2] [i_3] [i_3 - 1]))), (arr_10 [i_0] [i_1] [i_2] [i_3] [i_3 + 3])));
                            arr_12 [i_2] [2] [8] [i_2] = (arr_1 [i_0]);
                        }
                    }
                }
            }
        }
    }
    var_20 = var_14;
    #pragma endscop
}
