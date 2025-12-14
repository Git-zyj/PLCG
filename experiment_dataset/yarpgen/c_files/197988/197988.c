/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((-(min((arr_4 [2] [i_1] [i_1]), (arr_0 [i_1])))));
                var_16 = (((arr_3 [i_0] [i_1]) ? ((max(38, (arr_0 [i_1])))) : (min((arr_0 [i_1]), ((var_0 ? var_15 : (arr_3 [i_0] [i_1])))))));
                arr_6 [i_0] = ((((min(((var_2 ? (arr_3 [10] [i_1]) : 65)), ((3 & (arr_2 [2] [2])))))) ? ((((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : var_9))) : (((arr_1 [1] [i_0]) ? (min(1, (arr_4 [2] [2] [i_0]))) : (var_1 | var_11)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [6] [i_2] [i_2] [1] = (min(((~(var_15 + var_15))), ((-(((arr_0 [3]) + 44))))));
                            var_17 = (max(var_17, (((var_13 ? (((((((var_7 ? -3 : var_2)) + 2147483647)) >> (var_7 - 231)))) : (max(((var_6 ? var_14 : 236)), var_15)))))));
                        }
                    }
                }
                var_18 &= (((((~var_12) ? ((((arr_9 [i_1] [i_1] [0]) <= 15599))) : ((max(1, var_3)))))) ? -11 : (arr_7 [i_0] [i_0]));
            }
        }
    }
    var_19 = var_13;
    #pragma endscop
}
