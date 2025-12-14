/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] = var_10;
                    var_11 = ((56433 ? (~var_0) : (((((arr_4 [i_0 - 2] [i_1] [i_2 - 1]) ? var_5 : 4201613022))))));
                    arr_7 [i_0 - 1] [i_0 - 2] [i_1] [i_2] = (min(56424, 43773));
                }
            }
        }
    }
    var_12 = (min(var_12, var_4));
    #pragma endscop
}
