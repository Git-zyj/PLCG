/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((max(4294967295, 0)));
    var_12 = (min((~var_3), ((((((var_8 ? var_5 : 938773658))) ? 19878 : var_2)))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, (((var_10 || 16462) ? var_4 : (~112)))));
                    arr_8 [i_2] = (12568 & (((var_1 != 793094410) ? (min(var_9, 793094410)) : 4094857295)));
                }
            }
        }
        var_14 = (arr_2 [i_0] [i_0]);
    }
    #pragma endscop
}
