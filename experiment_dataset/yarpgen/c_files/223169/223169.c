/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        var_14 = (min(var_14, 4294967295));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_15 = ((arr_9 [i_0] [i_1] [i_2 - 1] [i_3] [i_4]) % (arr_9 [4] [4] [4] [i_3] [i_4]));
                            var_16 = arr_13 [i_0] [i_0] [i_1] [i_0 - 1] [i_0] [i_0 - 1];
                            var_17 = arr_8 [i_0];
                        }
                        var_18 = ((arr_1 [i_0 + 2]) ? (arr_1 [i_0 + 4]) : (arr_1 [i_0 + 1]));
                        arr_14 [i_0] [i_0 + 1] [i_1] [i_0] = arr_2 [i_2 - 1] [i_2 + 1] [i_2 - 1];
                    }
                }
            }
            arr_15 [i_0 - 1] [i_0] [i_1] = 2013265920;
            arr_16 [i_0] [3] [i_1] = (((arr_13 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 3]) || (arr_5 [i_0 + 1] [i_0])));
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            var_19 ^= ((arr_13 [i_0] [i_0 + 1] [i_0 - 1] [i_0] [i_5] [i_0]) ? (arr_13 [i_0 + 4] [i_5] [i_5] [i_5] [i_5] [i_5]) : (arr_13 [i_0] [i_0] [i_0] [i_5] [i_5] [i_5]));
            var_20 ^= arr_2 [i_0 + 2] [i_0 - 1] [i_0 + 2];
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    {
                        var_21 -= 1;
                        arr_29 [i_0] = ((arr_5 [i_0 + 1] [i_0]) ? (arr_11 [i_0 - 1] [i_0 - 1] [i_7] [i_0]) : 4294967295);
                        var_22 += ((arr_11 [i_0] [i_0 + 3] [i_0] [i_6]) ? (arr_19 [i_7]) : (((arr_11 [i_0 + 1] [i_6] [i_7] [i_7]) ? (arr_19 [i_6]) : (arr_6 [i_6] [i_7] [i_7]))));
                        var_23 = (max(var_23, ((((arr_17 [i_0 + 4] [i_6]) == 4294967295)))));
                    }
                }
            }
        }
        arr_30 [i_0] [i_0] = (3816008981 ? (arr_3 [i_0 + 1] [i_0 + 4] [i_0 + 4]) : (arr_3 [i_0 + 4] [i_0 + 3] [i_0 + 4]));
        var_24 ^= ((arr_3 [i_0] [i_0] [i_0 + 3]) ? (arr_26 [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_0]) : (arr_17 [i_0 + 4] [i_0 + 3]));
    }
    for (int i_9 = 0; i_9 < 21;i_9 += 1)
    {
        /* LoopNest 3 */
        for (int i_10 = 1; i_10 < 20;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    {
                        var_25 = (((((arr_38 [i_10 - 1] [i_10] [i_10] [i_10 + 1]) ? (max((arr_40 [i_10] [i_10]), 67276889)) : 0))) ? (max((arr_34 [i_10 - 1] [i_10]), (arr_34 [i_10 + 1] [15]))) : (max(((((arr_36 [i_9]) == 1407880512))), (min(4294967295, 1)))));
                        arr_41 [0] [20] [i_10] [i_11] [i_12] [i_10] = max((max(4294967292, (arr_37 [i_9] [i_10] [i_11]))), (min(3773467458, (arr_34 [i_9] [i_9]))));
                        var_26 = arr_33 [i_10];
                    }
                }
            }
        }
        var_27 = arr_31 [i_9] [i_9];
        var_28 = max((((arr_32 [i_9]) ? ((2 ? (arr_32 [i_9]) : (arr_38 [i_9] [i_9] [i_9] [0]))) : (((arr_35 [i_9]) | (arr_35 [i_9]))))), (max((arr_35 [i_9]), 4235886370)));
    }
    var_29 = var_5;
    #pragma endscop
}
