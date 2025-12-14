/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_15 = (!2147483638);
                    arr_8 [i_0] [i_2] = ((var_9 ? ((var_3 ? (arr_0 [23] [i_1]) : var_3)) : (arr_7 [i_2] [i_1] [i_0] [i_0])));
                }
            }
        }
        var_16 = (min(var_16, var_14));
        var_17 ^= ((173 < (arr_3 [9])));
        var_18 *= (arr_6 [i_0] [i_0] [i_0] [i_0]);
        arr_9 [i_0] [i_0] |= (((1637046919 < 0) ? (((arr_6 [i_0] [i_0] [i_0] [i_0]) * var_6)) : 28));
    }
    var_19 = var_4;
    #pragma endscop
}
