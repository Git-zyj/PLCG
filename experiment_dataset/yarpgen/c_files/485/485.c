/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (max(var_10, (min(-var_0, (-1240846339 + -81)))))));
    var_21 = (((~1240846338) <= -1240846338));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_22 = (min(var_22, (min(2067, (((-923098854 > (arr_2 [i_1] [i_0]))))))));
                var_23 = (min((~1240846339), var_18));
                var_24 = (max((-127 - 1), ((-8407024778555912790 / (-127 - 1)))));
            }
        }
    }
    #pragma endscop
}
