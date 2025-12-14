/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 = var_8;
        var_18 = ((~(((150 && (arr_1 [i_0] [i_0]))))));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        var_19 = var_12;
        var_20 ^= ((max((arr_1 [i_1 - 1] [i_1 - 1]), -115)) != 159);

        /* vectorizable */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_21 = (((~var_2) / var_11));
            var_22 = (arr_5 [i_2] [i_1 + 1] [i_1]);
        }
        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            arr_9 [i_3] [i_3] = ((~((~(min(var_16, (arr_6 [i_3] [i_3])))))));
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 9;i_5 += 1)
                {
                    {
                        arr_16 [i_3] = (((((~((var_6 ? 1020 : var_9))))) ? 174 : 1));
                        arr_17 [i_3] [i_3] [i_4 - 1] = ((~(((arr_13 [i_3] [i_3 + 1] [i_4] [i_5] [i_5 - 2] [i_3]) ? (arr_13 [i_4] [1] [1] [1] [i_5 - 3] [i_3]) : 77))));
                    }
                }
            }
            var_23 = 67;
        }
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        {
                            arr_27 [i_9] [i_9] [i_8] [i_7] [i_6] [11] = (((arr_2 [i_9] [i_6]) + (((178 ? (min((arr_10 [i_1] [i_6] [i_7] [i_9]), var_11)) : (101 != var_0))))));
                            var_24 = var_4;
                            arr_28 [i_6] [9] [i_7] [i_6] [i_1] = (arr_24 [i_7]);
                        }
                    }
                }
                var_25 *= ((((max(((var_9 ? 1 : (arr_0 [i_1 - 1]))), ((((arr_3 [i_1 - 1]) ? -3408 : 89)))))) ? (((~(var_10 | var_13)))) : (max((arr_20 [i_1 - 1] [i_1 + 1] [i_1 + 1]), (arr_20 [i_1 + 1] [i_1 - 1] [i_1 - 1])))));
                arr_29 [i_6] [i_1] = ((((~var_14) ? var_11 : ((min(-120, (arr_19 [i_7] [i_1])))))));
                var_26 -= ((var_11 ? 89 : (arr_1 [i_7] [3])));
            }
            arr_30 [i_6] [i_1] [1] = (~(max(((min(232, 1))), ((var_0 | (arr_5 [i_1 - 1] [i_1] [i_6]))))));
        }
    }
    /* vectorizable */
    for (int i_10 = 2; i_10 < 16;i_10 += 1)
    {
        /* LoopNest 2 */
        for (int i_11 = 2; i_11 < 16;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 18;i_12 += 1)
            {
                {
                    var_27 = (8952992915792319289 ? (4294967295 != var_13) : ((((arr_1 [i_12] [i_10 + 2]) <= var_2))));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 16;i_14 += 1)
                        {
                            {
                                var_28 -= ((var_5 >= (((-(arr_0 [i_13]))))));
                                arr_42 [i_14] [i_13] [i_12] [i_12] [i_10] [i_10] = (arr_0 [i_12]);
                                var_29 = ((~(arr_32 [i_10 - 2])));
                            }
                        }
                    }
                }
            }
        }
        var_30 = (105 <= -6362514087037865727);
        var_31 += 147;
        arr_43 [i_10 - 2] = (((arr_0 [i_10 + 1]) & var_13));
        var_32 -= (~162);
    }
    var_33 = ((((max(var_14, 4294967287))) - var_3));
    #pragma endscop
}
