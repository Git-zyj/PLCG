/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_9;
    var_16 = (min((((var_1 > ((9235 ? var_1 : var_4))))), ((-(var_4 | var_8)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 = (min((arr_3 [i_0]), ((var_2 ? 22326 : (arr_8 [i_0] [i_1] [i_2])))));
                    var_18 = (min(var_18, (((((((var_14 - 22326) ? var_8 : var_0))) ? (max(var_4, ((var_14 ? (arr_4 [i_2] [i_2]) : var_14)))) : var_12)))));
                }
            }
        }
    }
    var_19 = ((((((((var_7 ? var_12 : var_10)) < 43200)))) - ((var_12 ? var_10 : ((4103074624 ? var_4 : -9223372036854775801))))));
    #pragma endscop
}
