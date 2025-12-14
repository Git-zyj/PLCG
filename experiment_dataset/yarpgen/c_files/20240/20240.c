/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_4 <= 9223372036854775805);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (124 <= -5815341846854642057);
                arr_6 [i_0] = var_2;
            }
        }
    }
    #pragma endscop
}
