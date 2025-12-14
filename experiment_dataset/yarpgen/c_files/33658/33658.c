/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_3 ? var_7 : var_1));
    var_16 = ((((max(var_4, 0) << (((~var_1) - 8064311499395475928))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((((1 <= 0) < ((min((arr_3 [i_0]), (arr_2 [i_0]))))))) << (((max(((min((arr_1 [i_0]), 1))), (var_2 + 146))) - 4522))));
                var_17 -= (arr_1 [i_0]);
            }
        }
    }
    #pragma endscop
}
