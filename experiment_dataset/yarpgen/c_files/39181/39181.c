/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_1] = (max((arr_6 [i_2] [i_0]), (max((arr_1 [i_2]), (min(var_2, (arr_6 [i_0] [i_2])))))));
                    var_21 = ((((max(-7442, (arr_6 [i_0] [i_1])))) ? (arr_0 [i_0]) : (((((var_12 ? var_0 : (arr_5 [i_1]))))))));
                    var_22 = ((max((max((arr_0 [i_0]), (arr_5 [i_1]))), (((arr_4 [2] [i_1] [9] [i_2]) ? var_10 : 7446)))) - ((((arr_6 [i_2] [i_0 + 3]) ? (arr_6 [i_1] [i_0 - 1]) : var_18))));
                }
            }
        }
    }
    var_23 = ((var_10 ? (((min(var_17, var_14)))) : (max(var_17, (var_18 / var_9)))));
    var_24 = (~1544152326);
    #pragma endscop
}
