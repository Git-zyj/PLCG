/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((880 ? (arr_0 [i_1 - 1]) : 1005819137));
                var_15 = (((-(arr_0 [i_0]))));
            }
        }
    }
    var_16 -= ((var_10 ? (((((-880 ? var_10 : var_4))) ? var_12 : (var_6 / 9223372036854775807))) : (880 < 880)));
    var_17 = (var_8 / var_12);
    #pragma endscop
}
