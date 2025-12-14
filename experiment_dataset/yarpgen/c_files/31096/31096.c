/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_7 [i_0] = (min(316459928, -937246701));
                var_16 = (arr_1 [i_1]);

                /* vectorizable */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    arr_10 [i_0] [i_2] [i_0] = (((-937246704 ? var_0 : var_8)));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_14 [i_0] [i_2] [i_2] [i_3] = (((((1 ? 937246704 : var_9))) && 3978507397));
                        arr_15 [i_0] [i_1] [i_2] [i_2] = var_14;
                        var_17 = ((3978507397 ? ((var_8 ? var_4 : var_9)) : (~127)));
                        arr_16 [i_2] = (~-937246718);
                        var_18 = (((((arr_11 [i_0 + 2] [i_1] [i_2] [i_3]) / 6741136510299463128)) / (937246678 - var_11)));
                    }
                }
                for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                {
                    arr_19 [1] [i_1] [i_4] = 64;
                    var_19 = (min(var_19, ((((((((((var_14 ? 0 : 4294967281))) <= (arr_3 [i_4]))))) == -80)))));
                    var_20 = ((+((((min((arr_5 [0] [i_1] [1]), 0))) * (!var_5)))));
                    var_21 = (max(-63, -22));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    arr_23 [i_0] [i_0] [i_5] = (!0);
                    arr_24 [i_0] [i_0] [i_1] [10] = ((!(!3978507372)));

                    for (int i_6 = 2; i_6 < 16;i_6 += 1)
                    {
                        arr_27 [i_5] [i_5] [i_5] [i_5] [i_5] [i_6] = -222734405;

                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            arr_31 [i_6] [i_7] [3] [i_5] [i_5] [i_1] [i_6] = (((arr_25 [i_1] [i_0] [i_1] [i_0]) ? (arr_9 [0] [i_1] [i_7]) : var_13));
                            var_22 *= (((arr_29 [1] [16] [i_5] [16] [11]) ? (20779 == 5011) : ((((arr_29 [i_0] [i_0] [15] [15] [i_0 - 2]) || (arr_25 [i_6] [i_5] [i_1] [i_0]))))));
                            arr_32 [i_0 + 3] [i_6] [10] [i_6] [i_7] = (((arr_29 [i_0 + 4] [i_1] [i_5] [i_5] [i_0 + 4]) % var_10));
                            var_23 &= (arr_20 [5] [i_0 - 2]);
                        }
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            var_24 = 937246696;
                            var_25 = var_9;
                            var_26 *= var_2;
                            var_27 += arr_17 [i_0 - 2] [i_0 - 1] [i_0 + 2] [i_6 + 1];
                        }
                    }
                }
            }
        }
    }
    var_28 = ((-(min(var_12, (var_4 * var_9)))));
    var_29 = (-937246704 / -55);
    #pragma endscop
}
