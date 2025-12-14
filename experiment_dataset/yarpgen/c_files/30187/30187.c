/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_6 ? (((var_14 ? var_9 : (min(var_14, var_13))))) : ((var_13 * (!var_0)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_2] [i_1] [i_1] = ((((min(-3902842345422481271, 2719887993))) ? (arr_1 [i_0]) : (((var_5 ? (arr_1 [i_1]) : var_6)))));
                    arr_11 [i_1] = ((((((arr_9 [i_2] [i_0 - 1] [19]) ? (arr_6 [i_0 - 2] [i_1] [i_0 + 1]) : (arr_6 [i_0] [i_1] [i_0 + 1])))) ? (min((arr_6 [i_0 - 2] [i_1] [i_0 - 1]), (arr_9 [18] [i_0 + 1] [7]))) : (min((arr_9 [i_1 - 3] [i_0 - 2] [i_0]), (arr_6 [8] [i_1] [i_0 - 1])))));
                    var_17 &= ((((7759736126073992756 ? (((var_4 ? (arr_7 [i_0] [7] [i_0]) : var_11))) : ((var_1 ? (arr_6 [20] [20] [i_0]) : (arr_8 [i_0 + 1]))))) / ((((((arr_0 [8] [1]) ? (arr_6 [i_0 - 2] [1] [i_0 - 2]) : var_6))) ? ((min(var_0, (arr_7 [i_2] [1] [i_0])))) : (min((arr_6 [i_0] [16] [i_2]), var_4))))));
                    var_18 = (((((((((arr_0 [18] [18]) + 2147483647)) << (((arr_7 [i_2] [i_1 + 2] [i_0]) - 45))))) ? (arr_9 [i_0] [i_1] [i_2]) : var_7)));
                    var_19 = (((arr_1 [i_0 - 1]) ? ((min((arr_1 [i_0 - 1]), var_10))) : (((!(arr_1 [i_0 - 1]))))));
                }
            }
        }
    }
    var_20 |= ((((((var_7 ? var_14 : var_5)))) ? var_3 : (min(var_9, ((min(var_5, var_6)))))));
    var_21 = (!2022768006);
    #pragma endscop
}
