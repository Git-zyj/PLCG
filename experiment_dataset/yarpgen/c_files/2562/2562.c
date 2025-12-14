/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                arr_6 [i_0] [10] = var_2;
                var_15 *= ((var_6 ? 572807089 : ((((max(var_1, 1))) ? (!var_6) : (arr_0 [i_0] [0])))));
            }
        }
    }
    var_16 = var_7;
    #pragma endscop
}
