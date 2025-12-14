/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, ((min((((((var_2 + 2147483647) << (((var_2 + 1024228154) - 1)))))), -var_0)))));
    var_13 = (min(var_11, (((var_4 && var_0) & (var_9 > 0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = min((min((!2147483647), (arr_2 [i_1 + 1]))), (((arr_1 [i_1]) ? (arr_1 [i_0]) : (((2147483624 < (arr_2 [i_1])))))));
                arr_6 [i_1] = ((((min(((569136331 ? var_2 : var_5)), 32))) && ((max((max(var_6, -1456853284)), (-2147483647 - 1))))));
                var_14 = (min(2147483647, (min((32351 != 8986780426379928291), -2147483627))));
            }
        }
    }
    var_15 = var_5;
    var_16 |= 9223372036854775807;
    #pragma endscop
}
