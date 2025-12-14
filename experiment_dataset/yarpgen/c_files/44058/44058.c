/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_3] = var_13;
                            arr_12 [i_0] [i_3] [i_2] [8] &= (((((((536870400 ? -108 : -24650))) != ((-4 ? 0 : (arr_8 [i_0] [i_0] [i_0] [i_3]))))) ? (((!(~66)))) : (max((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]), (var_18 % 1)))));
                            arr_13 [i_1] [i_1] = (~((((arr_8 [13] [i_1] [i_1] [i_1 + 1]) > (-119 || -23019)))));
                            arr_14 [i_0] [i_1] [i_2] |= (min(((max((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_9 [i_0] [i_0] [13] [i_2] [i_3])))), (((var_15 / 3402072078) ? (min((arr_9 [6] [12] [i_2] [8] [i_0]), 17557826306048)) : (var_7 / 2526028013653692058)))));
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {
                    var_19 |= (!-18587);
                    arr_18 [i_0] [i_1 - 1] |= (-1164436076 ^ (((arr_8 [i_0] [i_0] [i_0] [i_0]) ? var_14 : var_15)));
                    var_20 = (((((arr_15 [i_0] [1] [i_1]) ? 17875550503702403243 : (arr_2 [i_0] [i_0] [i_1]))) <= (((((arr_1 [i_0]) > 23027))))));
                }
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    arr_21 [i_1] = 536870407;
                    arr_22 [i_0] [i_1] [i_1] = ((+(min((1 / -26), -var_2))));
                    var_21 = var_14;
                    var_22 = (~var_7);
                }
                for (int i_6 = 4; i_6 < 13;i_6 += 1)
                {

                    for (int i_7 = 3; i_7 < 14;i_7 += 1)
                    {

                        for (int i_8 = 3; i_8 < 15;i_8 += 1)
                        {
                            var_23 = (max(var_23, var_7));
                            arr_32 [i_8] [i_0] &= (((var_0 | 282692937) ? ((((!(arr_3 [i_0]))))) : (min((min((arr_3 [i_0]), 4294967292)), (arr_16 [i_7] [i_8 - 3] [i_7 + 2] [i_6 - 2])))));
                            var_24 = (max((max((arr_16 [i_7 - 1] [i_1] [15] [i_7]), (arr_17 [i_7 - 1] [i_1] [i_7 - 1] [i_0]))), (((((min((arr_17 [i_0] [i_6] [i_7] [i_8]), (arr_7 [i_1] [i_1] [i_1] [i_1])))) || ((max((arr_10 [i_0] [i_1] [i_6] [5] [i_1]), var_16))))))));
                        }
                        var_25 = ((-(arr_6 [i_6 - 2] [i_6 - 1])));
                        var_26 = (-9223372036854775807 - 1);
                        arr_33 [i_1] [i_6] [i_1] [i_0] [i_0] [i_1] = var_6;
                    }
                    arr_34 [i_1] [i_1] [i_1] [i_1] = (((max((((arr_31 [i_1]) ? -1125164024 : var_9)), ((min(65530, 2670491526))))) == 3));
                    var_27 = (arr_7 [i_1] [i_1 - 1] [i_6] [i_6]);
                    var_28 |= (max(var_4, var_1));
                }
                var_29 = (((((~(arr_6 [i_1 - 1] [i_1 - 1])))) ? (((!(arr_6 [i_1 - 1] [i_1 - 1])))) : (arr_6 [i_1 - 1] [i_1 - 1])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 8;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 10;i_10 += 1)
        {
            {
                var_30 = var_3;
                var_31 = (arr_38 [i_9] [i_9] [i_10]);
                var_32 *= ((!(((arr_25 [i_10 + 1] [i_10] [2]) > (arr_7 [8] [i_9] [i_9 - 1] [i_10 + 1])))));
            }
        }
    }
    var_33 *= 2316992874;
    var_34 = (min(var_15, ((var_11 ? ((var_9 << (9223372036854775796 - 9223372036854775796))) : (var_17 ^ var_16)))));
    #pragma endscop
}
