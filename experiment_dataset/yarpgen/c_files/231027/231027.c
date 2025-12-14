/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_13 = ((((arr_1 [i_0]) + var_1)));
        var_14 = ((var_12 ? (((max(56, (arr_0 [i_0] [i_0]))))) : ((((((arr_1 [13]) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (!var_6) : var_11))));
        var_15 ^= (((((max((~var_11), -193763073)) + 9223372036854775807)) << (((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (((arr_0 [i_0] [16]) * 4294967283)))) - 4294967216))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            {
                arr_9 [i_2] [i_2] = (arr_0 [i_1] [i_2 + 1]);
                var_16 -= var_5;
            }
        }
    }
    var_17 = 5748041443088021747;
    #pragma endscop
}
