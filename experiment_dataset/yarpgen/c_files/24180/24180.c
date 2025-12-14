/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~var_8);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_18 = (max((min(-var_0, (var_3 != var_13))), ((min(-955880135, 17560)))));
                    var_19 = (min((((~var_16) ? (max(97, -9223372036854775804)) : ((var_3 ? (arr_1 [i_0]) : -9223372036854775804)))), (max((-9223372036854775783 / -9223372036854775805), (arr_1 [i_0])))));
                    arr_7 [6] [i_1] [4] &= var_15;
                }
            }
        }
    }
    var_20 += -var_1;
    var_21 = var_13;
    #pragma endscop
}
