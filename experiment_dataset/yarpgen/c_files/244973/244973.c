/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    arr_7 [i_0] [i_1] [i_2] = (((((var_0 ? 458752 : 25) * ((((!(arr_0 [i_0])))))))));
                    var_19 += ((((arr_3 [i_2]) ? (arr_2 [i_2] [i_2]) : 2866080361)));
                }
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 16;i_5 += 1)
                        {
                            {
                                var_20 |= ((((max((arr_9 [i_0] [i_0] [i_0] [i_0]), (((-2147483647 - 1) + 247))))) ? var_13 : (~247)));
                                var_21 = ((~(arr_9 [i_5] [12] [i_5] [i_4 + 1])));
                            }
                        }
                    }
                    var_22 += (((+(max((arr_13 [i_0] [i_0] [i_1] [i_1] [11] [i_3] [7]), 247)))));
                }

                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    var_23 *= 0;
                    var_24 *= (!((max(((var_14 ? -12506 : 232)), ((var_9 ^ (arr_4 [i_0])))))));
                    var_25 = (max(((((max(55, -1))) ? (var_7 / var_8) : var_6)), (arr_8 [i_0])));
                }
                for (int i_7 = 2; i_7 < 14;i_7 += 1)
                {
                    arr_19 [i_0] [i_0] [i_7] [i_7] = (max((((arr_10 [i_7] [i_7] [i_1] [i_0]) & (~12117920912465634374))), (arr_2 [i_1] [10])));
                    var_26 ^= (max((max((arr_15 [i_0] [i_0] [i_0]), 84)), ((((22 - -22) ? ((max(6, 4))) : 0)))));
                    arr_20 [i_7] [i_0] [i_0] = (max((((arr_13 [i_7] [16] [i_7] [i_7 + 1] [i_7 - 2] [i_7 - 2] [i_0]) ? (((arr_4 [16]) % var_2)) : (((-(arr_16 [i_0] [i_0] [i_0])))))), -var_9));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    arr_23 [i_0] [i_1] [i_8] [i_8] = ((~(arr_18 [i_0] [i_1] [i_1] [i_1])));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                var_27 = (((arr_3 [i_10]) << (var_5 + 120)));
                                var_28 = (max(var_28, 319991114));
                                arr_29 [13] [i_1] = ((~(!18446744073709551605)));
                                var_29 = (max(var_29, 55));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 16;i_12 += 1)
                        {
                            {
                                var_30 *= (((var_2 - (arr_31 [i_0]))));
                                var_31 *= ((!(arr_33 [i_0] [i_12 - 2] [i_8] [i_11] [i_12 - 3] [i_1] [i_12])));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 0;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 18;i_14 += 1)
                    {
                        {
                            var_32 &= 515711933671679720;
                            var_33 = ((~(max(((14027302169370626178 % (arr_6 [i_0] [i_0]))), 3974976185))));
                            var_34 = (~((max((142 <= -6), (max(5, 64))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 15;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 15;i_16 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_17 = 3; i_17 < 11;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 15;i_18 += 1)
                    {
                        {
                            arr_49 [i_18] [i_18] [i_17] [12] [i_16] [i_15] |= (((arr_46 [3] [5]) > (arr_36 [i_15] [10] [i_15] [i_15])));
                            var_35 = (((~var_5) * var_16));
                            var_36 = 1;
                            arr_50 [i_16] [i_17 + 3] [i_18] = (max((arr_39 [i_15] [i_16] [i_17 - 2] [i_18] [i_17 - 2] [i_16]), (arr_37 [i_15] [i_15] [i_15] [i_15])));
                        }
                    }
                }

                for (int i_19 = 4; i_19 < 12;i_19 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 15;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 15;i_21 += 1)
                        {
                            {
                                var_37 = ((!((max((arr_6 [i_19 - 3] [i_19 - 1]), (arr_4 [i_21]))))));
                                arr_61 [i_21] [12] |= (arr_52 [i_15] [i_20]);
                                var_38 = (max(4294967295, 144));
                            }
                        }
                    }
                    var_39 = (min(var_39, 5641386490898123814));
                    arr_62 [8] [i_16] [i_16] = (max((arr_26 [i_19 - 4] [i_19 - 4] [i_19 - 4] [i_19 - 4] [i_19] [i_19 - 3]), (max(1953523556, (arr_26 [i_15] [i_15] [i_19 + 3] [i_19] [i_19 + 2] [1])))));
                }
                var_40 = (arr_40 [i_15] [i_16]);
                var_41 = 17645;
            }
        }
    }
    #pragma endscop
}
