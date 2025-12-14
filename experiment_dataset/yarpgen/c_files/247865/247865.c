/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((arr_0 [6]) < (arr_0 [i_0]))) ? (((arr_3 [i_0] [i_0 - 2] [i_0]) ? var_3 : var_17)) : (arr_3 [i_0] [i_0 - 2] [i_0 - 4]));
                arr_5 [i_0 - 1] [i_1] = (-468752352 ? (min((min(-468752345, 4611686018427387904)), ((min(var_1, var_4))))) : (arr_0 [i_0]));
            }
        }
    }
    var_20 = (35853 & 24576);
    var_21 -= (((((min(468752331, var_0)))) ? var_4 : (((~31422) ? (~29668) : ((34129 ? 34134 : var_1))))));
    #pragma endscop
}
