/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= 567453553048682496;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] = ((-((max(-94, (arr_10 [i_0 - 1] [i_1 - 1] [13] [13]))))));
                                var_16 = ((var_10 > ((var_4 ? (arr_1 [i_2] [i_2]) : var_4))));
                            }
                        }
                    }
                    var_17 = (arr_7 [i_0] [7]);
                }
            }
        }
    }
    var_18 = 567453553048682496;
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                {
                    arr_24 [i_5] [i_5] [i_7] [15] = (((!2116920606) || ((max((arr_10 [i_5 - 1] [i_5 - 1] [i_5] [i_5]), ((((arr_7 [i_5] [i_5]) || (arr_19 [i_6])))))))));
                    var_19 = (((max(((-567453553048682497 ? (arr_6 [i_5] [i_5] [i_5] [i_7]) : var_1)), ((-(arr_6 [i_5] [i_6] [i_5] [i_7]))))) * (((arr_4 [i_5 + 2]) ? (arr_4 [i_5 + 2]) : (arr_4 [i_5 + 2])))));
                }
            }
        }
    }

    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {
        arr_27 [i_8] = (((max((arr_2 [i_8]), (arr_8 [i_8] [i_8] [i_8])))) ? (arr_2 [i_8]) : ((((((62 ? 62 : var_1))) == (arr_19 [i_8])))));
        var_20 = (max(var_20, ((((var_8 ? (((193 * (arr_10 [i_8] [i_8] [i_8] [i_8]))) : ((-532045451 ? 123 : 2479522704)))))))));
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                {

                    for (int i_11 = 3; i_11 < 11;i_11 += 1)
                    {
                        var_21 |= (arr_6 [i_8] [i_8] [i_10] [i_8]);
                        var_22 = (3655889352 + -834221049);
                    }
                    for (int i_12 = 1; i_12 < 11;i_12 += 1)
                    {

                        for (int i_13 = 1; i_13 < 10;i_13 += 1)
                        {
                            var_23 |= (((max((arr_31 [i_12 + 1] [i_13]), (arr_7 [5] [5]))) != (((arr_12 [i_8]) ? (arr_31 [i_9] [i_9]) : var_1))));
                            var_24 = ((((((arr_37 [8] [i_9] [i_9] [i_9] [i_13]) >= (arr_30 [1] [i_9] [1]))) ? 17719448659660276840 : ((24576 ? 15 : 36028797018439680)))));
                            arr_39 [i_12] [i_13] [i_12] [i_12] [i_9] [i_12] [i_12] = arr_6 [i_8] [i_9] [i_9] [i_12];
                            var_25 = -4124535064605464633;
                        }
                        arr_40 [i_12] [i_10] [i_10] [i_8] &= (min(123, 0));
                    }
                    var_26 = (((((~(arr_25 [i_8] [i_9 + 1])))) ? (arr_28 [0]) : ((~((12677628341334117688 ? -567453553048682496 : -4124535064605464633))))));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 12;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 9;i_15 += 1)
                        {
                            {
                                var_27 = (min(var_27, var_7));
                                var_28 *= ((((((arr_2 [i_8]) ? (arr_30 [i_8] [7] [3]) : -1024))) ? ((min(1815444574, 2479522722))) : (((arr_2 [i_8]) ^ var_3))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_16 = 4; i_16 < 18;i_16 += 1)
    {
        var_29 = (max(var_29, (arr_47 [i_16 + 2])));
        arr_49 [0] [i_16] &= (((190 == 1610612736) || (((4294443008 * (arr_48 [10] [i_16]))))));
        arr_50 [i_16] [i_16] = 396796712;
    }
    #pragma endscop
}
