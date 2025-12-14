/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_19 = (min(var_19, ((((max((((arr_4 [i_0]) ? 179 : (arr_3 [i_0] [i_0] [i_1]))), ((((arr_4 [i_1]) || (arr_1 [i_0]))))))) ? ((max(var_9, var_4))) : (max(((581636077 ? (arr_5 [i_0]) : var_13)), -var_8))))));
                arr_6 [i_0] [10] [i_1] = ((((((arr_4 [i_0]) > 1567869809))) >> (((var_17 | -19948) + 16689))));
            }
        }
    }
    var_20 = ((((max(179, 177))) ? ((var_9 ? (min(674432127, 28)) : var_2)) : (((17 > 43118) - ((var_16 ? var_15 : var_8))))));
    var_21 = 9222809086901354496;
    #pragma endscop
}
