/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((((((1024 ? var_12 : var_18))) & (max(var_8, var_15))))))));
    var_20 = (max((((var_0 && var_8) + ((var_4 ? var_3 : var_6)))), ((max(var_0, (min(var_0, var_18)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_0] = ((((arr_8 [i_2] [i_1] [i_2]) ? (((-(arr_1 [i_2])))) : (((arr_11 [i_0] [i_2] [i_2 - 1] [i_3]) ? (arr_9 [i_0] [i_1 - 1] [i_1] [i_2] [i_3]) : var_4)))));
                            var_21 += (((arr_10 [i_1] [1] [i_1] [i_1 - 1]) - ((min((arr_3 [i_1 - 1]), (arr_3 [i_1 - 1]))))));
                        }
                    }
                }
                arr_13 [i_1 + 1] = (min(var_4, var_15));
                arr_14 [i_1] [i_0] = (((((arr_5 [i_0 - 1]) ? (arr_5 [i_0 + 1]) : (arr_5 [i_0 + 2]))) % ((((arr_5 [i_1 + 1]) ? (arr_0 [i_0 + 1] [i_1 - 1]) : (arr_0 [i_0 - 1] [i_1 - 1]))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_22 &= ((!((!((min((arr_4 [i_4] [i_0 + 2]), var_16)))))));
                            var_23 = max((arr_3 [i_5]), (max(11, (arr_5 [i_1]))));
                            var_24 &= ((((min((arr_11 [i_0 + 2] [i_0 + 2] [3] [i_5 - 2]), (((arr_15 [i_0 + 1] [i_1] [19] [i_5]) ? var_4 : var_9))))) ? (arr_2 [i_0]) : (max(-1, 10239283009552583913))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
