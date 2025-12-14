/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((max((((var_1 << (var_14 - 17614)))), (3 % 17648698420935833684))) < (((((((var_12 ? var_9 : -6403349888796539250))) && var_6))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_17 = ((((((arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1]) ? (arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1]) : (arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1])))) ? (((var_4 ? (var_1 != var_7) : (max(var_5, (arr_3 [i_0])))))) : (((var_2 != 9223372036854775808) ? 106 : (9223372036854775803 * var_14)))));
                var_18 = (arr_0 [i_1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                var_19 = ((!((min(1, ((var_2 ? (arr_13 [i_3] [i_2] [i_2]) : -1947035859816075735)))))));
                var_20 &= ((!((((arr_12 [i_2] [i_3] [i_3]) ? var_8 : (arr_11 [i_2] [i_2] [i_2]))))));
                var_21 = (((((9223372036854775834 / (arr_13 [11] [i_3] [i_3])) >> (var_10 - 49)))));
                arr_15 [i_3] [i_3] [i_3] = 7990997805701800140;
                var_22 = (((!var_4) ? ((798045652773717931 + (arr_13 [i_3] [i_3] [i_2]))) : (((var_6 % (((arr_10 [i_3]) ? (arr_13 [i_3] [i_2] [i_2]) : 18578)))))));
            }
        }
    }
    var_23 = ((((var_10 != var_12) >> ((((7990997805701800140 ? var_13 : var_9)) - 18050078748689308842)))));
    #pragma endscop
}
