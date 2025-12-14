/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((~var_7) ? (var_10 | var_15) : var_16)));
    var_21 = (max(var_21, (((var_0 ? (((~1) ? (((var_9 ? var_12 : var_12))) : ((62914560 ? var_17 : var_1)))) : var_18)))));
    var_22 = (((max(1, var_2)) & (((~(min(var_7, var_5)))))));
    var_23 = (max(var_23, ((max((0 && 134217664), var_18)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_24 = ((114 ? 62914554 : (((min((arr_2 [i_1 - 2] [i_0 - 3] [6]), (arr_2 [i_1 + 2] [i_0 + 2] [i_2])))))));
                    arr_10 [1] [0] [10] = ((~((-(-1890312343 / 8422)))));
                }
            }
        }
    }
    #pragma endscop
}
