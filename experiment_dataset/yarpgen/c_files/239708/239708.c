/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    var_15 = (max(var_15, var_2));
    var_16 = (max(var_16, ((((var_7 | 32512) ? var_1 : var_2)))));
    var_17 = -17745;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 |= (max(var_11, (arr_1 [0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, (((17745 < -8128879507347772304) + (((arr_4 [i_2 - 1] [i_2 - 1]) ? (arr_6 [i_1] [i_2 - 1] [i_2 + 1]) : (((arr_0 [i_0]) ? (arr_6 [1] [1] [1]) : (arr_2 [i_1])))))))));
                    var_20 = (min(var_20, 55062));
                }
            }
        }
        var_21 = ((-(((arr_0 [i_0]) ? var_2 : (arr_0 [i_0])))));
    }
    #pragma endscop
}
