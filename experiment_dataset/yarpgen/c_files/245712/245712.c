/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        arr_14 [i_0] [i_1] [i_2] [i_3] = ((var_0 ? ((((!((((arr_6 [2] [2]) ? var_8 : 9330))))))) : (((arr_6 [i_0] [i_1 + 1]) ? var_1 : (((arr_2 [i_3 - 1]) | 18446744073709551615))))));
                        arr_15 [i_0 + 1] [i_3] [i_1] = 56205;
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_14 = (arr_10 [i_1] [i_2] [i_1] [i_1]);
                        var_15 -= (((arr_4 [i_1] [i_1]) ? (max(-22490, ((56206 ? 2411598320 : var_6)))) : ((min((min((arr_16 [i_4] [15] [15] [15]), var_8)), (min(var_1, 2147483647)))))));
                    }
                    arr_18 [i_1] = 1;
                    var_16 = (~15588259071198442869);
                    var_17 = 3504175147856897317;
                }
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    arr_21 [i_1] [i_1 + 1] [i_1] = (+-9313);
                    var_18 = -var_5;

                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        arr_25 [i_1] [i_1] [i_5] [i_6] = ((((min(var_7, var_8))) ? ((-(max(var_7, var_12)))) : var_4));
                        var_19 ^= -143;
                    }
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        arr_28 [i_0] [i_1] [i_0] [i_0] [i_1] [i_0] = (min(var_6, (arr_16 [i_0] [i_0] [15] [i_0])));

                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            arr_31 [i_1] [i_1 + 1] [i_1 - 1] [i_1] [i_1] [i_1] = ((!((((!1883368981) ? (arr_26 [i_0 - 1] [i_1 + 1]) : (arr_27 [i_0] [i_0] [i_0 - 1] [20] [19]))))));
                            arr_32 [i_8] |= max((min(17128502003897392974, var_10)), 14942568925852654285);
                            arr_33 [i_0] [i_1] [i_5] [i_1] [21] [5] [i_8] = var_3;
                        }
                        var_20 += -5560;
                    }
                }
                var_21 = 1318242069812158646;
            }
        }
    }
    var_22 = (min(var_1, var_4));
    #pragma endscop
}
