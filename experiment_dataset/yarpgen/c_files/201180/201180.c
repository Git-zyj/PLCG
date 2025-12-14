/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0 + 3] = (-9223372036854775807 - 1);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_11 = (((((-(((arr_8 [i_0] [0]) ? var_0 : 0))))) ? (1 || 1) : (((!(arr_0 [11] [i_1]))))));
                            var_12 = (max(var_12, 32747));

                            for (int i_4 = 0; i_4 < 23;i_4 += 1)
                            {
                                var_13 ^= (!2422);
                                var_14 = min(0, (-32767 - 1));
                            }
                            for (int i_5 = 2; i_5 < 21;i_5 += 1)
                            {
                                var_15 = (min(((((~var_8) ? (max(var_6, var_4)) : (arr_4 [i_1 - 1] [i_1] [i_1])))), 15243941053675824053));
                                arr_20 [i_0] [i_0] [i_3] = 9;
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 23;i_6 += 1)
                            {
                                var_16 |= (((((32762 ? var_5 : -9223372036854775787))) ? (-9223372036854775807 - 1) : (~var_9)));
                                var_17 += -50815;
                            }
                            for (int i_7 = 1; i_7 < 22;i_7 += 1)
                            {
                                var_18 = (min(50808, 8));
                                var_19 = (arr_19 [i_3]);
                                var_20 = min((arr_16 [i_7] [8] [i_3] [i_3] [i_1] [i_0]), (min(((((arr_12 [i_3]) ? var_7 : 244))), 8)));
                            }
                        }
                    }
                }
                arr_25 [i_0 + 3] [i_1 - 1] [i_1 + 2] = ((((min(1227069880068200603, (min(-2147483637, 9223372036854775785))))) ? (~104841555) : ((-(((-2147483647 - 1) ? (arr_11 [i_1 - 2] [i_1 - 2] [i_0 + 1] [i_1] [i_0 + 1] [i_0 + 1]) : (arr_9 [i_1 + 1] [i_0 - 1] [i_0 - 1])))))));
            }
        }
    }
    var_21 = (var_0 * var_7);
    var_22 ^= (max((((~23115) ? (-2147483637 ^ -9223372036854775787) : (~var_3))), var_7));
    var_23 = 958438194;
    #pragma endscop
}
