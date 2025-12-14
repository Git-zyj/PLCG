/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_10 |= (((max(var_3, (arr_5 [i_0] [1])))) + (arr_3 [i_4]));
                                arr_15 [i_4] [i_4] [i_0] |= -3868904224;
                                arr_16 [i_0] [4] [i_1] [10] [i_3] [4] = (max((min(-41, 3868904208)), (((~(arr_0 [i_2 + 1] [i_2 + 1]))))));
                            }
                        }
                    }
                }
                arr_17 [6] [i_1] = var_3;
                var_11 = (min(((~(((arr_11 [i_0] [i_0] [i_0] [i_1] [i_1 - 2] [i_0] [i_1]) & 3583961521939233605)))), (arr_10 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 1])));

                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            {
                                var_12 = (((((2147483647 << (((arr_21 [i_0 - 2] [i_7] [i_6] [i_6 + 1]) - 2830824873))))) ? (((arr_21 [i_0 - 2] [i_7] [i_5] [i_6 - 1]) ? (arr_21 [i_0 - 1] [i_7] [i_0 - 1] [i_6 - 1]) : (arr_21 [i_0 - 2] [i_7] [i_1 - 3] [i_6 + 1]))) : (arr_21 [i_0 - 1] [i_7] [i_1] [i_6 + 1])));
                                arr_26 [i_0] [i_1 - 2] [i_5] [i_1] [i_1 - 2] = (arr_8 [i_0]);
                            }
                        }
                    }
                    arr_27 [i_1] [i_1] [i_1] = 3486816319;
                }
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    arr_30 [i_1] [i_1 - 2] [i_1] [i_1] = ((0 ? ((+(min((arr_20 [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 1] [i_0 - 2]), var_6)))) : (arr_3 [i_1])));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 18;i_10 += 1)
                        {
                            {
                                var_13 -= (min((((!(arr_25 [i_0] [i_0] [8] [i_9] [i_10])))), (min((arr_5 [i_0 - 2] [i_0]), -22817))));
                                var_14 -= (max(((min((arr_24 [i_0 + 1] [i_1 - 3] [i_1 + 1] [i_1 - 1] [16]), (((1 ? var_1 : 3868904231)))))), 18446744073709551615));
                                arr_36 [i_1] = (max((arr_28 [i_0 + 1] [i_1 - 3]), (min(1195826840, 0))));
                            }
                        }
                    }
                }
                var_15 |= ((!(((~(-77 >= 22794))))));
            }
        }
    }
    var_16 = var_7;
    var_17 *= ((var_1 ? ((min((!251), -var_2))) : (max(-9100551942359922105, (~1)))));
    var_18 = ((~((((max(8231453224994951723, var_1))) ? var_3 : (~var_2)))));
    var_19 = ((-(3868904224 | var_4)));
    #pragma endscop
}
