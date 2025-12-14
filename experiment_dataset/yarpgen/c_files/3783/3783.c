/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 14351;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [i_1] = ((14351 && (14378 ^ -14352)));
                arr_5 [i_1] = 1;
                arr_6 [i_0] = (max((((max(65535, 2296909366)) / 108)), 15));
            }
        }
    }
    var_21 = 0;

    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_9 [4] [1] = ((62901 << (((((min(-32759, 1)))) + 32769))));
        var_22 = (-14352 && 1);
        var_23 += 1001156041;
        arr_10 [i_2] [i_2] = 15;
        arr_11 [i_2] [i_2] = (((15 || 14355) & (min(-16, 14352))));
    }
    var_24 = (-32767 - 1);
    #pragma endscop
}
