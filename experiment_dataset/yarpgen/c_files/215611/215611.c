/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_1] = (min((min((min(17592186044352, 15638178822597325395)), ((((arr_1 [i_1]) ? (arr_3 [i_1] [i_0] [0]) : var_1))))), -18446726481523507263));
                arr_5 [i_1] = (((arr_1 [i_0]) ? (arr_3 [i_0] [i_0] [i_0]) : 17592186044347));
            }
        }
    }
    var_11 = (((var_3 ? var_9 : var_1)) + ((((var_9 == var_8) * (var_1 + var_2)))));
    var_12 = (var_8 & (((var_4 == var_9) ? (((var_0 ? var_10 : var_10))) : var_0)));
    #pragma endscop
}
