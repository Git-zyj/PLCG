/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((max((var_11 & var_15), var_13)), ((min(var_0, ((174 ? -1 : 90)))))));
    var_19 = ((~((((24 ? 45322 : 807908086)) >> ((((var_0 ? 30803 : var_8)) - 30793))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] = (((((((arr_2 [5] [i_0 + 1]) + -6073)) + 2147483647)) << (((((arr_0 [i_0 + 1]) ? var_1 : var_16)) - 92))));
                var_20 = (((((var_6 ? (arr_0 [i_0 - 2]) : var_2))) || ((min(-31925, -8232210426239784953)))));
            }
        }
    }
    #pragma endscop
}
