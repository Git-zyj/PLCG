/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((min((arr_0 [i_0] [i_0]), 15969124828274785964)) ^ (arr_0 [i_0] [i_0]));
                var_19 = (max(var_19, ((((arr_0 [i_0] [i_1]) * (((arr_3 [i_0 + 1]) * (arr_2 [i_0 - 1]))))))));
                var_20 = (max((var_2 || var_5), (arr_3 [i_1])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 11;i_3 += 1)
        {
            {
                arr_12 [i_3] = (max(((((((-71 ? (arr_6 [i_2] [i_2]) : var_15))) == 2477619245434765652))), (max((arr_1 [i_2] [i_2]), (max(var_13, var_14))))));
                var_21 = ((((((((arr_0 [i_2 + 1] [i_3 + 1]) + var_16)) >> (min((arr_8 [i_3]), 3410798398264275509))))) * var_4));
            }
        }
    }
    #pragma endscop
}
