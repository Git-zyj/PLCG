/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, ((((((var_0 ? ((18446744073709551615 ? -3375221184569156276 : 244)) : (((-873531466 ? 30944 : var_7)))))) && (!var_15))))));
    var_20 = (((((0 ? 4570094378802059491 : 710366994))) ? 17113978365633466301 : (var_3 <= -30933)));
    var_21 += (123 && 455723931);
    var_22 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_23 = (max(var_23, (370887478 == 3722236435)));
                arr_5 [i_1] = ((~(~2970976226)));
                arr_6 [i_1] [i_1] = 165;
            }
        }
    }
    #pragma endscop
}
