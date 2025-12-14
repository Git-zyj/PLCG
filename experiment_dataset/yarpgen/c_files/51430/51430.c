/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_0] [6] [i_0] = (((((arr_1 [i_0]) >> (var_5 - 109)))));
                        var_10 = var_7;

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            var_11 ^= var_4;
                            arr_15 [i_0] [i_0] [i_2] [i_1] [i_0] = (((min(((min(var_5, (arr_6 [i_4] [i_4] [i_2])))), (arr_3 [i_4] [i_4]))) >> ((((27 ? 30193 : ((243 ? (arr_13 [i_0] [2] [i_0] [2]) : 19)))) - 30183))));
                            var_12 = ((14 + (((((var_0 ? var_7 : var_6))) ? (arr_6 [i_0] [i_2] [i_4]) : ((min(21, var_6)))))));
                            arr_16 [6] [10] [i_0] = ((((max(16, var_5))) ? ((~((((arr_8 [i_3] [10] [i_3] [i_0] [7] [i_3]) <= 8307))))) : (254 <= 234)));
                        }
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            var_13 += (max((arr_0 [10]), var_7));
                            arr_20 [i_0] = ((((max((arr_17 [i_2] [i_1] [10] [8]), (arr_14 [i_1] [0] [i_1])))) ? (((var_7 > (arr_18 [i_3])))) : (~var_2)));
                        }
                        arr_21 [i_3] [i_0] [i_2] [10] [4] = ((((min((min(31, (arr_12 [i_1] [i_1] [i_2] [i_3] [i_1]))), (!167)))) < var_6));
                        arr_22 [i_0] [i_0] [i_2] = 170;
                    }
                }
            }
        }
        arr_23 [i_0] = (min((((arr_4 [i_0] [i_0] [i_0]) ? var_2 : ((6 ? 0 : (arr_13 [i_0] [i_0] [i_0] [i_0]))))), (17723 == var_1)));
        arr_24 [i_0] = (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 8;i_7 += 1)
            {
                {
                    var_14 = ((+((3 ? ((var_6 ? (arr_26 [i_0]) : var_5)) : ((var_5 >> (223 - 220)))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 10;i_9 += 1)
                        {
                            {
                                arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] = var_9;
                                var_15 = (~var_0);
                                arr_37 [i_8] [8] [2] [i_0] [i_8] |= (((min((15676 ^ 68), (~var_1))) | (((arr_35 [i_0] [i_8] [i_8] [i_8]) | (((arr_32 [i_0] [i_6] [i_7] [i_8] [0] [i_8]) ? var_8 : var_4))))));
                                arr_38 [i_0] [i_0] [i_7] [i_8] [i_7] = var_3;
                                var_16 = ((min(((var_3 ? var_9 : var_4), var_4))));
                            }
                        }
                    }
                    arr_39 [i_0] [i_6] [i_0] = ((((!((min(var_4, (arr_30 [6] [i_6] [6] [3]))))))));
                    arr_40 [i_0] [6] [i_0] [i_0] = (max((((((min(var_2, (arr_25 [5] [5] [i_0])))) != var_0))), (min(260, (arr_28 [i_0] [i_6] [i_0])))));
                    var_17 = (min(var_17, (239 + 51670)));
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 18;i_10 += 1)
    {
        var_18 = (((((var_4 ? var_9 : var_0))) * (arr_42 [i_10] [i_10])));
        var_19 = (((arr_41 [i_10]) * (arr_42 [0] [i_10])));
    }
    var_20 = var_5;
    #pragma endscop
}
