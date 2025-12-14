/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, ((min(((var_4 ? (arr_5 [i_0] [i_1] [i_1]) : var_13)), 3400661546)))));
                    var_19 -= ((!((min(65535, var_0)))));
                }
            }
        }
    }
    var_20 -= (((((min(var_3, var_7)) ? 0 : (var_7 - var_13)))));
    var_21 |= (min(var_3, (min(var_5, var_1))));
    #pragma endscop
}
