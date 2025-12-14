/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= max(((-((min(var_2, var_18))))), (((!-1) ? (2705731784 && var_13) : (max(var_10, var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                var_20 ^= (max((max((max((arr_3 [i_0] [i_1]), 2147483647)), (arr_0 [i_1 - 3]))), ((+(((arr_1 [i_0] [10]) ? (arr_3 [i_0] [1]) : 185))))));
                arr_5 [i_0] [i_0] [i_1 - 2] = ((-(arr_2 [i_0])));
            }
        }
    }
    #pragma endscop
}
