/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = max((4611686018427387903 | 2147467264), (max((((1 ? var_10 : (arr_3 [i_0])))), (min(5654122120866286275, 1974494847)))));
                var_19 = (arr_0 [i_0]);
            }
        }
    }
    var_20 = var_13;
    var_21 = 4110715616;
    var_22 = var_10;
    var_23 |= ((var_18 <= (~var_8)));
    #pragma endscop
}
