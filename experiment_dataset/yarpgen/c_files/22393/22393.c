/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_18, var_1));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                {
                    var_20 = ((!(((max(268427264, 16617370650555108298)) >= 93))));
                    var_21 = var_9;
                    var_22 = (arr_6 [i_0] [i_0 + 1] [i_0 - 2]);
                    arr_9 [i_0] [i_1] [i_2] = (67 / 9223372036854775807);
                }
            }
        }
    }
    var_23 = (-9223372036854775807 & 142);
    var_24 = (max(var_24, var_5));
    var_25 = (max(((var_0 & (((var_14 ? var_8 : var_3))))), (!var_2)));
    #pragma endscop
}
