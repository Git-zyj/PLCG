/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_1] [i_1] = (min((1089517282437065579 >= 1829077029), (1829077029 / -1829077027)));
                    var_11 = (max(3142840444101959537, (((-473415791 * 1) & (8448723823996960617 + 3142840444101959540)))));
                    var_12 = ((-(3142840444101959540 - 1829077024)));
                }
            }
        }
    }
    var_13 = (!-808428996);
    #pragma endscop
}
