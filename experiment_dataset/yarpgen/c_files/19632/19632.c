/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_18 = (max(var_18, ((~((min(var_3, (((arr_2 [16] [i_0] [1]) == -956892937)))))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_19 = ((((((((arr_3 [3]) < var_6)) ? ((((arr_0 [i_0]) ? (arr_3 [i_0]) : var_5))) : (arr_6 [i_0 + 1] [i_4 - 1] [i_2 + 1])))) ? ((((var_11 % (arr_1 [i_4]))) << (((arr_9 [14]) - 15081171849954053564)))) : var_17));
                                arr_13 [13] [13] [17] [1] [i_4 + 2] [21] [i_1] = (min(((((arr_5 [i_2] [13]) == var_6))), ((-6378862362917410735 ? 255 : 1))));
                                var_20 = ((64 ? (3 / -3477745045072898084) : -3477745045072898103));
                                var_21 |= 463222252;
                            }
                        }
                    }
                }
                arr_14 [5] = ((((((min(var_4, var_2))) ? var_17 : 244))) ? (((((arr_11 [i_1] [1] [i_0] [i_0] [1]) ? (arr_9 [14]) : (arr_7 [i_0 - 1] [1] [1] [4]))))) : (((arr_0 [i_0]) ? ((9 << (((arr_1 [i_0]) - 140)))) : ((~(arr_7 [i_0] [i_0] [0] [i_1]))))));
            }
        }
    }
    var_22 = ((((var_15 ? var_1 : var_14))));

    /* vectorizable */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_23 = ((var_6 != (arr_7 [5] [23] [22] [15])));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                {
                    var_24 = (arr_22 [8] [i_5] [i_5] [i_5]);

                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        arr_25 [i_5] [i_6] [i_7] [i_7] [4] = ((4294967295 * var_15) + (arr_4 [i_5]));
                        var_25 = var_12;

                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            var_26 = (max(var_26, (arr_10 [i_5] [i_8])));
                            var_27 = (!9);
                        }
                    }
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {

                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            arr_32 [i_5] = ((var_3 * (((arr_18 [i_7] [i_5]) & (arr_9 [14])))));
                            var_28 -= (((arr_27 [i_7] [i_10] [i_11] [i_10] [i_11]) >= (((((arr_20 [i_6] [i_6]) >= 3477745045072898103))))));
                        }
                        var_29 = var_9;
                    }
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {

                        for (int i_13 = 0; i_13 < 15;i_13 += 1)
                        {
                            var_30 = (arr_10 [i_5] [i_7]);
                            arr_37 [14] [i_5] [14] [i_6] [i_7] [i_6] = -3477745045072898103;
                        }
                        var_31 = (min(var_31, (arr_24 [i_5] [i_6] [i_12] [1])));
                    }
                    arr_38 [5] [i_6] [i_5] = 1;
                    arr_39 [9] [5] [i_5] [i_5] = (((var_12 != var_1) << (((((arr_23 [i_5]) / (arr_11 [i_5] [i_5] [i_7] [i_7] [i_5]))) - 328537))));
                }
            }
        }
    }
    #pragma endscop
}
