/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~var_11);
    var_16 = var_6;
    var_17 = (((((min(1, 1)))) - -var_7));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    arr_8 [i_2] [i_1] [i_2] = (((arr_3 [i_0] [i_0 + 1] [i_2 - 1]) * 1));
                    var_18 = var_6;
                    arr_9 [i_2] [i_2] [i_0] = (arr_1 [i_2 + 4]);
                    var_19 += (arr_5 [8] [i_0 - 1] [i_1 - 1] [i_2 + 3]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] = (arr_5 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_3 + 2]);
                                var_20 = ((!(arr_2 [6])));
                                var_21 &= (((arr_14 [i_0 + 1] [i_1] [1] [i_3 - 1] [i_1 + 1] [i_1] [1]) ^ (arr_13 [i_0 + 1] [i_1] [i_0 - 1] [i_3 + 1] [i_1 - 1])));
                            }
                        }
                    }
                }
                for (int i_5 = 1; i_5 < 19;i_5 += 1)
                {

                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 19;i_6 += 1)
                    {
                        var_22 = ((~(arr_2 [i_0 - 1])));
                        var_23 = ((((var_10 ? 1 : (arr_19 [20] [i_1] [5] [20] [8]))) <= (((1 <= (arr_6 [i_0] [i_0] [i_6] [i_6]))))));
                        var_24 = (arr_18 [i_0 + 1] [i_6 + 2] [i_5 + 1]);
                    }
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        var_25 *= (((arr_23 [i_5] [i_5 + 1] [i_5] [i_5 + 2] [i_5] [i_5 + 2]) < (max(1, (arr_5 [i_0 - 1] [i_1] [5] [i_7])))));
                        var_26 = (((((((((arr_4 [1] [i_5 + 2]) ? 1 : var_0))) ? (var_10 & var_10) : (arr_10 [i_5] [i_1] [i_1] [i_5] [i_1])))) ? (arr_7 [1]) : (((((arr_5 [i_0] [i_1] [i_5 + 2] [i_0 - 2]) <= -1))))));
                    }
                    arr_27 [i_0] [i_0] [i_5] |= var_10;
                }
                var_27 = (min(var_27, (((-1 ? ((((((1 ? var_11 : 1))) > (arr_13 [i_0 - 1] [i_1] [i_0] [i_0 - 2] [i_1])))) : 1)))));
                arr_28 [6] = ((((max(1, 1))) - (1 * 1)));
                var_28 = (min(var_28, ((((1 ? (((max(1, 1)))) : (arr_12 [i_1 + 3] [i_1 + 1] [i_1 - 2] [i_1])))))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 19;i_9 += 1)
                    {
                        {
                            arr_36 [18] [i_1] [i_1] [i_1] [i_0] [i_8] = (min(((max(var_5, ((var_2 + (arr_10 [20] [i_0] [i_8] [i_9 + 1] [i_9])))))), (min((arr_11 [i_1]), 1))));
                            var_29 = var_4;
                            var_30 = (((min(1, (((arr_17 [i_0 - 1] [i_1] [i_1] [i_9 - 1]) ? var_5 : 1)))) <= ((min((arr_34 [i_0 + 1] [i_9 + 1]), (arr_10 [6] [i_1] [i_1] [i_0 - 1] [i_9 - 1]))))));
                            var_31 = (((((arr_14 [i_0] [7] [7] [12] [i_1 - 2] [10] [i_8]) / (arr_5 [i_1 - 2] [i_1] [i_1 - 2] [5]))) % (~1)));
                            var_32 &= (min(1, 1));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
