/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += ((var_1 && (((min(var_11, var_14))))));
    var_17 = var_12;
    var_18 = (((var_9 ? var_3 : var_4)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((var_2 && ((((arr_1 [i_1] [i_0]) ? 34 : (((arr_3 [i_0]) * var_0)))))));
                var_19 = (min(var_19, ((((arr_4 [i_0] [i_0]) | ((min((min(59115, 34)), ((min((arr_0 [16]), (arr_0 [10]))))))))))));
                var_20 = (min(((min((arr_4 [i_0] [i_0]), ((var_6 ? 64 : var_2))))), (min((arr_2 [i_0]), (arr_3 [i_0])))));
            }
        }
    }
    #pragma endscop
}
