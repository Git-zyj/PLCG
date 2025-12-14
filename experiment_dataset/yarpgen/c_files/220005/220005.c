/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = ((var_11 ? -503316480 : (((((min(var_2, 1609773695))) ? (min((arr_3 [i_0 + 1]), 1728191448)) : 1728191448)))));
                var_17 = 65535;
            }
        }
    }
    var_18 = ((-var_2 * ((var_5 ? var_2 : (min(var_7, -1728191448))))));
    #pragma endscop
}
