/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_13;
    var_19 = var_1;
    var_20 = ((!(var_9 / 3840)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_21 = ((~((((8218872550168311142 ? 1 : -4589554341566269293))))));
                var_22 = (min(var_22, ((min((max(var_3, (arr_5 [i_0 + 1] [i_0 - 1]))), (arr_3 [i_0 + 1] [i_1 - 1]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            {
                var_23 = 33;
                var_24 = ((-1 ? ((max(var_12, (arr_12 [i_2 - 2])))) : (min(0, 37612))));
                arr_13 [i_3] = 22517;
            }
        }
    }
    #pragma endscop
}
