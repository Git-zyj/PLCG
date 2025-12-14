/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (49363 * 94);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_13 = var_11;
                            var_14 = (max(var_14, (((((((-124 * 28485) ? (arr_7 [i_3]) : (min(-79841000, 50147))))) ? (((max(-5, 109)))) : (((10 ? -104 : -88))))))));

                            for (int i_4 = 0; i_4 < 14;i_4 += 1)
                            {
                                arr_14 [i_0] = (((((+(((arr_7 [i_0]) * 96))))) * ((57 * (min((arr_2 [8] [i_3] [1]), (arr_5 [i_0] [i_2] [i_0])))))));
                                arr_15 [i_4] [i_3] [i_0] [i_1] [i_0] [i_0] [i_0] = (arr_8 [i_0] [i_0] [i_0] [i_0 + 1]);
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                var_15 = (((arr_4 [i_0 - 1] [i_2 - 1] [i_0]) ? 65535 : (arr_4 [i_0 + 1] [i_2 - 2] [i_0])));
                                var_16 = (max(var_16, (((arr_16 [i_0] [i_1 - 1] [i_2 - 1] [i_3] [i_5]) ? var_6 : var_3))));
                                arr_18 [i_0] [i_2 - 2] [i_1] [i_0] = var_6;
                                arr_19 [i_5] [i_3] [i_0] [i_1 - 1] [13] = 2774858353;
                                var_17 = (min(var_17, (((17969518180883359147 * (arr_17 [i_0 - 1] [i_3]))))));
                            }
                            for (int i_6 = 0; i_6 < 14;i_6 += 1)
                            {
                                var_18 = 16123;
                                var_19 = 93;
                                var_20 = (arr_21 [i_0 + 1] [i_0]);
                            }
                        }
                    }
                }
                var_21 -= (((94 ? -783009408 : 65522)));
                arr_22 [i_0] [i_0] [i_0] = (((~4151320993) ? var_10 : (((arr_0 [i_0]) ? 65528 : 6308355892968459184))));
                arr_23 [i_0] = (max((arr_12 [i_0] [10] [10] [i_1] [13] [i_1] [i_1]), 1));
                var_22 = 0;
            }
        }
    }
    #pragma endscop
}
