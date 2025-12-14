/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = var_3;
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_15 = (min(((min(var_7, (var_1 & var_7)))), (max(((var_10 * (arr_6 [i_3] [i_1] [i_1]))), var_8))));
                            var_16 = (arr_7 [i_3] [i_3] [i_3]);
                            arr_11 [i_0] [15] [i_1] [i_2] [i_1] = var_6;
                            var_17 = ((((max((min(var_8, (arr_4 [i_3] [i_2] [i_0]))), ((((arr_2 [i_0] [i_0] [i_0]) ? (arr_4 [i_0] [i_0] [i_0]) : var_2)))))) && var_11));
                            var_18 = (max(var_18, var_11));
                        }
                    }
                }
                arr_12 [i_1] [i_1] = (min((max((arr_5 [0] [i_1] [i_1] [i_1]), (((arr_4 [i_0] [i_0] [i_1]) & (arr_6 [i_0] [i_1] [i_1]))))), ((((((var_3 - (arr_2 [i_0] [i_1] [i_1])))) ? (((var_9 != (arr_2 [i_0] [i_1] [i_0])))) : var_12)))));
                var_19 &= ((((((((arr_1 [i_0]) ? (arr_5 [12] [6] [i_0] [4]) : (arr_3 [i_0] [i_0]))) - (var_10 | var_3)))) ? ((max((arr_5 [i_0] [i_1] [i_0] [2]), var_11))) : var_11));
            }
        }
    }
    var_20 = ((((((var_10 / var_6) | (min(var_5, var_4))))) ? (((((max(var_4, var_3))) || var_4))) : var_2));
    #pragma endscop
}
