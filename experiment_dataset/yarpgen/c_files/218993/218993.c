/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0 + 1] [i_0] [i_1] = ((arr_4 [i_0 - 3] [i_0] [i_0]) ? (~var_9) : (arr_4 [i_0 - 1] [i_1] [i_1]));
                arr_6 [4] [i_1] = (arr_0 [i_0]);
                arr_7 [i_1] [i_1] [i_0] = ((max(1585176081380317359, var_2)));
                var_10 = 3780790739794380914;
            }
        }
    }
    var_11 = ((((max(var_9, var_6)))));
    var_12 = var_3;
    #pragma endscop
}
