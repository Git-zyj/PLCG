/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_12));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [22] [i_0] = ((((-319813186 && var_0) ? ((((arr_4 [17]) && 4912))) : var_9)));

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_15 -= (min(4912, (((((arr_8 [i_0] [i_2] [12] [i_0]) ? 255 : 1)) % (1 && 13772485709297751091)))));
                        arr_11 [i_3] [i_1] [22] [15] = (~-24);
                        var_16 = -30;
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        arr_15 [19] [i_2] = ((-27 ? -13259 : ((min(63056, 66)))));
                        var_17 = 39;
                        arr_16 [i_0] &= (((arr_0 [i_2]) | ((~(66 < 53)))));
                        var_18 = (min(var_18, (((-(~1))))));
                    }
                    arr_17 [21] [1] [18] [2] = ((var_12 ? ((~((26 ? var_1 : 3)))) : ((((-25 < 0) != (259278926 < -72))))));
                    arr_18 [11] [i_2] [i_2] = -var_7;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 1; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            {
                                arr_34 [i_5] [1] [16] [i_8] [i_8] [11] [i_9] = (((20771 > 0) ? 1 : ((-1333692098 ? 1 : 1))));
                                arr_35 [i_8] [10] [1] = (min(((-(-29284 | 1))), ((min(39, 1)))));
                                arr_36 [i_5] [14] [2] [i_8] [6] = 0;
                                var_19 = ((-30 * ((((64036 > 58651) == 0)))));
                                arr_37 [i_5] [i_8] [i_7] [3] [1] = -30;
                            }
                        }
                    }
                }
                arr_38 [i_5] [9] = (min((min((((132 ? 1 : 1))), (((arr_21 [8]) ? var_13 : -8135538287903535931)))), ((min((34424 < var_4), (min(161, 22)))))));
                var_20 = (max(var_20, ((((((((-123 ? (arr_33 [4] [4] [16] [i_6] [i_6]) : -45))) && ((min(0, 1))))) ? 3 : (min((min(var_0, var_9)), ((min(var_2, (arr_33 [i_6] [i_5] [15] [12] [i_5])))))))))));
                arr_39 [i_6] |= ((0 ? (2618 < -30) : -1110784186));
                var_21 -= (arr_10 [0] [18]);
            }
        }
    }
    var_22 = (min(var_22, (!132)));
    #pragma endscop
}
