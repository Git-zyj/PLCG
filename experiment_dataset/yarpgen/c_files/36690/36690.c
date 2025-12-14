/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;
    var_16 = ((var_6 / (((0 <= (0 & var_9))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_17 *= ((-(((((0 ? 23 : (arr_0 [14])))) ? 15064768200257149896 : -1927171621))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_0] = ((!((max((arr_1 [i_3]), 32767)))));
                                var_18 = (arr_9 [i_0 + 1] [i_3] [i_0]);
                            }
                        }
                    }
                    arr_15 [i_0] [i_0] [i_0] [i_0 - 2] = ((((((-28543 ? (arr_8 [i_0] [i_1] [i_0] [14]) : 11312))))) | (max((5495572279072209050 | 28543), (max(var_4, -5495572279072209063)))));
                    arr_16 [i_0 + 1] [i_0] = (max(((min(((min((arr_11 [6] [i_0] [i_1] [i_2] [i_2]), -28543))), (min((arr_12 [i_0] [i_0] [i_0] [i_2] [i_2] [i_2]), 8054608))))), (arr_6 [i_0] [i_0 - 1] [i_0 + 1])));

                    for (int i_5 = 3; i_5 < 15;i_5 += 1)
                    {

                        for (int i_6 = 1; i_6 < 18;i_6 += 1)
                        {
                            var_19 -= (arr_22 [i_5] [i_1] [17] [i_5] [i_6 - 1]);
                            arr_24 [i_0] [i_2] [i_5] [i_6 + 1] = 28526;
                            arr_25 [i_0] [i_1] [i_2] [i_5] [i_6 - 1] = (((((-1524340225 ? ((18446744073709551615 ? 8054610 : 18446744073709551615)) : 22))) && (arr_22 [i_0 + 1] [i_5 - 2] [i_6 + 1] [i_0 - 2] [i_6])));
                            arr_26 [i_0 + 1] [i_1] [i_0] [i_5 + 1] [i_6] [i_0] = (((((min((!-28568), (((arr_7 [i_0 - 2] [i_0] [i_0 - 2] [i_0]) || (arr_6 [i_0] [i_1] [i_0]))))))) & (min((arr_5 [i_0 + 1] [i_6 - 1]), (((-8272021650536261150 ? -1 : 48)))))));
                        }
                        arr_27 [i_0] [i_2] [5] [6] [i_1] [i_0] = ((!((min((arr_11 [i_0] [i_1] [0] [i_5 + 3] [i_5 + 3]), (max(4486007441326080, 5)))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
