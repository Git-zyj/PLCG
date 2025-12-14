/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_20 = (max(var_20, ((((!(15 == -39))) ? ((1 ? ((-103 ? 4 : 8685)) : (~var_17))) : ((min(-113, 49314)))))));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_14 [i_0 - 2] [i_0] [i_0] [i_0 - 2] [i_4] = (max((((((!(arr_9 [i_0 - 1] [i_1] [i_3] [i_3] [i_3]))) || ((min(67108863, -113)))))), 24859));
                            var_21 = (min(-var_18, (min((arr_4 [i_2] [i_3] [i_2]), (arr_4 [18] [i_1] [18])))));
                            arr_15 [i_3] [i_4] [15] [i_3] [15] = ((max((arr_8 [i_0 + 1] [i_0 - 2]), (-9223372036854775807 - 1))));
                            arr_16 [i_4] [i_0] [i_2] [i_1] [i_4] = -1713227763;
                        }
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            var_22 = ((max(15, var_8)) >= (arr_13 [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_0 - 1] [i_5]));
                            var_23 = 153816420;
                            var_24 = (arr_5 [i_0 - 2]);
                            arr_20 [i_5] = 4227858432;
                        }
                        var_25 = (min(var_25, (65535 <= 2051655229)));
                        var_26 = ((((((!1773947036) | (arr_19 [i_2] [i_1] [i_2])))) ? ((762662469 + (max(var_8, (arr_18 [i_0] [i_1] [i_2]))))) : var_10));
                    }
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_27 = (min(var_27, ((min(((min((arr_1 [i_0 + 1]), (arr_1 [i_0 - 2])))), var_13)))));
                        var_28 = (max(var_28, (((((max((arr_0 [i_0 - 2]), (arr_5 [i_0 + 1])))) < (arr_19 [i_6] [i_2] [i_0 - 1]))))));
                        var_29 |= (max((((((var_14 ? (arr_6 [i_0 - 2] [i_1] [i_0 - 2]) : var_15)) << (var_11 + 5795350215412537718)))), (max(3925106456, (arr_1 [i_0 + 1])))));
                    }
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        var_30 = (min(var_30, (arr_12 [i_0] [i_1] [i_2] [i_7])));

                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            var_31 = (min(var_31, (((((!-1773947037) ? (arr_12 [i_0] [i_7] [i_2] [i_7]) : ((var_1 ? 0 : (arr_18 [i_7] [i_2] [i_0 + 1]))))) ^ (((-((53645 ? 22342 : var_15)))))))));
                            var_32 = 1;
                            arr_28 [i_8] [i_0] = ((((-41 ? var_5 : var_7)) > var_18));
                        }
                        for (int i_9 = 2; i_9 < 23;i_9 += 1)
                        {
                            arr_31 [i_7] [11] [i_7] [i_7] [11] [15] [i_7] = (min((((arr_25 [i_0 + 1] [i_9 + 1] [i_9 - 1] [i_0 + 1] [i_0 + 1] [i_0]) ? (arr_5 [i_0 + 1]) : (arr_18 [i_0 + 1] [i_0 + 1] [i_0 - 2]))), (arr_5 [i_0])));
                            var_33 &= 1;
                            var_34 = (((127 ? 1881 : -102)));
                        }
                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            var_35 = var_13;
                            var_36 = (arr_21 [i_10] [i_10] [i_2] [9] [i_10] [i_7]);
                            arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = arr_32 [i_7] [i_0];
                        }
                        arr_36 [i_0] [i_0] [i_0] [i_0 - 1] = var_1;
                        arr_37 [i_0 - 1] [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0] &= ((arr_9 [i_0 - 1] [i_2] [i_2] [i_1] [i_0 - 1]) - ((((!1) << (((~762662475) - 3532304791))))));
                    }
                    var_37 = var_1;
                    /* LoopNest 2 */
                    for (int i_11 = 3; i_11 < 20;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 24;i_12 += 1)
                        {
                            {
                                var_38 = ((((min(52, 3199364535))) ? (max(1, 1095602749)) : 1));
                                var_39 = (max(var_39, 1252587874));
                                var_40 *= (!(((arr_21 [i_1] [i_12] [i_11 + 4] [i_1] [i_1] [i_0 + 1]) <= (min(39836, var_2)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_41 ^= ((27 && (((var_12 ? ((var_2 ? 228 : var_9)) : var_7)))));
    #pragma endscop
}
