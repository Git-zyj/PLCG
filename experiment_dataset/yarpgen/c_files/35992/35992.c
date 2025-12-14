/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_14 = var_13;

                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        var_15 = 4294967295;
                        var_16 = (arr_2 [i_0]);
                        arr_9 [i_0] [i_0] [i_0] [11] = (((arr_4 [i_0 - 3] [i_1 + 2] [i_2] [i_2]) ? ((var_13 ? (arr_7 [i_3 + 1] [13] [i_2 - 1] [i_1 + 1] [i_0 - 3] [i_0 - 3]) : (arr_1 [i_0]))) : -var_8));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {

                        for (int i_5 = 4; i_5 < 12;i_5 += 1)
                        {
                            var_17 = var_6;
                            arr_15 [i_0] [i_0] [i_1] [5] [5] [i_4] [i_5 - 4] = ((+((10578 ? (arr_7 [i_0] [i_4] [3] [i_0] [i_1] [i_0]) : var_5))));
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_5 - 3] = var_10;
                            var_18 = 10578;
                            arr_17 [i_5] [i_0] [i_2 + 1] [i_2] [i_0] [i_0] [i_0] = var_2;
                        }
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            arr_20 [i_6] [i_0] [i_1] [i_0] [i_0] = (arr_18 [i_0] [i_0] [i_2] [i_4] [i_6]);
                            arr_21 [i_0] [i_0] [i_0] [i_4] [i_0] [2] [i_1 - 1] = ((var_1 != (arr_7 [i_2 + 2] [i_2] [i_2] [i_1 + 1] [i_0] [i_0])));
                        }
                        for (int i_7 = 2; i_7 < 13;i_7 += 1)
                        {
                            var_19 = (((arr_18 [i_2 + 1] [i_0] [i_0] [i_0] [i_7]) ? (arr_18 [i_2 - 1] [i_0] [i_2 - 1] [i_4] [i_0]) : (arr_18 [i_2 + 2] [i_0] [i_2 + 2] [i_4] [i_0])));
                            var_20 = (arr_3 [i_0 - 4] [i_0 - 4] [i_0]);
                            var_21 += ((-((0 ? 0 : 56))));
                            var_22 = -266119912;
                        }

                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            var_23 -= ((((!(arr_19 [i_0] [i_1] [i_2] [8] [i_4] [i_4] [i_1]))) ? (arr_13 [i_0] [i_1 + 1] [i_0 - 1] [i_1 + 2] [i_0] [i_2 + 1]) : (arr_18 [i_0] [14] [i_0] [i_0 - 2] [i_0])));
                            var_24 = var_10;
                            var_25 = var_7;
                        }
                        var_26 = 9223372036854775807;
                        var_27 = ((!(arr_25 [i_0] [1] [6] [i_0 + 1])));
                        var_28 = (~(arr_22 [i_0]));
                    }
                    var_29 = -2411129140864681117;
                    var_30 = ((-(((arr_11 [i_0 - 4] [i_0 - 1] [i_0 - 1] [i_0 - 4]) ? (arr_11 [i_0 - 1] [i_0 + 1] [i_1 - 2] [i_2 + 1]) : (arr_11 [i_0 - 1] [i_1 - 1] [i_2 - 1] [i_2 + 2])))));
                    var_31 = (min((((((min(var_0, (arr_0 [i_0] [i_0]))))) % ((var_6 ? 5060557951977348373 : -14819)))), ((~((65535 ? (arr_24 [i_0] [i_0]) : var_11))))));
                }
                var_32 = (((arr_10 [i_0 - 3] [i_0 - 2] [i_1 + 2]) / 4294967295));
            }
        }
    }
    var_33 = (var_9 % var_1);
    #pragma endscop
}
