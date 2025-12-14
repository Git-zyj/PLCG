/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_20 = (((arr_7 [i_2]) <= (((~var_4) | (~var_19)))));
                            var_21 = (((var_16 || var_7) >> ((((-8357447328702347107 ? (~-5932427284836806555) : ((min((arr_3 [i_1] [3]), (arr_2 [i_2] [i_1] [i_2])))))) - 5932427284836806532))));
                            var_22 = ((~((~(((arr_0 [i_2]) % 243))))));
                        }
                    }
                }
                arr_11 [i_0] [i_1] = (max((arr_9 [i_0] [i_0] [i_0] [i_0] [i_1]), var_1));
                arr_12 [3] = var_19;
            }
        }
    }
    var_23 = (var_3 || var_17);
    var_24 = var_14;
    var_25 -= (((((var_8 ? (var_15 | 5932427284836806557) : (var_14 | var_6)))) ? var_16 : var_11));
    #pragma endscop
}
