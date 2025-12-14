/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_16 = var_3;

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            arr_15 [i_0] [i_1] [i_1] [i_0] [i_4] = 25679;
                            var_17 ^= max(1, ((var_3 ? 9223372036854775807 : (((-(arr_6 [i_3])))))));
                            arr_16 [i_4] [i_1 - 1] [i_0] [i_4] [i_2] = (min(((((arr_12 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_1 - 1]) <= (arr_4 [i_0])))), (max(((((arr_5 [i_0]) && 1059088215))), (max((arr_14 [i_4] [i_1] [i_2] [i_3] [i_1]), var_3))))));
                            arr_17 [i_1 - 1] [i_1 + 1] [i_0] [i_1] = (arr_1 [i_1 - 1]);
                        }
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_18 = (max(var_18, (((-((var_1 ? var_6 : var_6)))))));
                            var_19 += var_13;
                            var_20 = -9223372036854775807;
                            var_21 = ((-(((arr_4 [i_0]) & (arr_4 [i_0])))));
                        }
                        arr_20 [i_0] = (var_5 ^ 1);
                    }
                }
            }
            arr_21 [i_0] [i_0] = ((((max((arr_18 [i_0] [i_0 + 2] [i_0]), var_5))) ? (arr_13 [i_1] [i_1] [i_0] [i_0] [i_1 + 1] [i_1] [i_1]) : (max((arr_11 [i_0] [i_0]), (arr_13 [i_1] [i_1] [i_1 - 1] [i_0] [i_1 - 1] [6] [i_1 + 1])))));
        }
        var_22 = (arr_5 [i_0]);
    }
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    {
                        arr_33 [i_8] [i_9] = 529434459;
                        arr_34 [i_6] [i_7] [9] [i_9] = max(var_7, var_6);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 13;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    {
                        arr_41 [i_10] [i_10] [i_10 + 1] = var_1;
                        var_23 = (((~(arr_30 [i_10 - 1] [i_6]))) <= (min((arr_30 [i_6] [i_6]), (arr_30 [i_6] [i_7]))));
                    }
                }
            }
        }
        for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
        {
            arr_45 [i_6] [i_6] = ((-(max((arr_31 [i_6] [i_6] [i_12] [i_12]), var_6))));
            var_24 += arr_5 [i_12];
        }
        arr_46 [i_6] = (min(1255303916, ((max((arr_31 [i_6] [i_6] [i_6] [i_6]), 1)))));
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 15;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 15;i_14 += 1)
            {
                {
                    arr_53 [i_14] [i_14] [i_13] [i_6] = -28398;
                    var_25 = (arr_0 [19]);
                }
            }
        }
    }
    for (int i_15 = 1; i_15 < 13;i_15 += 1)
    {
        arr_56 [i_15] = ((-(arr_0 [i_15])));
        arr_57 [i_15] = (arr_11 [i_15] [i_15]);
        arr_58 [i_15] [i_15 - 1] = min((((arr_30 [i_15] [i_15 + 1]) * var_12)), ((((~var_7) ^ (arr_40 [i_15 + 1] [i_15] [i_15])))));
    }

    for (int i_16 = 0; i_16 < 10;i_16 += 1)
    {
        var_26 = (((((+(max((arr_30 [i_16] [i_16]), var_11))))) ? ((5686245911768186273 ? -9223372036854775807 : (((var_5 ? (arr_25 [i_16] [i_16]) : var_1))))) : ((-(min(var_14, -9223372036854775807))))));
        arr_61 [i_16] [i_16] = (((arr_40 [i_16] [i_16] [i_16]) ? (arr_30 [i_16] [i_16]) : (((!(-2147483647 - 1))))));
        var_27 = var_15;
    }
    var_28 = -25370;
    #pragma endscop
}
