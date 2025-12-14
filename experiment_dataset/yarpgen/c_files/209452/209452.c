/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_3;
    var_21 |= (max((min(-6465280266868223108, 52833)), (~-8527)));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_22 = (((((-8505 | (arr_0 [i_0] [i_0])))) ? ((max((arr_1 [12]), var_0))) : (max((max((arr_1 [i_0]), (arr_0 [i_0] [i_0]))), ((2147483647 ^ (arr_1 [i_0])))))));
        arr_2 [i_0] [i_0] = (((arr_1 [i_0]) ? (max((min(var_13, 65535)), 0)) : ((((((0 ? (arr_1 [i_0]) : 2656823877578856116))) ? (min(-5870447097963689726, 36191)) : (~3155))))));
        arr_3 [i_0] |= (-6592159578787192253 ? 5159 : 9223372036854775786);
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    arr_11 [i_2] [i_2] [i_3] [i_3] = (arr_9 [i_1] [i_1] [i_1] [i_1]);
                    arr_12 [i_2] [15] [i_2] [i_2] = ((+(((arr_6 [2]) ? (((max(var_11, (arr_5 [i_1] [5]))))) : ((var_8 ? -8505 : 9223372036854775786))))));
                    var_23 &= (min(var_8, (((52833 ? (!-9223372036854775787) : 14661)))));
                }
            }
        }
    }
    #pragma endscop
}
