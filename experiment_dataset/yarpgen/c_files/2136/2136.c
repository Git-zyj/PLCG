/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= (((~0) ? var_4 : ((((((3 ? 1 : -1))) ? (min(var_13, 48804)) : var_1)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            var_21 = ((arr_5 [i_4] [i_2] [i_2] [i_1]) ? -1663418531 : (((arr_6 [i_0] [i_4] [i_2]) * var_3)));
                            arr_11 [i_4] [i_2] [i_4] [i_2] [i_4] = var_15;
                            arr_12 [i_0] [i_0] [i_2] = (((arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4] [i_1]) ? (1140904618 / 40648) : (arr_9 [i_0] [8] [i_2] [i_3] [8] [i_4])));
                            arr_13 [i_2] = var_19;
                        }
                        arr_14 [i_2] = var_3;
                        arr_15 [i_0] [i_0] [i_1] [3] [i_2] [i_2] = (((arr_3 [i_0] [i_1] [i_2]) ? (((~(arr_7 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3])))) : ((-2085026547 ? (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : 17761042326167551682))));
                    }
                    arr_16 [1] [i_2] [8] [i_2] = -1663418515;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_22 = (max(var_7, (~-4622734580572382791)));
                                var_23 = var_9;
                                var_24 = var_18;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                {
                    arr_28 [i_9] = -6673392571440850631;
                    var_25 = (max(var_25, ((((!var_11) ? 1073741820 : (((((arr_23 [i_8] [i_8] [i_7]) ? 18446744072635809796 : var_1)) << ((((-(arr_10 [i_7] [11] [i_7] [i_8] [i_9] [i_9] [i_9]))) - 2982445636)))))))));
                }
            }
        }
    }
    var_26 = 7968140532442492643;
    #pragma endscop
}
