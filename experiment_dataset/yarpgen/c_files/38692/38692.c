/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_16 |= ((((arr_1 [i_1] [i_1 + 2]) ? ((min((arr_1 [i_0 + 1] [i_1]), 224))) : (arr_4 [i_0 - 2]))));
                arr_5 [i_0] [16] [i_0] = ((var_7 << ((((~(arr_4 [i_0 + 1]))) + 101881230))));
            }
        }
    }
    #pragma endscop
}
