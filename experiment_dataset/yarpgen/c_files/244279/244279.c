/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(16228434605916792895, (min(((var_11 ? -30304 : 13071)), var_8))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_14 = var_4;
                arr_6 [i_0] [4] = ((((min(16982158837174773361, (arr_3 [i_1])))) ? 65535 : -3170));
                var_15 *= ((!(((12 ? -7550 : 14)))));
                arr_7 [i_0] [i_0] [i_1] = (max(2350311950, 16228434605916792895));
                arr_8 [i_0] = ((~((max(13073, var_10)))));
            }
        }
    }
    var_16 = (max(var_16, ((((((-(min(var_9, 1056417645))))) > (((~var_2) ? ((max(2317015524, var_1))) : var_12)))))));
    #pragma endscop
}
