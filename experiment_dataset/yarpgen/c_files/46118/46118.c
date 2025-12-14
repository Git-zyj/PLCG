/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_10 [i_0] [8] [i_2] [i_0] = (arr_9 [i_1] [7] [i_1]);
                    var_17 = 124;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_16 [i_0 + 2] [i_1] [i_0] [1] [i_4 - 2] = ((~(arr_11 [i_4] [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 2] [i_4 + 2])));
                                var_18 = (((~(min(161783043, 1)))));
                                var_19 = ((~(arr_0 [i_0])));
                                var_20 = ((~((~((max(var_16, (arr_7 [i_1]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = ((161783051 ? (~118) : (((~var_15) ? var_2 : (min(var_7, var_16))))));
    /* LoopNest 2 */
    for (int i_5 = 4; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 20;i_6 += 1)
        {
            {
                arr_22 [i_5] [i_5] = (arr_18 [14]);
                arr_23 [i_6] [i_5] [i_5 + 1] = 15944;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                {
                    arr_33 [i_7] [i_8] [7] = (arr_14 [i_7] [i_7] [i_8] [6] [i_9]);
                    var_22 = (min(((((arr_18 [i_8]) ? (arr_31 [i_7] [6] [9] [i_8]) : (max(41988, var_5))))), ((((2147483647 ? var_7 : 0)) / ((min(var_1, 20957)))))));
                    var_23 = (arr_29 [i_9] [i_9] [i_9] [i_9]);
                    var_24 = arr_25 [i_7] [i_7];
                    /* LoopNest 2 */
                    for (int i_10 = 3; i_10 < 8;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            {
                                arr_39 [i_7] [i_7] [i_7] [1] [i_7] = (max((arr_5 [i_11]), (1 > 17448586934640790981)));
                                var_25 = (412421903 >> ((((var_12 ^ (~4793986805430928309))) - 13652757268278651479)));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_12 = 0; i_12 < 19;i_12 += 1)
    {
        var_26 = ((~((min(1, 62361)))));
        var_27 = (min(var_27, ((min(((~(~4294967295))), (((var_1 ? (~var_14) : ((max(4759, 127)))))))))));
    }
    for (int i_13 = 1; i_13 < 18;i_13 += 1)
    {
        var_28 = (arr_17 [8]);
        arr_45 [i_13] [i_13] = ((1684076020 ? var_0 : ((+(((arr_20 [i_13]) - -93))))));
    }
    #pragma endscop
}
