/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (((arr_0 [i_0] [i_0]) * (((((arr_1 [i_0] [i_1 - 1]) | var_9)) * ((-(arr_1 [i_0] [i_1])))))));
                arr_5 [i_0 - 3] [i_0 - 3] [1] = (2233785415175766016 ^ 0);
                arr_6 [i_0] = arr_1 [i_0] [i_1];
            }
        }
    }
    var_10 = (max(var_10, (~0)));
    #pragma endscop
}
