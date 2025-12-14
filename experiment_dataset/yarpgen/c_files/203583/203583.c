/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_12 = ((~(((((arr_5 [i_1]) && var_9)) ? ((((arr_1 [i_0 - 1] [i_1]) ? (arr_6 [i_0]) : (arr_2 [i_1])))) : (min(201838263, (arr_6 [4])))))));
                arr_7 [i_0] [10] [i_1] = (arr_1 [i_0 - 1] [i_1 + 2]);
                var_13 = ((((~(max(-7405193086040250662, 8913690282768676990))))) ? (min((arr_1 [i_1 - 2] [i_0]), (((!(arr_5 [i_0 - 1])))))) : var_8);
            }
        }
    }
    #pragma endscop
}
