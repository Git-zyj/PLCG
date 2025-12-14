/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                var_18 = (((max((arr_3 [i_0 - 1]), (arr_4 [i_0 + 3] [i_1 + 1])))) ? ((17326388708421195172 ? (arr_4 [i_1] [i_0]) : 1185823600945294767)) : (max((max((arr_2 [i_0] [23]), (arr_4 [i_1] [i_0]))), 18446744073709551615)));
                arr_5 [2] [2] |= ((((arr_2 [i_0] [i_1 + 1]) / (arr_2 [22] [i_1 - 2]))) >> (((((arr_4 [22] [0]) ? (max(17326388708421195144, 18446744073709551615)) : ((var_4 ? var_5 : 2342358303844014147)))) - 18446744073709551604)));
            }
        }
    }
    var_19 = (max(var_19, (min(((var_0 << (((min(1120355365288356452, var_17)) - 1120355365288356391)))), (!var_9)))));
    #pragma endscop
}
