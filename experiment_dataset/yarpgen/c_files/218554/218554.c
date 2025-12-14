/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_16 += ((-(max((arr_1 [i_0 + 2]), (arr_1 [i_0 - 1])))));
                var_17 = (((-2147483647 - 1) & (arr_3 [i_0] [i_1])));
                arr_5 [i_0] [i_0] [i_0] = (arr_0 [i_0]);
                var_18 = (min((arr_1 [i_0]), (arr_4 [i_0])));
            }
        }
    }
    #pragma endscop
}
