/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_20 = -28;
                arr_6 [6] [i_1] &= (((((65 ? 10 : var_16))) ? (~var_9) : (~var_9)));
                var_21 = ((-61 ? (-127 - 1) : 79));
            }
        }
    }
    var_22 = (((var_8 ^ -9) / ((var_19 ? ((max(var_14, 1))) : var_4))));
    var_23 = (((((min(var_6, var_15)))) ? (var_18 - var_10) : (!var_14)));
    #pragma endscop
}
