/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((((((-13758 ? var_5 : 99))) ? (((min(13769, var_13)))) : (9873485897736147284 | var_18))), ((max(var_0, var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_20 = ((((((-73 | (arr_3 [i_0]))) < ((max((arr_3 [i_0]), var_13))))) ? ((+(((arr_0 [i_0]) | -25)))) : ((4294967288 ? (((arr_1 [i_0]) ? var_10 : (arr_3 [8]))) : ((min(13771, (arr_0 [i_0]))))))));
                arr_6 [i_0] [i_1] = var_14;
            }
        }
    }
    var_21 = ((var_2 ? (((var_5 ? var_10 : -52))) : (min(((max(-35, -35))), (((-2 + 2147483647) << var_15))))));
    var_22 = (min(var_22, var_13));
    var_23 = var_17;
    #pragma endscop
}
