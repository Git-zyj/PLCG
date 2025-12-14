/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = -31457;
                var_19 = (((~var_7) / (arr_2 [i_0] [i_0] [i_0])));
                var_20 = ((((((-1940259407729818538 + 9223372036854775807) << (var_10 - 127)))) ? (arr_2 [i_0] [i_0] [15]) : (((arr_1 [i_1]) ^ (arr_1 [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_21 = var_5;
                            var_22 *= ((var_9 ^ (~118)));
                            var_23 &= (min(4, (arr_3 [i_2] [i_3])));
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {

                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            var_24 = (max(var_24, (arr_14 [i_0] [i_4] [i_6])));
                            var_25 *= -var_0;
                        }
                        var_26 = ((31447 ? (arr_15 [i_0] [i_5 - 2] [9] [9] [9] [i_5] [i_4]) : 31456));
                        var_27 *= ((((((-127 - 1) + (arr_11 [i_5])))) || ((((arr_0 [i_5]) / (arr_0 [i_1]))))));
                    }
                    for (int i_7 = 3; i_7 < 15;i_7 += 1)
                    {
                        var_28 = ((-1 ? (arr_12 [i_7 + 1] [i_7] [i_7 + 1] [i_7] [i_7 - 2] [i_7 - 2]) : (arr_12 [i_7] [i_7] [i_7 - 2] [i_7] [i_7 - 2] [i_7 - 2])));

                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            var_29 = (((31457 << (65535 - 65526))));
                            var_30 = (((arr_6 [i_0] [i_0] [i_7] [i_8]) ? (arr_19 [i_1]) : -12834));
                            var_31 = ((7 ? var_1 : 171));
                        }
                    }
                    var_32 = 1940259407729818548;

                    for (int i_9 = 2; i_9 < 14;i_9 += 1)
                    {
                        var_33 = ((var_17 >> (((((arr_18 [i_0] [i_0] [i_1] [i_1] [i_4] [i_9] [i_9 - 2]) + var_17)) + 63))));
                        var_34 = ((~(arr_5 [i_0] [i_0] [i_4] [i_9])));
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_35 = (arr_0 [1]);
                        var_36 = ((arr_4 [i_0] [i_0] [i_0] [i_10]) == (arr_13 [i_0] [i_1] [i_1] [i_1] [i_10]));
                    }
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        var_37 &= var_9;
                        var_38 = (((arr_24 [i_1] [13] [i_1] [i_1] [i_1] [i_1]) << (var_9 - 72)));
                        var_39 = ((var_1 && (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0])));
                        var_40 = (min(var_40, var_12));
                    }
                }
            }
        }
    }
    var_41 = (~var_8);
    #pragma endscop
}
