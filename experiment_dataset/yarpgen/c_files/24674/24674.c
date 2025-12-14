/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = ((((min((arr_1 [i_0]), (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))))) ? (((((arr_1 [i_0]) ? 0 : (arr_0 [i_0] [i_0]))) * (var_16 - 1))) : var_9));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_19 = (1 ? (arr_0 [i_0] [i_0]) : (min(((1 | (arr_0 [i_0] [i_1]))), ((var_7 ? var_17 : var_9)))));
            var_20 = ((~((-(arr_2 [i_0] [i_1])))));
        }
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_21 &= (~(((arr_9 [1] [i_2] [8]) ? (arr_9 [1] [i_0] [1]) : var_15)));
                arr_11 [i_0] [i_0] [i_3] [i_2] = (-127 - 1);
                var_22 = (min(var_22, ((((arr_6 [i_2 - 1] [i_2 - 1]) ? (arr_4 [i_2 - 1] [i_2 - 1]) : (arr_5 [0] [i_2] [6]))))));
            }
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_23 = ((((var_5 ? (arr_0 [i_2] [i_2]) : (((arr_13 [i_0] [i_2 - 1] [i_4]) ^ var_16)))) & var_10));
                arr_14 [i_4] [i_2] [i_0] = min((((68 & 0) ? (arr_7 [i_4] [i_2] [i_0]) : (arr_8 [i_4]))), (arr_8 [i_2 - 1]));
                var_24 += min(((~(arr_12 [1] [1]))), (arr_3 [i_4] [i_0]));
            }
            var_25 = var_15;
            var_26 = min(((((1 ? (arr_4 [i_0] [i_0]) : (arr_9 [1] [i_2] [i_2]))) < ((var_13 ? 1 : (arr_0 [i_0] [1]))))), ((1 && (var_13 && 1))));
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 10;i_7 += 1)
                    {
                        {
                            var_27 = (min(var_27, var_9));
                            var_28 = 68;
                            var_29 = (min(((+(((arr_22 [i_0] [i_2] [i_5] [1] [i_5] [i_0] [i_0]) ? (arr_21 [9] [i_5]) : var_8)))), (arr_9 [i_0] [i_2 - 1] [i_2])));
                        }
                    }
                }
            }
            var_30 = ((((((~(arr_22 [2] [i_2] [i_2] [i_2 - 1] [i_0] [9] [i_0])))) ? (~var_12) : (arr_18 [i_0] [8] [i_2]))));
        }
        /* vectorizable */
        for (int i_8 = 1; i_8 < 9;i_8 += 1)
        {
            arr_26 [i_0] [i_8] = (((arr_21 [i_0] [i_8]) ? (arr_4 [i_8 - 1] [i_8 + 1]) : (((arr_23 [i_0] [i_8]) ? (arr_3 [i_0] [i_0]) : (arr_17 [i_8 + 2])))));
            arr_27 [i_8] [i_8] = 1;
            arr_28 [i_8] = arr_17 [i_0];
            var_31 = (max(var_31, (((((var_5 ? var_17 : (arr_23 [i_0] [1]))) & 0)))));
        }
        arr_29 [i_0] = (((((((var_3 ? 0 : (arr_0 [i_0] [4])))) ? (((min(var_0, (arr_24 [8] [8] [8]))))) : ((var_15 ? var_15 : 0)))) ^ ((-(arr_9 [i_0] [i_0] [2])))));
    }
    var_32 *= (max(-68, 16742703546344005857));
    var_33 = (min(var_33, ((((((var_5 / ((68 ? 1447337804004265431 : var_12))))) ? ((max(1, ((var_16 ? 0 : 0))))) : 3783212730055299032)))));
    #pragma endscop
}
