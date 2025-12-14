/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_18 = ((var_16 ? (arr_1 [i_1] [i_0]) : ((~(arr_1 [i_0] [i_1])))));
                arr_5 [i_0] [i_0] = ((min(var_13, (arr_3 [i_0] [i_0] [i_1]))));
            }
        }
    }
    var_19 = var_7;
    #pragma endscop
}
