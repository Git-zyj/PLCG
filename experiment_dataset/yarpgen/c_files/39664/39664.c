/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= (min((~var_0), ((45772 ? ((var_4 ? -5788280243994245914 : -5788280243994245914)) : ((5788280243994245915 ? -5788280243994245914 : 5788280243994245914))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_12 = (min(var_12, (((~(((((arr_1 [i_0] [i_1]) ? -8984268365691012580 : (arr_5 [i_0]))) - (max(-5788280243994245914, -5788280243994245915)))))))));
                var_13 ^= max((arr_3 [i_0] [i_0]), (~var_9));
            }
        }
    }
    #pragma endscop
}
