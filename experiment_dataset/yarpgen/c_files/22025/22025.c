/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((!0) * (1 ^ -9061334262081226814)))) ? 32749 : (min(-var_14, 6)));
    var_17 = ((((1 + (-9223372036854775807 - 1)))) ? var_14 : 0);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = (arr_4 [i_1]);
                arr_7 [i_0] [i_1] = (min((max((arr_4 [i_1]), (arr_2 [i_1]))), (min(var_5, (arr_1 [i_0])))));
            }
        }
    }
    var_18 = var_7;
    #pragma endscop
}
