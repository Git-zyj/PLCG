/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((((var_9 ? var_8 : var_12)) | (((var_9 ? var_10 : var_14)))))) ^ var_7));
    var_19 = -var_17;
    var_20 = var_7;
    var_21 -= ((var_15 ? ((((10137261718928427344 & 750275307) != var_10))) : var_17));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_22 = ((8309482354781124267 ? 2047 : 2541541475758004135));
                var_23 = (min(((min(var_15, (~var_9)))), (((var_16 ^ var_3) | var_12))));
            }
        }
    }
    #pragma endscop
}
