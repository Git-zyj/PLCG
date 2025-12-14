/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_20 = (arr_5 [21] [i_0] [11]);
                var_21 = (((arr_3 [i_1]) ? var_0 : 8927180845877125864));
                var_22 = ((-var_8 - (max(9007199237963776, var_9))));
                var_23 = (min(var_23, ((min((arr_6 [i_0]), (((var_0 & -32765) ? ((1 ? 18437736874471587831 : 18345)) : 1)))))));
            }
        }
    }
    var_24 = var_11;
    #pragma endscop
}
