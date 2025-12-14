/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((((((var_13 / var_4) ? (max(3836177358, var_6)) : var_14))) ? var_12 : var_7)))));
    var_16 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_17 = (min((max((min(var_3, (arr_6 [i_0] [i_1]))), ((max((arr_1 [i_2]), (arr_0 [i_2])))))), (max((arr_6 [i_0] [i_1]), (!var_7)))));
                    var_18 *= min(((((arr_6 [i_0] [0]) != (arr_0 [8])))), ((var_0 ? (arr_2 [i_0] [i_0]) : (max(var_7, (arr_5 [i_1] [i_2]))))));
                }
            }
        }
    }
    var_19 = (max(var_19, (((-((((min(var_0, var_4))) ? ((max(var_14, 214))) : 1)))))));
    #pragma endscop
}
