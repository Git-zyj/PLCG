/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] = (arr_1 [i_0]);
                arr_6 [i_0] [i_1] = ((((max((max(-1647362990, 11)), -63))) ? (arr_2 [i_0] [i_1]) : (arr_1 [i_0])));
            }
        }
    }
    var_20 = var_12;
    var_21 = ((((min((var_18 + var_11), -82))) ? (((min(6946051864870696237, var_5)))) : (((var_9 & var_12) >> -80))));
    var_22 |= (var_3 & var_19);
    #pragma endscop
}
