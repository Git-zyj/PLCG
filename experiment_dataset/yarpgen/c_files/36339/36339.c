/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (var_7 | (var_9 & 8108));
    var_17 &= ((-((((max(1, var_15))) ? ((max(var_13, var_0))) : (~-794786780)))));
    var_18 -= var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] |= (arr_1 [i_0] [i_1 - 1]);
                var_19 = (min(var_19, var_0));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_13 [i_1] = (((((-(((!(arr_9 [i_2]))))))) ? (((min(56942, 3591334969969889977)) + -1590259975)) : (arr_11 [i_1] [i_3])));

                            for (int i_4 = 0; i_4 < 0;i_4 += 1)
                            {
                                var_20 -= min(((((8576 <= 1) != (min(var_4, var_2))))), var_8);
                                var_21 += 8588;
                                var_22 = (max(var_22, 1));
                            }
                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                var_23 = ((~(-1 & -4)));
                                var_24 = ((-(min((((52010 ? var_9 : 1))), (((arr_10 [i_0] [i_1] [i_2] [i_3] [i_5]) - 0))))));
                                var_25 *= (max((arr_2 [i_1 + 1] [i_1 + 1]), (arr_2 [i_1 + 1] [i_1 + 1])));
                                var_26 -= ((((!((max(48332, 993006772225231802)))))));
                            }
                            var_27 *= var_4;
                            var_28 -= (max(((18446744073709551615 ^ (arr_1 [i_0] [i_1]))), (max((arr_1 [i_3] [11]), 42355479))));
                            arr_19 [i_0] [i_1] [i_1] = ((!(arr_5 [i_0] [i_1] [i_3])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
