/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((254 ? -3257 : (65 > var_18)))) ? var_15 : (((18 - 227) - var_8))));
    var_20 ^= -87;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_21 = 77;
                arr_6 [i_0] [i_1] [i_0] = (!var_8);
            }
        }
    }
    #pragma endscop
}
