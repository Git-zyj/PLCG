/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= (!15055);
    var_17 = ((var_5 ? (((((var_11 ? var_2 : var_2)) + var_3))) : (max(var_8, var_1))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1 - 1] = ((-87 ? 1835913302 : 1));
                    arr_10 [i_0] [i_1] [i_0] [i_1] = ((((arr_6 [i_0]) / (max(1731666857564912760, -14)))));
                }
            }
        }
    }
    var_18 = var_14;
    #pragma endscop
}
