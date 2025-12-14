/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (min(((~(var_2 || var_9))), (~124)));
    var_16 = 124;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
                {
                    var_17 = (((arr_5 [i_1] [23]) ^ ((var_6 ? var_13 : (arr_3 [i_0] [i_1 + 2])))));
                    var_18 = (max(var_18, (((~((((var_12 ? var_13 : var_0)) & (var_0 + var_1))))))));
                    var_19 ^= (((max((arr_1 [i_1 - 1]), (arr_1 [i_1 + 2]))) & ((~((~(arr_0 [4] [i_1 - 1])))))));
                    var_20 = (min(var_20, (arr_3 [i_1 + 1] [i_0])));
                }
                for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
                {
                    var_21 = arr_7 [i_0] [i_1 - 1] [i_0];
                    var_22 = ((-(~65535)));
                    arr_10 [i_1] [i_1] = (var_11 ? (((1 < 14382138017687301934) ? var_12 : (arr_5 [i_1 - 1] [i_0]))) : ((~((~(arr_5 [i_1] [i_3]))))));
                }
                for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
                {
                    var_23 = (((~1) | (min((arr_0 [i_1 + 2] [i_1]), var_12))));

                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_24 = (arr_2 [i_1]);
                        var_25 = (((((arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 1]) + 2147483647)) << (((((((~(arr_9 [i_1] [i_0])))) ? var_14 : (738293221 || var_0))) - 8030475391747169474))));
                        var_26 = (max(((58 >> (((arr_9 [i_1 + 1] [i_1 + 1]) - 64500)))), ((((0 ? -18060 : -123))))));
                    }
                    for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                    {
                        var_27 = (min((((((71 & (arr_4 [i_0] [i_1] [i_4] [i_6]))) < ((min((arr_7 [i_0] [i_1] [i_4]), 122)))))), (max((((arr_0 [i_0] [i_0]) ? (arr_4 [20] [i_1] [i_4] [i_4]) : var_6)), ((((arr_12 [10]) || (arr_16 [i_6] [i_4] [i_0] [i_0]))))))));
                        var_28 = ((-40 ? 9285 : 12234433577286668115));
                    }
                    for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
                    {
                        arr_20 [i_0] [i_1 + 2] [i_0] [i_0] [i_4] [i_7] |= var_7;
                        var_29 = (max(var_29, (arr_9 [i_4] [i_0])));
                        arr_21 [i_1] [i_0] [i_1 + 2] [i_1] = (+((max((((arr_0 [i_0] [i_1 + 1]) == (arr_4 [4] [5] [i_1] [i_0]))), (((arr_9 [i_0] [i_1]) != (arr_12 [i_4])))))));
                    }
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {

                        for (int i_9 = 1; i_9 < 21;i_9 += 1)
                        {
                            var_30 = ((!(((~(((9287 || (arr_27 [6] [i_1] [i_4] [i_8] [i_9])))))))));
                            var_31 = var_3;
                            var_32 = (min(((122 ^ (arr_4 [i_1 - 1] [i_1] [i_9 + 1] [i_9 - 1]))), ((((~var_6) | (~var_12))))));
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            var_33 = (max(var_33, (((((((arr_9 [i_4] [i_1]) < 1))) ^ (var_12 - 123))))));
                            arr_32 [i_0] [i_1] [i_4] [i_1] [9] [13] [i_10] = (arr_31 [i_0] [i_0] [i_1] [20] [i_8] [i_10]);
                            var_34 ^= ((var_12 ? (arr_14 [i_4]) : (arr_14 [i_4])));
                            var_35 = (arr_25 [i_0] [i_1] [13]);
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 25;i_11 += 1)
                        {
                            var_36 = ((((arr_34 [i_1 + 1] [i_1 + 1] [i_1 + 2] [i_1 + 1] [i_1 + 2] [i_4]) + 2147483647)) >> (-83 <= 56251));
                            var_37 = (((((arr_9 [i_4] [i_8]) ? 122 : (arr_34 [i_1 + 1] [9] [i_4] [i_1 + 1] [9] [i_0]))) + var_12));
                        }
                        var_38 &= ((+((((var_1 / var_3) != var_12)))));
                    }
                    var_39 = (9284 * 0);
                    var_40 = ((~(((arr_9 [i_1] [i_4]) ? (arr_9 [i_0] [i_1]) : (arr_9 [i_0] [i_0])))));
                    var_41 = (min(var_41, (max(((min((!-123), (arr_3 [i_1 + 1] [i_1 + 1])))), (((arr_24 [i_1 - 1] [i_1] [i_1 + 1] [i_4]) ? 32767 : (~62769)))))));
                }
                var_42 |= (((~var_12) < (((min(-2193091109524538012, 4014897283)) ^ var_12))));
            }
        }
    }
    #pragma endscop
}
