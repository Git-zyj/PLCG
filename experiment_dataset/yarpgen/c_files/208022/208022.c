/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    var_16 = 1;
    var_17 = var_12;
    var_18 = (min(var_18, var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = (min(var_19, ((~(((arr_5 [i_1]) ? (arr_5 [i_0]) : (arr_5 [3])))))));
                var_20 += ((((((arr_1 [i_0]) ? 21 : (arr_2 [i_1])))) || ((((!32463) ? ((var_7 ? (arr_5 [i_0]) : (arr_1 [10]))) : ((25812 ? 0 : -1)))))));
                arr_6 [11] [11] [i_0] = (max((((!(21 + 33073)))), ((((((arr_3 [i_0] [i_1] [i_1]) | 1358191533))) ? -0 : ((0 ? var_0 : -55))))));
            }
        }
    }
    #pragma endscop
}
