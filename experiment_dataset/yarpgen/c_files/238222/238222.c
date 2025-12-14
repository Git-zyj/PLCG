/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((var_13 ? (~var_9) : (min(var_5, var_8))))) ? (max((var_15 - var_0), (~286330601))) : (((~(var_8 + var_15))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_20 = (min(var_20, (((!(arr_3 [i_3 + 1]))))));
                            arr_12 [i_0] [i_2] [i_1] [i_0] = (((arr_8 [i_0] [i_1] [4] [i_3 + 1] [i_1]) ? (arr_8 [i_0] [i_0] [i_0] [i_3 + 1] [i_3]) : (((arr_5 [9] [9] [i_2] [i_0]) ? (arr_8 [i_0] [i_1] [i_2] [i_3 + 1] [i_0]) : var_18))));
                        }
                    }
                }

                for (int i_4 = 2; i_4 < 9;i_4 += 1)
                {
                    arr_15 [i_0] [i_1] [i_0] = (min(2305843009213693951, 286330616));
                    arr_16 [i_0] [i_1] [i_0] = (-1897751736 ^ 0);
                    var_21 = (arr_11 [i_0] [i_0] [i_4 - 1] [1] [i_4 - 1]);
                    arr_17 [i_0] [i_1] [i_0] = (~var_14);
                }
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    var_22 = (min(var_22, ((23625 ? 3 : -4518052519665103431))));
                    var_23 = var_15;
                    var_24 -= ((~(arr_14 [i_0] [i_1] [i_5] [2])));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                arr_26 [i_0] [7] [i_0] [i_6] [i_5] [i_0] [i_0] = (i_0 % 2 == zero) ? (((~((((var_9 ? var_10 : var_1)) >> (((arr_2 [i_0] [i_0]) - 13599538933141629575))))))) : (((~((((var_9 ? var_10 : var_1)) >> (((((arr_2 [i_0] [i_0]) - 13599538933141629575)) - 7833099948647240052)))))));
                                var_25 = (arr_9 [i_0] [i_0] [i_7] [i_6]);
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        arr_31 [i_0] [i_0] [i_0] [i_9] [i_0] [i_9] = (arr_27 [i_0] [i_0] [i_8] [i_0]);
                        arr_32 [i_0] = ((((var_9 ? (arr_4 [4] [i_0] [i_8] [i_0]) : (arr_2 [i_0] [i_0]))) % (arr_27 [i_0] [i_0] [i_0] [i_0])));
                        var_26 = (max(var_26, (!-1062950773)));
                    }
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        var_27 |= (((~(arr_6 [i_0] [i_8] [0]))));
                        arr_36 [i_0] = (arr_21 [i_0]);
                        arr_37 [i_0] [i_8] &= (arr_6 [i_0] [i_8] [i_8]);
                        var_28 = (arr_8 [i_0] [i_0] [6] [i_0] [i_0]);
                    }
                    arr_38 [i_0] [i_8] [i_0] [i_8] = (((arr_13 [i_0] [i_0] [9] [i_8]) ? (arr_0 [i_0]) : (arr_13 [i_0] [i_0] [i_0] [i_0])));
                    arr_39 [i_0] [i_1] [i_8] |= ((arr_4 [i_0] [i_8] [i_1] [i_8]) ? (arr_4 [i_0] [i_8] [i_8] [i_1]) : (arr_5 [i_8] [i_1] [i_0] [i_8]));
                }
                arr_40 [i_0] [i_1] = (((((~(((arr_7 [i_0] [i_0] [i_0] [i_1]) ? (arr_20 [i_0] [i_1] [i_0] [i_0]) : (arr_7 [i_0] [i_1] [i_0] [i_1])))))) ? (arr_3 [i_1]) : var_2));
            }
        }
    }
    var_29 ^= var_5;
    #pragma endscop
}
