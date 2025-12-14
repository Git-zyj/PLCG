/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (3277008756 < 151);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (min(106, (2047 <= 28578)));
                var_21 = (((((max(1, (arr_3 [4])))) ? (((1283272889 ? var_13 : var_11))) : (min(1, var_2)))));
            }
        }
    }
    var_22 = (min(var_11, var_16));
    var_23 = ((1 ? 0 : ((min(127, -125)))));
    #pragma endscop
}
