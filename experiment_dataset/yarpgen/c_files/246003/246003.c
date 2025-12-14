/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_16 += var_6;
                                arr_11 [i_0] [i_1] [i_4 + 1] [i_0] [i_1] [i_4] [i_1] = (((((max(88, 7)) ? -1 : (arr_3 [i_0] [i_1] [i_2])))));
                                var_17 = (max((((arr_9 [i_4 - 1] [6] [i_2] [1] [i_4 + 2] [i_1] [i_3]) ? var_15 : (!var_6))), (arr_3 [i_3] [i_3] [i_3])));
                            }
                        }
                    }
                }
                arr_12 [i_1] = var_2;
                arr_13 [i_0] &= 71;
                arr_14 [i_1] = 22769;
            }
        }
    }
    var_18 = 2180824149;
    var_19 = var_15;
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 9;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            {
                                var_20 = ((((((((3273606911 ? (arr_25 [i_5] [i_5]) : (arr_17 [3]))) + 2147483647)) >> (((arr_25 [i_5 - 1] [i_5 - 1]) + 12374)))) <= (((arr_15 [i_9]) & 48455))));
                                var_21 = (((((((-1347966684 + 2147483647) >> (var_6 - 8263849888267354014))))) ? var_13 : ((((arr_24 [i_5] [i_5 - 1] [i_5 + 1] [4]) ? (arr_24 [i_5] [i_5 - 1] [i_5 - 1] [i_5]) : (arr_24 [2] [i_5 - 1] [i_5 - 1] [i_5]))))));
                                arr_26 [i_5] [1] [i_7] [i_5] [i_9] = (((((-((-71 ? 0 : var_8))))) != var_6));
                            }
                        }
                    }
                    arr_27 [i_5] [i_6] [i_7] [i_7] = ((-((-1 ? 42770 : 1663051031))));

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        var_22 = ((var_8 - (-4096 <= 8387942131594255882)));
                        arr_32 [i_5] [i_6] [i_7] [i_10] = -100;
                        var_23 &= (((arr_17 [i_5]) ? (arr_21 [5] [i_6] [5]) : (((arr_20 [i_5] [i_7] [i_10]) ? var_8 : (arr_31 [i_5] [i_5 - 1] [i_5] [i_5 - 1])))));

                        for (int i_11 = 1; i_11 < 12;i_11 += 1)
                        {
                            arr_35 [i_5] [2] [6] [i_10] [i_10] = ((var_8 * (arr_17 [i_5 + 1])));
                            var_24 = 106;
                            arr_36 [i_5] [i_5] [i_5] [i_5] [i_5 - 1] [i_5] = ((((arr_34 [12] [1] [i_7] [i_10] [i_11]) ? 1125899906842623 : var_13)));
                            var_25 += (arr_28 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5]);
                        }
                        for (int i_12 = 2; i_12 < 11;i_12 += 1)
                        {
                            arr_40 [i_5 - 1] [i_6] [i_5 - 1] [i_10] [i_12] = (arr_37 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1]);
                            arr_41 [i_12] [i_12] [i_5] [i_10] [i_12] [12] [i_6] = (((arr_18 [i_12 + 1]) << (var_2 - 52926)));
                            arr_42 [i_6] [i_7] [i_10] = (arr_34 [i_5] [i_6] [i_7] [1] [4]);
                        }
                    }
                    arr_43 [i_5] [i_6] = ((((((arr_17 [i_5 - 1]) ? (((arr_19 [i_6]) >> (var_2 - 52968))) : (arr_24 [i_5] [i_5 - 1] [i_7] [i_7])))) || 2679257908449296284));
                }
            }
        }
    }
    var_26 = var_1;
    #pragma endscop
}
