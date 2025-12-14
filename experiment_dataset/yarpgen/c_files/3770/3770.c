/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_15 = 28;
                arr_4 [i_0] [i_1] [i_1] = (min(41, 250));
                var_16 = -1;
            }
        }
    }
    var_17 = (max(1, (max(185, ((16 ? 1161296201 : 176))))));
    var_18 ^= var_8;
    var_19 = (34211 ? -1088004823 : ((max(((max(0, -72))), 95))));
    var_20 = (max(-57, ((var_9 ? 18446744073709551615 : -78))));
    #pragma endscop
}
