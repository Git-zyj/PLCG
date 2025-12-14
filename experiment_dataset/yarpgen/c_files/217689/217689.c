/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((((-3800975370818748484 ? 14381253341823248335 : 0))) ? ((var_0 ? 7 : var_15)) : (((var_10 ? 0 : 28805)))))) ? ((((((-127 - 1) ? 16383 : 14381253341823248324))) ? (((var_8 ? var_0 : 95))) : ((var_2 ? var_5 : var_12)))) : ((14381253341823248335 ? 0 : 14381253341823248335))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_17 ^= (((((9 ? (((295908399 ? -1843548582 : 31))) : ((0 ? 65504 : -8647949897613618677))))) ? 36731 : (((((3189137595 ? 204217111928737536 : 4294967295))) ? 58 : ((1833691839108372366 ? 1626 : 104))))));
                var_18 = ((((((((-1424280746709915250 ? 13 : 204217111928737536))) ? (((arr_1 [i_0] [i_0]) ? var_2 : 15)) : ((((arr_3 [i_0] [i_0]) ? 0 : 65535)))))) ? ((((((arr_4 [i_0]) ? var_2 : var_7))) ? (((3443109621 ? var_3 : (arr_4 [i_0])))) : ((233 ? 3 : -16)))) : (((((1022 ? var_3 : var_13))) ? (((43641 ? 1022 : var_4))) : ((var_7 ? (arr_3 [i_0] [i_0]) : (arr_2 [i_0])))))));
            }
        }
    }
    #pragma endscop
}
