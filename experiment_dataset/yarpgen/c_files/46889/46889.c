/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= var_10;
    var_16 = (-(((106 ? var_11 : -52))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (((((-125 ? 1312134771 : 1054))) ? ((8714688596889292385 ? 9 : 1)) : 2075975176));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_18 = -1760393767;
                                var_19 &= var_5;
                                arr_12 [i_0] [i_1] [i_2] [2] [i_3] [i_0] = ((((!(((var_5 ? (arr_8 [i_0] [i_1] [i_0] [i_0]) : (arr_1 [i_0])))))) ? ((min((arr_0 [i_0] [i_4]), -var_12))) : ((~(min((arr_7 [i_0] [i_0] [i_2]), (arr_11 [i_0] [i_1] [i_1] [i_0] [i_4])))))));
                                arr_13 [i_0] [i_0] = ((-((((max((arr_5 [1] [6]), var_13))) ? var_9 : (arr_0 [i_2 + 1] [i_4])))));
                                arr_14 [i_4] [8] [i_4] [i_4] [i_0] [8] [i_4] = (arr_1 [i_0]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_20 = (((~(arr_8 [i_1] [i_1 - 2] [i_1 - 2] [i_1]))));
                                var_21 = (~var_5);
                                arr_21 [i_0] [1] [i_0] [i_0] [i_6] = var_1;
                            }
                        }
                    }
                    var_22 = (max((((((-(arr_8 [i_0] [6] [i_2] [i_1])))) ? var_2 : 1)), var_11));
                }
            }
        }
        var_23 = (var_4 ? (((max(var_13, (arr_18 [i_0] [i_0] [5] [i_0] [i_0]))))) : (((!(arr_15 [i_0] [i_0] [i_0] [i_0])))));
        var_24 = (((min(71, 0)) ? ((~(max((arr_3 [i_0] [i_0]), var_5)))) : (arr_19 [7] [i_0])));
    }
    for (int i_7 = 3; i_7 < 12;i_7 += 1)
    {
        var_25 = min((max(var_6, (!1098263290))), var_11);
        var_26 = var_9;
        var_27 -= ((575334852396580864 ? 0 : 13137));
    }
    var_28 = var_4;
    #pragma endscop
}
