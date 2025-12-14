/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= (((min(((var_5 ? var_13 : var_12)), (((var_5 ? var_10 : var_16)))))) ? ((var_6 ? (var_13 / var_4) : var_9)) : var_1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_21 += var_2;
                var_22 = (arr_4 [i_1] [i_0]);
                arr_7 [i_0] [i_1 + 2] = (arr_0 [i_0]);
            }
        }
    }
    var_23 = (min(var_8, var_16));
    #pragma endscop
}
