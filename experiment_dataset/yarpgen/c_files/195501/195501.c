/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_10 == (max(var_1, var_7))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            arr_5 [i_0] = ((-(((arr_2 [i_0] [i_1 - 4]) << (((arr_4 [i_1 - 4]) - 405158803))))));
            arr_6 [i_0] = var_2;
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_12 = (!var_3);
            var_13 &= (~(max((arr_8 [i_0] [i_0] [i_2]), (arr_2 [i_0] [i_2]))));
        }
        var_14 = (min(var_14, ((((arr_2 [i_0] [i_0]) * ((((var_1 ? var_8 : (arr_1 [i_0]))) + (arr_8 [i_0] [i_0] [i_0]))))))));
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            {

                for (int i_5 = 1; i_5 < 18;i_5 += 1)
                {
                    arr_15 [i_3] = (arr_2 [i_3] [i_5]);
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 19;i_7 += 1)
                        {
                            {
                                arr_22 [16] [i_4] [i_5 + 2] [i_3] [i_7] = min(((((max((arr_2 [i_3] [5]), -268435456))) ? var_4 : 268435455)), ((((((268435445 ? 32751 : 16380))) ? var_5 : (~-268435463)))));
                                var_15 = (((((arr_9 [i_3]) >> (((arr_11 [i_3] [i_3] [i_7 + 1]) + 15827)))) + 633710754));
                                var_16 ^= (((max((min((arr_20 [8] [8] [i_6 - 2]), (arr_18 [0]))), (((16383 ? var_3 : var_7)))))) ? -1078063044953274729 : var_8);
                            }
                        }
                    }
                    var_17 = ((((min((arr_10 [i_3] [i_3]), 268435430))) ? (arr_10 [i_3] [i_3]) : (((arr_10 [i_3] [i_3]) % 8355840))));
                }
                arr_23 [i_3] [i_3] = (((((-(arr_12 [i_3])))) != var_0));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 19;i_9 += 1)
                    {
                        {
                            arr_28 [i_3] [i_4] [i_4] [i_8] [i_9] = (((arr_14 [i_3] [i_3] [i_3 - 1]) - (~268435454)));
                            var_18 = (arr_12 [i_3]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
