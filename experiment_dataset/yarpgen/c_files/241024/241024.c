/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    var_12 = 2220645800;
                    arr_6 [i_0] [i_0] [i_0] = var_5;
                }
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    var_13 = (((((-1600567268 != var_1) ? var_7 : (arr_8 [i_0] [i_1] [i_3] [i_3]))) % (((((var_9 ? 13746 : (arr_1 [i_1])))) * (arr_0 [i_1])))));

                    /* vectorizable */
                    for (int i_4 = 4; i_4 < 10;i_4 += 1)
                    {

                        for (int i_5 = 4; i_5 < 10;i_5 += 1)
                        {
                            var_14 = 18446744073709551615;
                            var_15 += (((arr_11 [i_5 - 1] [3] [i_3] [i_4 - 4] [i_5]) < -1048320));
                            var_16 = (max(var_16, (((((-72 | (arr_8 [i_0] [i_0] [i_0] [i_0])))) ? (arr_4 [i_4] [i_3] [i_4] [i_4]) : (((arr_2 [i_0] [i_0]) ? var_7 : var_1))))));
                            var_17 = (max(var_17, ((((1048338 ? 51792 : 4293918957))))));
                        }
                        for (int i_6 = 2; i_6 < 9;i_6 += 1)
                        {
                            var_18 = (((arr_11 [i_4 + 3] [i_4 + 3] [i_4 + 1] [i_6 + 1] [i_6 + 3]) ? 13746 : 13746));
                            arr_16 [i_0] [i_1] [i_1] [0] [i_4] [i_3] &= var_5;
                        }
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            arr_21 [i_0] [i_1] [i_3] [i_1] [i_4] [i_0] = (1741709700740965249 * 0);
                            var_19 += 236;
                            var_20 = -99;
                        }
                        var_21 = (max(var_21, (arr_18 [i_4] [i_3] [0] [i_4] [12] [i_4 - 2] [2])));
                        arr_22 [i_0] [i_0] [i_0] [0] = ((+(((arr_2 [i_1] [i_4 - 3]) ? -1486255680 : var_8))));
                        var_22 = (1 ^ var_10);
                        var_23 = 4293918957;
                    }
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            arr_28 [i_0] [i_1] [i_1] [i_1] [i_1] = (((arr_15 [i_0] [i_1] [i_1] [i_8] [i_9] [i_0]) ? (arr_18 [3] [i_0] [i_1] [i_3] [i_3] [i_8] [i_9]) : var_2));
                            var_24 = ((var_4 < (arr_5 [i_0] [i_1] [i_3])));
                            var_25 = ((+(((arr_15 [i_0] [i_1] [i_3] [i_8] [5] [i_0]) ? (arr_17 [7] [i_0] [i_3] [i_3] [i_0] [i_0]) : (arr_10 [3] [3] [i_3])))));
                            var_26 -= (9 > var_7);
                        }
                        arr_29 [i_0] [12] [i_3] [i_8] = 65535;
                        arr_30 [i_0] [i_1] [i_3] [i_0] = (arr_4 [i_0] [i_0] [i_0] [i_0]);
                    }
                    var_27 = (max(1, 1868197791));
                    arr_31 [i_0] [i_1] [i_3] = ((var_8 ^ ((~((17 ? 62 : 2426769505))))));
                }
                var_28 = (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]);
            }
        }
    }
    var_29 ^= var_10;
    var_30 = (max(127, 186814508));
    #pragma endscop
}
