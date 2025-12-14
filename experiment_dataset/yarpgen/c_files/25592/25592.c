/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-5465624148955006008 ? var_15 : var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_18 += 65522;
                var_19 = (((38857 << (var_3 - 139))));
                var_20 += ((~(((arr_2 [0] [i_1]) ? (arr_0 [2] [i_1 + 1]) : ((min(0, var_2)))))));
                var_21 += 0;
                var_22 = ((+(min((0 | var_7), 2676822910))));
            }
        }
    }
    var_23 = var_3;
    var_24 = var_15;
    #pragma endscop
}
