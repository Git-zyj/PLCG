/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= var_17;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 ^= max(14390731569326704662, ((var_0 * (arr_3 [i_1] [i_0] [i_0]))));
                var_22 = (((!1) ? ((((((-699608008 ? var_10 : 14390731569326704662))) && (((var_16 ? -32753 : (arr_1 [i_0]))))))) : ((((min(1, -572072676)) != 1)))));
            }
        }
    }
    #pragma endscop
}
