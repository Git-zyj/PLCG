/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((((-((max(var_5, var_2)))))) ? (((((((var_0 ? var_6 : 1))) <= (max(var_5, var_7)))))) : (min((((var_1 ? 1 : 1))), ((var_1 ? 1 : var_8))))));
                arr_6 [10] &= -var_7;
            }
        }
    }
    var_12 = (((((var_7 ? 1 : 1))) ? -var_3 : (((((var_1 ? var_4 : 1))) ? ((1 ? var_10 : var_2)) : var_11))));
    #pragma endscop
}
