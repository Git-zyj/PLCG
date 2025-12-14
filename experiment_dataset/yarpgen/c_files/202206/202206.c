/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_2;
    var_21 ^= (var_5 ? ((((638272017 ? var_6 : var_8)))) : (((-5 ? 638272023 : 1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_7 [i_0] = (arr_2 [i_0] [i_1]);
                var_22 = 3656695281;
                arr_8 [i_0] [i_0] = ((((3656695288 ? (arr_2 [i_0] [i_1]) : 3932317121))));
            }
        }
    }
    #pragma endscop
}
