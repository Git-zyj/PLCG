/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((~((var_9 >> (var_15 - 41)))))) || -241));
    var_17 *= (!var_9);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = (((((arr_0 [i_0 - 1] [i_1]) ? ((21415 ? 9223371487098961920 : (arr_1 [i_0]))) : (!27))) | (((~(arr_2 [i_0]))))));
                var_19 = ((-(--6905684959179019310)));
                arr_6 [i_1] = 1;
                var_20 = (~111356740);
            }
        }
    }
    #pragma endscop
}
