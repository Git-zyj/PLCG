/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= (max(var_14, var_4));
    var_16 = ((((max((((805306368 ? var_14 : var_10))), (~var_11)))) ? (((((-7678970513248922578 ? 4026531840 : var_14))) / var_3)) : (!651727555)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = var_8;
                var_18 = (arr_3 [i_0 - 1]);
                arr_5 [i_0] = ((var_6 & (arr_2 [i_0])));
            }
        }
    }
    #pragma endscop
}
