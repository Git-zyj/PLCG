/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((var_9 / -1856383474), var_7));
    var_20 = var_5;

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_21 = (max((min((arr_1 [i_0]), ((var_9 ? (arr_1 [i_0]) : 6)))), (arr_1 [i_0])));
        arr_4 [i_0] = ((!((((min(1, 1)))))));
        var_22 &= (((!-var_5) << (((arr_0 [i_0] [i_0]) - 35851))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_23 = (min(var_23, (arr_5 [i_1])));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        arr_16 [16] [16] [i_3] [i_4] = ((0 ? (arr_0 [i_2] [i_2]) : (min((min((arr_12 [i_1] [i_2] [i_1]), (arr_3 [i_3]))), (arr_9 [i_1] [i_3] [i_3] [i_1])))));
                        arr_17 [i_2] [i_2] [i_2] [i_1] = -0;
                        arr_18 [i_1] [i_1] [11] [i_3] [11] [i_1] = ((+(max((arr_3 [i_1]), (arr_3 [i_4])))));
                        var_24 = (~-13499);

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_22 [i_1] [i_2] [i_3] [i_3] [i_4] [i_5] [i_5] = -20;
                            arr_23 [i_1] [i_2] [i_1] [i_5] [i_2] [i_1] = ((~((~(arr_12 [i_5] [i_2] [i_3])))));
                            arr_24 [i_1] = arr_9 [i_1] [1] [i_4] [i_5];
                            arr_25 [i_1] [i_1] &= (arr_10 [i_1] [i_1] [i_5]);
                            arr_26 [i_1] [13] [13] [i_1] [13] [i_1] [i_1] = (arr_20 [i_1] [i_1] [2] [i_4] [i_5]);
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
    {
        arr_29 [i_6] = (+((32736 ? (arr_27 [i_6] [i_6]) : (arr_28 [i_6]))));
        arr_30 [i_6] = ((-(-1 * -177264358)));
        var_25 *= -1;
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
    {
        var_26 &= (-(min((arr_28 [i_7]), (arr_28 [i_7]))));
        var_27 = 415903278;
        arr_33 [i_7] [i_7] = ((-(arr_32 [i_7])));
    }
    #pragma endscop
}
