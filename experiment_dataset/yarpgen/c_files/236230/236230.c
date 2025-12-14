/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1 - 4] |= ((((((var_19 & var_4) | var_5))) ? var_15 : ((var_8 ? (var_14 >= var_3) : var_3))));
                var_20 -= ((var_9 * (var_15 || var_1)));
            }
        }
    }
    var_21 = ((var_17 ? (~var_6) : var_17));
    #pragma endscop
}
