/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = 2217566454;
        var_16 -= (var_9 | -8445351517456416032);

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_17 = (min(var_17, 65519));
            var_18 &= ((var_10 ? 65519 : (max((arr_1 [i_1]), ((((arr_4 [i_0] [i_0] [i_1]) ? 65519 : (arr_5 [i_0] [i_1] [i_1]))))))));
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            {
                var_19 = (max((arr_8 [i_2]), var_15));
                var_20 = var_4;
            }
        }
    }

    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_21 = (min(var_21, ((max(8445351517456416004, 0)))));
        var_22 = 35924006;
        var_23 = ((min((arr_11 [i_4]), var_14)));
    }
    var_24 = ((var_0 ? -642546218 : 48));
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 21;i_7 += 1)
            {
                {
                    var_25 = (min(var_25, (((642546205 ? 49315 : 8445351517456416032)))));

                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        arr_25 [10] [10] [10] &= (((-1734147190065545870 ? 292865885 : var_7)));

                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            var_26 = -1188560231;
                            var_27 = (min(var_27, 8445351517456416032));
                            var_28 = 16847358;
                        }
                        arr_28 [i_8] [i_6] [i_5] [i_5] [i_6] [i_5] = (arr_16 [i_5 + 2] [i_7 - 1] [i_7]);
                        arr_29 [i_8] [i_7] [i_6] [i_5] [i_5] = (((arr_26 [i_8] [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_5 + 2]) ? (arr_26 [i_8] [i_7] [i_7] [i_7 + 1] [i_7 - 1] [i_5 - 1]) : (arr_26 [i_8] [i_8] [i_8] [i_7 - 1] [i_7 - 1] [i_5 + 3])));
                        var_29 -= -1;
                    }
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        var_30 ^= ((136 ? 17566087085774698434 : -292865885));
                        var_31 = -var_11;
                    }
                    var_32 -= (((arr_30 [i_7 - 1] [i_5 - 1] [i_5 - 1]) ? (((130 ? (((arr_17 [i_5] [i_5]) ? var_3 : 2097151)) : var_1))) : (((arr_16 [i_5 - 1] [i_7 + 1] [i_7]) ^ var_14))));
                }
            }
        }
    }
    #pragma endscop
}
