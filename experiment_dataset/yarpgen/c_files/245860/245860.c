/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= ((-var_1 + (((((var_12 ? 60 : var_11))) ? ((var_18 ? 0 : 1)) : var_11))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        var_21 = ((((-(max(var_2, var_11)))) | 60));
                        var_22 = -1602623450;
                        var_23 = (min(var_23, (((!((((((var_17 | (arr_3 [i_0] [i_2])))) ? ((var_19 ? 1 : var_1)) : 196))))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {

                        for (int i_5 = 1; i_5 < 19;i_5 += 1)
                        {
                            var_24 = ((13380 ? 3165490595789969257 : 1));
                            var_25 = -1932484736;
                            var_26 = (65535 | 13749);
                            var_27 = (((arr_14 [i_1] [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 2]) ? 109 : var_5));
                        }
                        for (int i_6 = 3; i_6 < 19;i_6 += 1) /* same iter space */
                        {
                            var_28 = (4032 | -671091833);
                            var_29 *= (arr_9 [21] [i_1] [i_0]);
                            arr_18 [i_0] [i_0] [i_0] [i_2 - 4] [i_2 - 4] [i_0] = (((var_16 | var_16) | (arr_3 [i_1 - 1] [i_1])));
                        }
                        for (int i_7 = 3; i_7 < 19;i_7 += 1) /* same iter space */
                        {
                            arr_21 [i_0 + 2] [i_1 + 1] [i_2] [i_0] [i_0] = (((arr_9 [i_1] [9] [i_2]) | var_19));
                            arr_22 [i_7 + 2] [i_0] [i_2] [i_0] [i_0] = 2959583272;
                            var_30 = ((arr_16 [i_2] [i_2] [i_1] [i_1 - 1] [i_1]) ? (arr_1 [i_2 - 2] [i_2]) : (arr_1 [i_2 - 3] [i_4]));
                        }
                        var_31 = 1;

                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            var_32 = var_14;
                            var_33 = ((var_18 ? 65527 : ((var_11 ? (arr_1 [i_8] [i_0]) : (arr_26 [i_2] [i_2] [i_2] [i_4] [i_2])))));
                            arr_27 [i_8] [i_0] [i_2 + 3] [i_1] [i_0] [i_0] [i_0] = (((arr_7 [i_0] [i_0] [i_0]) | (arr_4 [i_0] [i_0 + 1] [i_0])));
                        }
                        for (int i_9 = 1; i_9 < 19;i_9 += 1)
                        {
                            var_34 = (((arr_17 [i_2 - 2]) | 1));
                            var_35 *= var_10;
                            var_36 &= (((((arr_8 [i_4]) | 5728568746103325680))) ? (arr_10 [i_9] [i_9 + 1] [i_9 + 1]) : var_11);
                        }
                        var_37 = (((((var_19 | (arr_26 [22] [i_1] [i_0] [i_4] [i_4])))) | ((1 ? 4294967281 : 1))));
                        var_38 = ((((214 ? 7745 : 3690821681262736963))) ? 4406752691582587406 : (((511 ? 20519140 : 1736394458))));
                    }
                    var_39 -= 910372144;
                    var_40 = ((2842537740 ? 1 : 1));
                }
            }
        }
    }
    #pragma endscop
}
