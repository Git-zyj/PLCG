/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_15 = (arr_2 [i_0] [i_1] [i_0]);
                var_16 = ((((((((max((arr_1 [i_0]), (arr_1 [7]))) + 2147483647)) << ((((min(65535, var_7))) - 26559))))) ? (arr_2 [i_0] [1] [i_1 - 1]) : ((max((arr_3 [i_0 + 2]), (arr_3 [i_0 - 2]))))));
            }
        }
    }
    #pragma endscop
}
