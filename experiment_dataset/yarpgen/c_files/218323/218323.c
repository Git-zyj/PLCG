/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= (~((-(var_12 + var_5))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((-(!var_13)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 = (((((arr_4 [i_2]) ? (arr_4 [i_0]) : var_8)) & (((-(arr_4 [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [1] [i_2] [i_0] [i_4] [i_4] [i_3] = ((((((arr_11 [i_0] [i_1] [i_0] [i_3] [i_4]) ? var_7 : var_4))) / (max((min(-41316704646911218, 0)), ((~(arr_7 [i_0])))))));
                                var_18 = 8239824798103549299;
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 8;i_7 += 1)
            {
                {
                    var_19 ^= (((min(0, var_15)) != (arr_6 [i_7 + 3])));
                    var_20 = ((-((((max(var_5, var_1)) < (((7418065285202027418 ? (arr_5 [i_5] [i_7] [i_7]) : var_2))))))));
                }
            }
        }
        var_21 = (min(var_21, ((max(((min(745659768, 75))), ((0 ? (arr_4 [i_5]) : (arr_4 [i_5]))))))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        var_22 += (((arr_9 [i_8] [i_8] [i_8] [i_8] [i_8]) ? (arr_9 [i_8] [i_8] [i_8] [i_8] [i_8]) : (arr_9 [i_8] [i_8] [i_8] [4] [i_8])));
        var_23 = ((var_10 ? 0 : ((-76 ? (arr_10 [i_8]) : var_3))));
    }
    /* vectorizable */
    for (int i_9 = 4; i_9 < 20;i_9 += 1)
    {
        arr_24 [i_9 - 3] = (var_8 - var_7);
        var_24 = (((arr_22 [i_9] [i_9]) ^ (((var_2 ? 3444531052494305287 : (arr_23 [i_9]))))));
        var_25 ^= ((-((var_11 ? var_7 : var_8))));
        arr_25 [i_9] = (arr_22 [i_9 - 1] [i_9]);
    }
    #pragma endscop
}
