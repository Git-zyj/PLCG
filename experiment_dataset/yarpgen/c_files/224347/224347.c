/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_12 = (min(var_12, (arr_1 [10])));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 11;i_4 += 1)
                            {
                                var_13 = min(733759289, -8592547184105552383);
                                arr_12 [i_0] [i_1] [i_1] [i_1] [i_4] [i_0] [i_1] = (((239 != (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) || (~var_6));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 11;i_5 += 1)
                            {
                                arr_16 [i_0] [i_3] [i_2] [i_3] [i_5] [6] [i_3 + 1] &= ((var_7 <= (arr_3 [i_3 + 1] [i_2 - 1] [i_2])));
                                arr_17 [i_0] [i_1] [i_2] [i_5] [i_5] [i_0] [i_0] = 4503599627370492;
                                var_14 = var_2;
                                arr_18 [i_0] [i_1] [i_2] [i_3] [i_5] = ((1 >> ((((-4884417965315363467 ? 171 : 939524096)) - 162))));
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_11 [i_3 + 1] [i_3] [i_3] [5] [i_3 + 2] [i_3]) ? 1046393697 : (arr_11 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3] [i_3] [i_3])));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 1;i_6 += 1)
                            {
                                var_15 *= ((~(1 || 3561208000)));
                                var_16 |= -109;
                            }
                            arr_22 [i_0] [i_1] [i_2] [i_0] = var_11;
                            arr_23 [i_0] [1] [i_2] [1] = var_4;
                            var_17 = (arr_21 [i_0]);
                            var_18 = (min((max(var_9, (~1))), (!137)));
                        }
                    }
                }
                var_19 = (min(var_19, (((var_8 + ((((arr_4 [6]) ? ((-20908 ? -90 : 511310076)) : 61))))))));

                /* vectorizable */
                for (int i_7 = 2; i_7 < 9;i_7 += 1)
                {
                    var_20 = (max(var_20, (((-((237 * (arr_10 [i_0] [4] [i_0]))))))));
                    var_21 = var_0;
                    var_22 = (4294967295 * 0);
                    arr_26 [i_0] [i_0] [i_0] = (((arr_7 [i_0] [i_0] [i_7]) ? var_5 : (arr_15 [i_1 + 2] [i_1] [i_7] [i_7 - 2])));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    arr_29 [i_0] [10] [i_0] [1] = ((21346 ? 50147 : 90));
                    var_23 = (min(var_23, (((733759271 & (var_0 - 50127))))));
                    arr_30 [i_0] [i_0] = arr_5 [i_1 - 2] [i_1 - 1] [i_1 + 1];
                }
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    var_24 = ((((((arr_0 [i_9]) ? (arr_0 [i_0]) : (arr_0 [i_0])))) && ((min(-509355896, 128)))));
                    arr_35 [i_0] = var_2;
                    arr_36 [i_0] [i_0] [i_9] [i_0] = (((max(-13952, -1))) ? (arr_1 [7]) : (max(var_1, 733759240)));
                    arr_37 [i_0] = (((var_11 - (arr_13 [i_1] [i_1] [i_0] [i_1] [i_1] [i_1 - 2] [i_9]))) - (arr_7 [i_0] [i_0] [i_0]));
                    var_25 ^= ((((~(arr_3 [i_1 + 1] [i_1] [i_1]))) > var_10));
                }
                for (int i_10 = 2; i_10 < 10;i_10 += 1)
                {
                    var_26 = max((((arr_13 [i_10 + 1] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_3 [i_0] [i_1 - 1] [i_10]) : (arr_13 [i_0] [i_1 - 2] [i_0] [i_0] [i_0] [i_0] [9]))), (arr_3 [i_1 - 2] [i_1] [i_10]));
                    var_27 = (max((((((arr_24 [i_0] [i_0] [i_0]) ? 4503599627370511 : var_6)) << (((arr_28 [i_0] [i_1] [i_1 + 2] [i_10]) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : 1046393697)))), ((min((arr_6 [i_0] [9] [i_0] [i_10]), (max(var_3, var_7)))))));
                    var_28 ^= ((+(((arr_33 [i_10 + 1] [i_10 - 2] [i_1 + 1] [i_1 - 2]) ? 12501 : (arr_25 [1] [1])))));
                }
            }
        }
    }
    var_29 ^= var_6;
    var_30 |= (var_2 ^ var_6);
    var_31 = var_6;
    #pragma endscop
}
