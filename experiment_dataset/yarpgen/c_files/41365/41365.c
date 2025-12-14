/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((-43 / ((-42 ? var_18 : 1))))) ? (var_5 != var_10) : (max(var_15, (min(var_13, -1238103364))))));
    var_20 = var_18;
    var_21 = ((min((-28 / 65517), var_3)));
    var_22 = ((var_3 ? (((~var_16) ? (max(var_16, -5031386132252137802)) : -var_16)) : (((var_10 ? var_11 : ((var_3 ? var_17 : var_4)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((((0 / (((1 ? 42 : var_16))))) + (var_3 | 26)));
                arr_6 [i_0] [i_0] [i_0] = (min(((max(var_8, var_12))), (max(-166943746, var_8))));
            }
        }
    }
    #pragma endscop
}
