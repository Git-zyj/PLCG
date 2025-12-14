/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_17 = (arr_3 [i_0] [i_2]);
                    arr_9 [i_0] [3] [i_0] = ((var_3 != (arr_8 [i_0] [i_1] [i_0] [i_0])));
                }
                for (int i_3 = 2; i_3 < 9;i_3 += 1)
                {
                    var_18 = ((~((-16448 ? 25 : 80))));
                    var_19 = ((var_5 ? var_1 : (arr_10 [i_3] [i_3 + 1] [i_3 - 1])));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        arr_16 [i_1] [i_3 - 1] = ((!(((var_4 | (arr_11 [4] [i_4]))))));
                        var_20 = (arr_14 [i_0] [i_0]);

                        for (int i_5 = 2; i_5 < 9;i_5 += 1)
                        {
                            arr_21 [i_3] [i_0] [i_0] = (arr_12 [i_5 + 1] [i_5 - 1] [i_5] [i_3 + 1]);
                            var_21 = (((~(arr_20 [i_0]))));
                        }
                        var_22 -= (arr_8 [i_0] [i_3 + 1] [i_3] [i_3 + 1]);
                    }
                }
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    var_23 = (min(var_12, (((((max(var_7, (arr_6 [i_6] [i_1]))))) ^ var_9))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 8;i_8 += 1)
                        {
                            {
                                var_24 = (min((max(16320, (var_10 & var_6))), (((var_13 ? ((max((arr_14 [6] [i_7]), (arr_8 [i_1] [i_1] [i_1] [i_1])))) : (arr_8 [i_0] [i_1] [i_6] [i_7]))))));
                                var_25 += var_4;
                                var_26 = (arr_1 [i_0]);
                                var_27 = var_4;
                            }
                        }
                    }
                }
                var_28 -= ((((var_3 | var_1) >> ((((arr_17 [9] [i_1] [i_0] [7] [i_0] [i_0]) <= var_15))))));
            }
        }
    }
    var_29 = ((var_1 ? -var_16 : (((var_10 + 3968) ? var_12 : var_2))));
    #pragma endscop
}
