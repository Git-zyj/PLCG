/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = ((491908949 ? (arr_0 [i_0] [10]) : var_16));
        arr_3 [i_0] [i_0] = var_19;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_20 = (((((-(arr_0 [i_2] [17])))) ? (arr_5 [16]) : 255));
                        arr_10 [16] [i_1] [i_2] [i_3] = (arr_1 [i_0]);
                        var_21 = arr_7 [6];
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 10;i_6 += 1)
            {
                {
                    arr_19 [i_6 - 1] [i_5] = arr_16 [i_5] [i_4];

                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        var_22 = ((((((3173414854 ? (arr_20 [8] [i_4] [i_5] [i_4]) : 3173414855))) ? ((var_16 ? var_6 : var_0)) : -var_13)) + (3173414855 + 3173414855));
                        arr_23 [i_4] [i_7] [i_6] [i_7] = arr_15 [i_4] [i_4] [i_7];
                    }
                    for (int i_8 = 2; i_8 < 10;i_8 += 1)
                    {
                        var_23 = ((var_18 ? ((-(arr_17 [i_6 - 2] [i_6 - 2] [i_6 - 2]))) : (((arr_17 [i_6 - 1] [i_6 - 3] [i_6 + 1]) | (arr_17 [i_6 - 3] [i_6 - 1] [i_6 + 1])))));
                        arr_27 [i_8] [i_8] [i_6] [8] = (((arr_5 [i_6 + 1]) && (((((arr_11 [i_5]) || (arr_18 [2] [i_5] [i_6])))))));
                    }
                    arr_28 [i_4] [i_4] [i_4] = min((((arr_24 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) ? (arr_4 [i_6 + 1]) : -10805)), var_10);
                }
            }
        }
        var_24 = min(((var_8 ? (arr_21 [i_4] [i_4] [i_4] [i_4]) : (var_4 && -32764))), ((var_8 ? (min((arr_12 [0] [0]), var_3)) : (arr_0 [i_4] [i_4]))));
        var_25 = (arr_6 [i_4] [i_4]);

        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            var_26 = (arr_18 [i_4] [i_4] [i_9]);
            var_27 = (min((max((arr_8 [i_4] [i_9] [i_9] [i_4] [i_9]), var_19)), (((arr_8 [i_4] [i_9] [i_9] [i_4] [i_9]) ? 33554431 : -1775))));
        }
        for (int i_10 = 2; i_10 < 8;i_10 += 1)
        {
            var_28 = (arr_6 [i_10] [0]);
            var_29 = ((~((max(93, -1)))));
        }
        var_30 = (((max(4294967295, (arr_15 [9] [i_4] [i_4])))) ? (arr_15 [i_4] [i_4] [i_4]) : ((4294967295 ? 0 : (arr_15 [i_4] [i_4] [i_4]))));
    }
    for (int i_11 = 0; i_11 < 11;i_11 += 1) /* same iter space */
    {
        var_31 = -4294967295;
        var_32 = (((min((arr_32 [i_11] [i_11] [i_11]), (arr_12 [i_11] [i_11]))) + ((((142 ? var_8 : (arr_12 [i_11] [i_11]))) - (arr_17 [i_11] [i_11] [i_11])))));
    }
    var_33 = ((-(((!-25761) + var_14))));
    #pragma endscop
}
