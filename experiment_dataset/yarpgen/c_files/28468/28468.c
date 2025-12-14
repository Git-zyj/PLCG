/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_19 &= var_4;
                arr_6 [i_0] [i_1] &= arr_2 [i_1 + 1] [i_1 + 2];
                var_20 = -6483025847869851049;
                var_21 &= 6483025847869851054;
            }
        }
    }
    var_22 = (max((((~(var_16 || var_8)))), (((-6483025847869851049 || var_6) ? ((var_11 ? var_1 : var_4)) : 846668664))));
    #pragma endscop
}
