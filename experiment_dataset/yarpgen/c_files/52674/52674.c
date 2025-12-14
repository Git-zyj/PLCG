/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_4, var_3));
    var_12 = ((var_8 ? var_2 : var_3));
    var_13 -= var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((!(((((!(arr_0 [i_0 - 1]))) ? 7 : (((max(var_7, var_9)))))))));
                arr_6 [i_0] [i_1] [i_1] = ((~(max((arr_2 [i_0 - 1]), var_6))));
            }
        }
    }
    var_14 |= (max((((~var_10) ? (max(var_7, 3126531500229826617)) : var_10)), ((min(((max(var_8, var_0))), (min(var_2, var_7)))))));
    #pragma endscop
}
