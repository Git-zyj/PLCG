/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    var_11 = (max(var_11, (((var_9 << (var_7 - 1785605828159955100))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    var_12 = (max(var_12, (((+(((arr_3 [i_0 - 2]) % (arr_3 [i_0 - 2]))))))));
                    var_13 = var_2;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_14 = (min(var_14, (((((arr_3 [i_2 - 2]) ? (arr_0 [i_0 - 1]) : (arr_3 [i_2 + 2])))))));
                                var_15 = (max(var_15, (((~(max((arr_2 [i_2 + 3]), (arr_2 [i_2 - 2]))))))));
                            }
                        }
                    }
                    arr_13 [i_2] [i_1] [i_1] [3] = ((((((max((arr_9 [i_2] [i_2 - 2] [i_0] [i_0]), (arr_6 [i_2] [i_2]))) != (arr_11 [i_1] [i_2] [i_0] [i_2] [i_2] [i_2] [i_0])))) ^ (arr_9 [i_2] [i_2] [1] [i_0])));
                }
                for (int i_5 = 1; i_5 < 11;i_5 += 1)
                {

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        arr_18 [i_0] [i_1] [i_5] [i_6] = (((arr_16 [i_5] [i_5] [i_0 - 2]) ? (arr_12 [i_5 + 4] [i_5] [i_0 + 2] [i_6] [i_0]) : 9407));
                        var_16 = (arr_11 [i_1] [i_1] [i_1] [13] [13] [i_5] [i_1]);
                    }
                    var_17 = ((~(max((~96), var_4))));
                    var_18 = (((((-(~var_8)))) ? ((~(arr_1 [12] [i_1]))) : ((-(arr_1 [i_1] [i_5])))));
                }
                var_19 = min(10318, 1);
                var_20 = (min(var_20, (((0 || ((((arr_17 [i_1]) / (arr_17 [i_1])))))))));
                var_21 = (max(var_21, -10319));
            }
        }
    }

    /* vectorizable */
    for (int i_7 = 4; i_7 < 23;i_7 += 1)
    {
        var_22 = 1;
        arr_21 [21] = 1;
    }
    for (int i_8 = 3; i_8 < 11;i_8 += 1)
    {
        arr_26 [i_8] = (arr_24 [i_8] [i_8]);
        var_23 = (((arr_15 [i_8] [i_8] [i_8]) ? ((((192 < ((((arr_2 [i_8]) == (arr_14 [i_8 - 2] [i_8 - 2] [12] [i_8])))))))) : (min((max((arr_23 [i_8 + 1]), 89)), 185))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                {

                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        arr_34 [i_8] [i_9] [i_9] [i_11] = (((arr_12 [i_8 - 3] [i_9] [i_9] [i_10] [i_11]) << var_2));
                        var_24 = (~1);
                    }
                    arr_35 [i_8] [i_8] [i_9] [i_9] = ((((min(107, 2083210838945402014))) ? ((((min(1, -181873888558053369))) ? (((arr_7 [i_10] [i_9] [i_10]) - (arr_4 [i_8 - 3] [i_9] [i_10] [i_9]))) : (arr_9 [i_10] [i_9] [i_10] [i_10]))) : (min((arr_24 [i_10] [i_9]), (((arr_28 [i_8]) ? -653296940 : 10495))))));

                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        arr_39 [i_8] = (~-1742478704);
                        var_25 = ((((max((-30574 * var_1), (((0 < (arr_15 [i_8] [i_8] [i_10]))))))) % ((~(max(var_7, (arr_0 [i_9])))))));
                        var_26 = ((1 ? (max(((max(1, (arr_11 [i_8] [i_8] [i_9] [i_9] [i_10] [i_10] [i_12])))), 240)) : (((~120) & (arr_8 [i_8 - 3] [i_9] [i_10] [i_10])))));
                    }
                }
            }
        }
        var_27 = (max(var_27, (min((min((arr_2 [i_8]), (arr_31 [i_8]))), (!-120)))));
    }
    #pragma endscop
}
