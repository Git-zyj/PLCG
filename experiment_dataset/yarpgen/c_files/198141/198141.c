/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = (min(((min(-2147483639, 592266991))), (min(1538791436, 2756175861))));
                arr_6 [i_0] = ((max(2756175861, (arr_4 [i_0 - 2]))));
            }
        }
    }
    var_10 = (max((min(((max(var_3, var_6))), (5 % var_9))), (min(var_6, (max(1538791435, var_3))))));
    #pragma endscop
}
