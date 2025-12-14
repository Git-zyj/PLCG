/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (!-1159395542);
    var_19 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = ((((var_8 ? 18446744073709551592 : (((0 << (var_4 + 249310798)))))) | (((((arr_2 [i_0] [i_0]) <= (~1)))))));
                var_21 = ((var_13 || ((max(((var_3 ? var_15 : 1159395530)), (arr_3 [12]))))));
            }
        }
    }
    #pragma endscop
}
