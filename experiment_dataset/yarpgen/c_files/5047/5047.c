/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_20 = (((!44) >> (-var_11 - 14720740030975528856)));
                var_21 = 0;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_22 = ((var_6 ? (min(((var_14 ? (arr_4 [i_3] [i_2]) : var_13)), (((!(arr_2 [i_3] [i_3])))))) : (min((84 & 1), ((1 ? -2574555803816892636 : 255))))));
                var_23 = (((((((((arr_0 [i_2] [15]) - var_8)) + 9223372036854775807)) << ((((var_0 ? var_17 : var_15)) - 373940733708579267)))) ^ ((((max(var_9, -84))) ? (((arr_0 [i_3] [i_2]) ^ var_8)) : var_10))));
            }
        }
    }
    #pragma endscop
}
