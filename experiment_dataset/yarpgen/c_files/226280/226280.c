/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, ((((295222063 + 253) ? ((var_5 ? var_0 : 536870911)) : 295222063)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_1] [2] = var_8;
                var_13 = (arr_4 [i_0]);
                var_14 = (-(arr_3 [i_0] [i_1]));
            }
        }
    }
    #pragma endscop
}
