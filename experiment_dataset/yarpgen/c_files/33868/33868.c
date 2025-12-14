/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_17 ? var_16 : var_2));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_20 = (min((((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))) + ((max(var_10, var_1))))), (arr_1 [i_0])));
        var_21 = -var_18;
        var_22 = (arr_1 [i_0]);
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_23 = var_2;
                            var_24 = (max(((min((arr_8 [i_4] [i_3] [i_1] [i_1]), 127))), (min((arr_0 [i_1] [i_2]), ((max((arr_7 [i_1] [i_2] [i_3] [i_4]), 4294967295)))))));

                            for (int i_5 = 0; i_5 < 13;i_5 += 1)
                            {
                                var_25 = (((!4294967294) ? -10 : ((4294967278 ? ((min(4294967295, 4))) : (min((arr_2 [i_1]), (arr_8 [i_1] [i_1] [i_1] [i_5])))))));
                                var_26 = (min((arr_5 [i_2]), (((arr_5 [11]) ? ((var_18 ? (arr_12 [i_1] [i_1] [i_3] [12] [i_1]) : (arr_7 [i_2] [i_2] [11] [i_2]))) : ((((arr_2 [i_1]) ? (arr_13 [i_2] [i_2] [i_2] [i_2] [i_2]) : 15)))))));
                            }
                            for (int i_6 = 0; i_6 < 13;i_6 += 1)
                            {
                                var_27 = ((~(((~1922659931) ? ((var_8 ? var_4 : 1922659931)) : ((min(4294967284, 1)))))));
                                arr_16 [i_1] [i_1] [i_6] [i_1] [i_1] = (max(((max((arr_11 [i_1] [i_1] [i_3] [i_4]), ((~(arr_15 [i_1] [i_1] [i_1] [i_1] [i_6])))))), (((arr_1 [i_6]) ? var_17 : (2372307365 % 4294967275)))));
                                var_28 = ((-((-(arr_15 [i_1] [i_2] [i_3] [i_4] [i_6])))));
                                var_29 = -72;
                            }
                            var_30 = ((((max((((arr_12 [i_4] [i_3] [i_1] [i_1] [7]) ? (arr_8 [i_3] [i_3] [i_1] [i_1]) : var_7)), (arr_14 [4] [i_3] [i_3] [i_2] [i_3])))) ? (arr_1 [i_3]) : (((!((max(30191, (arr_10 [i_3] [i_3] [i_2] [i_1])))))))));
                        }
                    }
                }
                var_31 = ((-((((arr_12 [7] [i_1] [i_2] [i_1] [i_1]) != (arr_12 [i_2] [i_2] [i_2] [3] [8]))))));
            }
        }
    }

    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        var_32 = (min((max((arr_18 [i_7] [i_7]), (arr_18 [i_7] [i_7]))), (arr_18 [i_7] [i_7])));
        var_33 = ((37616 | ((122 ? -72 : ((-72 ? (arr_17 [i_7] [i_7]) : (arr_19 [i_7])))))));
    }
    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        var_34 = (min((((arr_22 [i_8] [i_8]) ? (arr_21 [i_8]) : (arr_21 [i_8]))), 216));
        var_35 = (min(((-(((arr_22 [9] [i_8]) ? (arr_23 [i_8]) : 18446744073709551587)))), (arr_23 [i_8])));
    }
    #pragma endscop
}
