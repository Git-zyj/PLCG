/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    var_11 = (((562948879679488 - var_9) - ((((!(var_3 % var_7)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_10 [i_0] [4] [i_2] [i_0] = (arr_0 [i_2]);

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_12 = (((arr_2 [i_0] [i_0]) + (arr_6 [7] [i_1] [i_3] [i_2])));
                            var_13 = ((var_2 && (arr_4 [i_0] [i_1] [1])));
                        }
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        var_14 = (var_4 << (((((arr_1 [i_0]) + 3940298016810822893)) - 19)));
                        var_15 = (1 - var_8);
                        arr_17 [i_5 + 1] [2] [i_1] [i_1] [2] [i_0] |= 0;
                    }
                    arr_18 [i_0] [i_2] = (min(0, (((var_0 ? 127 : var_6)))));
                }
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    var_16 = ((((var_4 ? var_6 : ((min(-20193, -32653))))) >= 0));
                    arr_21 [i_1] = (var_7 <= var_2);
                }
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    var_17 = (max(var_17, ((max(var_9, var_6)))));
                    var_18 = (max(var_18, var_6));
                    arr_25 [i_0] [i_0] = max((65535 + var_8), var_4);
                    arr_26 [i_0] [i_1] [i_0] [i_0] = (((1 <= var_7) ? -51572 : (max(var_2, 9063281712046627844))));
                }
                arr_27 [i_0] [1] = (((((var_1 ? 14989725542528014341 : var_0))) && (((57825 ? 1 : 20195)))));
                var_19 = ((min(var_7, 1)));

                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    var_20 = (min((((arr_24 [i_0] [i_0] [i_1] [i_8]) - var_1)), -var_6));
                    arr_30 [i_0] [0] [i_8] = ((16383 ? (((var_6 ? 50457 : 1))) : (max((((1 ? 1 : 77))), (var_0 + var_8)))));
                }
                var_21 = (((~1) ? var_2 : var_6));
            }
        }
    }
    var_22 = (((~var_9) ? var_5 : var_1));
    #pragma endscop
}
