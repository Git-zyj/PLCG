/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 = (max(var_14, (arr_0 [i_0])));
        var_15 &= (((((221 ? 642646017 : (arr_2 [i_0])))) || -146540255));
        var_16 = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_5 [i_1] [3] = arr_0 [i_1];
        arr_6 [i_1] = -var_0;
        var_17 = (arr_3 [i_1]);
        var_18 = ((~((~((~(arr_0 [i_1])))))));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        var_19 = (max(var_19, ((((arr_2 [i_2 - 2]) == (arr_8 [i_2 + 2]))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 20;i_5 += 1)
                {
                    {
                        var_20 = (arr_13 [15] [i_3] [9] [i_5]);
                        var_21 = -21705;

                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            var_22 ^= (arr_14 [i_2 + 1] [i_6] [i_2 + 1]);
                            var_23 = (max(var_23, (arr_18 [i_2 + 1] [i_5 - 3] [i_5] [i_5 - 3])));
                            var_24 ^= (arr_1 [i_2 - 1]);
                        }
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            var_25 += (arr_19 [i_2] [i_3] [i_4] [i_5] [20]);
                            arr_23 [i_7] [i_5 + 1] [i_7] = (((arr_13 [i_2] [i_3] [i_4] [i_5 - 1]) ? (!642645989) : (arr_21 [i_2] [i_3])));
                        }
                    }
                }
            }
        }
    }
    var_26 &= var_11;
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 14;i_9 += 1)
        {
            {

                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_11 = 4; i_11 < 13;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 15;i_12 += 1)
                        {
                            {
                                arr_37 [i_11] = (arr_0 [i_8]);
                                arr_38 [i_11] [i_11] [i_9] [i_9] [i_11] [i_11] [i_11] = (min((arr_14 [i_9 + 1] [i_9 + 1] [i_11 - 3]), (arr_17 [7] [i_11 - 4] [3] [i_9 - 2])));
                                var_27 = (max(var_27, var_10));
                                arr_39 [i_8] [i_8] [i_11] [i_8] [14] = (arr_14 [i_9] [i_9 + 1] [i_11]);
                                var_28 ^= (((arr_27 [i_8] [i_8] [i_8]) != (((~(arr_21 [i_9 - 2] [i_9 - 1]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 2; i_13 < 14;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 15;i_14 += 1)
                        {
                            {
                                var_29 = (((arr_24 [i_9 + 1]) ? (arr_24 [i_9 + 1]) : ((-(arr_24 [i_9 + 1])))));
                                var_30 = (arr_40 [i_8] [i_9] [14] [14] [14]);
                            }
                        }
                    }
                }
                var_31 = (min(var_31, (arr_21 [i_8] [i_9 - 2])));
                var_32 = ((((((arr_3 [i_9 + 1]) ? (arr_15 [i_8] [i_9] [9] [i_8]) : (arr_15 [i_8] [i_8] [3] [3])))) ? (arr_15 [i_8] [i_9] [i_8] [4]) : (((arr_3 [i_8]) ? (arr_15 [i_8] [i_8] [i_9] [i_9]) : (arr_15 [i_8] [i_9 - 2] [i_8] [i_9 + 1])))));
            }
        }
    }
    #pragma endscop
}
