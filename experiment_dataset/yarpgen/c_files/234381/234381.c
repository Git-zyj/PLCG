/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(((((((var_0 ? 43 : var_0))) ? (((max(var_8, var_10)))) : (max(-108, var_6))))), var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [2] = (max((((!(arr_3 [i_0] [i_1] [i_1])))), ((43 ? -62 : 3263882469488330815))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_13 = (max(var_13, (arr_0 [i_0])));
                                arr_12 [i_0] [i_1] [i_2] = (arr_7 [i_1]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = var_6;

    /* vectorizable */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_15 &= arr_15 [i_5] [i_5];
        var_16 |= ((-(arr_15 [i_5] [i_5])));
        var_17 = (arr_15 [i_5] [i_5]);
        arr_16 [i_5] [6] = (((arr_13 [i_5]) ? -39 : (((arr_14 [i_5]) & (arr_15 [i_5] [2])))));
        var_18 = (~-62);
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        var_19 = (((((15182861604221220800 ? (arr_18 [i_6] [i_6]) : (arr_17 [i_6])))) ? (~var_0) : (arr_18 [i_6] [i_6])));
        var_20 = (min(var_20, (!1026211404)));
        var_21 = (min(var_21, (~var_1)));
        arr_19 [i_6] = ((~(arr_17 [2])));
    }
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            {
                                var_22 = (min(var_22, (((~((~(arr_15 [i_8] [i_10]))))))));
                                var_23 -= (arr_27 [10]);
                            }
                        }
                    }
                    arr_31 [i_9] [i_9] [i_9] = (((~1222962856976154218) | ((((arr_18 [i_9] [i_8]) ? 590270557478353914 : (((((arr_23 [11] [12]) >= (arr_30 [i_7] [0] [i_9] [i_7] [i_7]))))))))));
                }
            }
        }
        var_24 = (arr_29 [i_7] [3] [3] [3] [i_7] [i_7] [i_7]);
    }
    var_25 = var_0;
    #pragma endscop
}
