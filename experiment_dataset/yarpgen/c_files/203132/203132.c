/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [21] [i_0] |= (((((~(min((arr_3 [i_0 - 1] [i_1] [i_1]), 0))))) ? (((((0 ? (arr_0 [i_0]) : var_8))) ? var_5 : (arr_4 [i_0 - 1] [i_1]))) : 188));

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    arr_9 [i_1] [i_1] [i_2] = var_14;
                    arr_10 [i_0 + 1] [i_0] [15] [i_0] = (arr_6 [i_2]);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {

                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        arr_17 [i_4] [i_3] = 4825857489124476652;
                        var_19 = var_15;

                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_20 = var_18;
                            arr_20 [i_0 - 1] [i_4] = 23;
                            var_21 = (min(var_21, (~73)));
                            var_22 = ((39 ? (arr_15 [i_3] [i_1] [17] [i_4 - 1] [i_0 + 1]) : 54));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_23 [i_0 - 1] [i_1] [i_0 - 1] [i_4 - 1] [i_4] [i_6] [i_6] = (((arr_6 [2]) ? ((((arr_11 [i_0] [i_1] [i_4] [i_6]) ? 0 : 18))) : (arr_1 [7])));
                            arr_24 [i_4] [i_1] [i_4] [i_4 - 1] [21] [i_1] [i_0] = ((1 | (arr_2 [i_0 - 1] [i_4 - 1] [i_6])));
                            var_23 = 53762;
                        }
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            var_24 = (max(var_24, (((((((arr_8 [i_0] [i_0 + 1] [18]) ? var_13 : var_12))) ? var_11 : -29)))));
                            arr_27 [i_4] = (!10);
                        }
                        arr_28 [i_0] [17] [23] [22] [i_0] [i_4] = 18847;
                    }
                    arr_29 [i_0] = ((~(~-21)));
                }
            }
        }
    }
    var_25 &= (max(28123, ((var_8 ? (((36437 ? var_16 : 39))) : var_12))));
    #pragma endscop
}
