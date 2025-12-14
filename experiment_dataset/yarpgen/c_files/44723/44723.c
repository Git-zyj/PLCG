/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= ((var_5 ? (((!(!-94)))) : (~1043857757)));
    var_13 ^= ((~(((((var_9 ? 0 : 102))) ? ((54 ? 110 : -1043857744)) : (~0)))));
    var_14 = ((((!(!70771900))) ? (!2623630349) : (((!(((7600738327686639863 ? 1043857757 : var_7))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [6] |= (((~var_4) ? ((var_4 ? var_2 : (arr_0 [i_0] [i_0]))) : (arr_0 [i_0] [i_0])));
        var_15 -= ((!((((arr_1 [i_0]) ? (arr_1 [i_0]) : var_5)))));
        arr_3 [i_0] [i_0] = var_8;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_16 = ((!(arr_7 [i_0])));
                        var_17 = ((!(((4224195380 ? -38 : 96)))));
                        var_18 |= (((!(arr_4 [i_0] [i_1]))) ? (!2796587292) : (arr_4 [i_1] [i_1]));
                    }
                }
            }
        }
    }
    for (int i_4 = 2; i_4 < 20;i_4 += 1)
    {
        arr_14 [i_4 + 1] = ((!(!2083999257)));
        arr_15 [i_4] = ((~((((!(arr_12 [i_4]))) ? (~var_10) : (~78)))));
        var_19 = 4224195413;
        var_20 -= (!70771915);
        var_21 *= (~639108247);
    }
    #pragma endscop
}
