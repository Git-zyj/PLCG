/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_20 |= 11690520903824431350;
                    var_21 = arr_6 [i_2] [i_2] [i_2];
                    var_22 |= (max((arr_5 [11] [i_1]), ((((arr_0 [i_0]) % var_15)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_23 = (min(var_9, ((((max(-1093, 5540857212666224135)) != ((((arr_7 [i_0]) ? (arr_10 [i_0] [i_1] [i_2]) : var_16))))))));
                                var_24 = (max(var_24, (arr_0 [17])));
                                arr_17 [i_0] [i_0] [i_1] [6] [i_3] [i_3] [i_2] = ((arr_14 [i_4] [i_4 + 2] [i_2] [i_4] [i_4 + 2]) ? (min(-52, -590773511891302419)) : (((arr_14 [i_4] [i_4 - 1] [i_2] [9] [i_4 + 1]) / (arr_14 [i_4] [i_4 + 2] [i_2] [i_4 + 1] [i_4 + 1]))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        arr_20 [i_5] [i_2] [i_2] [i_0] = (max((arr_14 [i_5] [i_2] [i_2] [13] [i_0]), ((-(arr_6 [i_1] [i_1] [i_5])))));
                        var_25 = (arr_19 [i_1] [i_2] [i_1]);
                        arr_21 [i_2] [i_2] [i_2] [13] = ((~(((!((((arr_3 [i_5] [i_0]) ? 12905886861043327480 : var_9))))))));
                        var_26 = arr_16 [i_5] [i_2] [i_2] [i_1] [i_2] [i_0];
                    }
                }
            }
        }
    }
    var_27 = var_12;
    #pragma endscop
}
