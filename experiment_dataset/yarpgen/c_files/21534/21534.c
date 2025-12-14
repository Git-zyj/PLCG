/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_18 += arr_3 [6] [i_2];
                    arr_6 [i_0] [i_0] [11] = ((((max(var_1, 32)))));
                    var_19 = (min(var_19, ((max(-32, var_16)))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, var_12));
                                var_21 = (~32);
                            }
                        }
                    }
                }
                arr_13 [i_0] [i_0] = (((((-32 ? -var_15 : var_8))) ? ((((arr_2 [i_0] [i_0] [i_0]) < var_15))) : ((-var_1 ? var_8 : (((arr_9 [i_0] [i_1] [i_1] [6] [14] [11]) ? (arr_8 [i_0] [8] [i_0] [0]) : var_10))))));
            }
        }
    }

    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_22 = (max(var_22, (((((((~(arr_16 [i_5] [i_5]))))) | -var_0)))));
        var_23 = arr_14 [2];

        /* vectorizable */
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            var_24 = (((arr_16 [i_5] [i_6]) ? (arr_16 [i_5] [i_6]) : (arr_16 [i_5] [i_6])));
            arr_21 [i_5] = ((!(arr_19 [i_6] [i_5])));
            var_25 = (((arr_14 [i_5]) ? (arr_15 [i_6]) : var_3));
            arr_22 [i_6] [i_6] [5] = arr_16 [i_5] [i_5];
        }
    }
    var_26 *= var_6;
    #pragma endscop
}
