/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (!373995125);
    var_14 |= var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_15 = ((59076 >= (min(((max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))), (min(108, 14884339679085940148))))));
                var_16 = (~var_1);
            }
        }
    }
    var_17 = (max((((var_6 - ((var_3 ? var_6 : var_7))))), (((3562404394623611461 * 14884339679085940148) ? ((var_1 ? var_0 : var_8)) : var_10))));
    var_18 = (max(((var_1 ? (14884339679085940155 ^ 14884339679085940155) : 59092)), var_5));
    #pragma endscop
}
