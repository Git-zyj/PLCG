/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= var_3;

    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        var_11 = (max(var_11, 5748));
        arr_4 [i_0] = (max((max(4563485455199161455, (arr_0 [i_0 - 1]))), 165));
        var_12 = (max((max(13883258618510390160, (arr_3 [18] [i_0]))), -1043900778));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 10;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        arr_15 [i_2] [0] [i_4] = var_6;
                        var_13 = 0;
                    }

                    for (int i_5 = 1; i_5 < 8;i_5 += 1)
                    {
                        var_14 -= ((max(var_2, ((2417351420 ? 1 : (arr_1 [i_3]))))));
                        arr_18 [1] [i_2] [i_2] [i_2] = (min((min((max(496, (arr_0 [21]))), (max((arr_7 [i_5] [i_2]), (arr_13 [i_2]))))), (((~(((arr_16 [i_5] [3] [3] [i_1]) ? 948232806 : 124)))))));
                    }
                }
            }
        }

        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            arr_21 [i_6] [i_1] &= (max(21, (arr_13 [i_1])));
            var_15 = (arr_5 [i_1]);
            arr_22 [i_1] [0] = (max(3538469135802066041, 1238463925));
        }
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 20;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 19;i_10 += 1)
                {
                    {

                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            var_16 ^= 1;
                            arr_34 [i_7] [i_8] [18] [i_10] [i_11] = 542974566;
                            var_17 = 8731569910539083741;
                        }
                        for (int i_12 = 1; i_12 < 20;i_12 += 1)
                        {
                            arr_38 [i_10] [i_10] = (max(((min(-638146470, (max(1, 3538469135802066041))))), ((-(arr_35 [i_7] [i_10 + 2] [i_10] [i_8 - 1] [i_12])))));
                            var_18 = (max(var_18, ((max(var_4, (arr_26 [i_8] [i_9] [i_9]))))));
                        }
                        arr_39 [i_10] = arr_29 [i_7] [i_7] [i_10 + 2] [i_10];
                        var_19 |= (((min((arr_31 [i_8 + 2] [i_8 + 2] [i_8] [i_10 + 3] [i_10] [8]), -1))) ? (((arr_31 [i_8 + 2] [i_10] [i_10] [i_10 + 3] [i_10] [i_10]) / (arr_31 [i_8 + 2] [i_10 - 2] [i_8 + 2] [i_10 + 3] [i_10] [13]))) : (arr_31 [i_8 + 2] [i_8 + 2] [i_10] [i_10 + 3] [i_10] [i_10 - 2]));
                    }
                }
            }
        }
        var_20 = (((91 ? (arr_24 [i_7] [i_7]) : (arr_26 [i_7] [i_7] [i_7]))));

        for (int i_13 = 2; i_13 < 20;i_13 += 1)
        {
            var_21 = (max(-346701981, (max(var_8, (arr_1 [12])))));
            var_22 = (((!(1 & -948232807))) ? (arr_28 [i_13] [14] [i_7]) : (max((arr_32 [i_13 + 2] [8] [i_13] [i_13 + 1] [i_13] [17] [i_13]), 3885625023)));
            var_23 = (max(var_23, ((max((min((min((arr_36 [i_7] [8] [i_13] [i_13] [8] [14] [i_13]), 3538469135802066051)), -1003086384)), ((min((arr_33 [18] [i_7] [16] [16] [1]), ((172 ? (arr_23 [i_7]) : (arr_1 [19])))))))))));
        }
        var_24 -= (max((arr_29 [i_7] [i_7] [12] [i_7]), (max((arr_28 [i_7] [i_7] [i_7]), -1))));
    }
    var_25 ^= ((max(var_0, -3538469135802066076)) / 1933593086);
    #pragma endscop
}
