/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_4 ? (((((var_1 ? var_9 : var_13))) ? (var_14 | var_0) : var_13)) : ((min(((var_13 ? var_2 : var_12)), ((max(var_4, var_2))))))));
    var_17 = ((max(5030, var_13)) & ((((((255 ? 250 : 22955))) ? 1 : 22972))));
    var_18 = (32 & 549755813887);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = ((~(((var_3 && (!var_10))))));
                    var_19 ^= (((((((((arr_3 [i_1] [1]) ? var_11 : var_13)) != var_8)))) % ((var_9 ? var_14 : (max(-549755813878, 1))))));
                    arr_8 [i_0] [i_1] [i_0] = ((((((-(arr_2 [i_0] [i_0]))))) ? (((var_8 ? var_2 : var_3))) : (max((((var_14 ? var_0 : var_8))), (var_7 / var_3)))));
                }
            }
        }
    }
    #pragma endscop
}
