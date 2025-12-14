/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;
    var_13 = (min(var_13, ((max(((max((var_7 == var_11), (-7437 || 7407)))), (max((var_7 - var_1), (max(1408197046, 876603149)))))))));
    var_14 = var_4;
    var_15 ^= var_1;

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_0] = var_3;
                        var_16 = arr_7 [i_0] [i_1] [i_1] [i_1] [i_1] [i_0];
                    }
                }
            }
        }
        arr_10 [i_0] [i_0] = (((16787 % 10602764581700402666) || ((((((arr_7 [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0]) ? (arr_3 [i_0]) : var_6))) == (max((arr_3 [i_0]), (arr_5 [i_0] [i_0])))))));
        var_17 |= ((-(arr_4 [i_0 - 2] [i_0 - 1])));
        var_18 -= arr_8 [i_0] [i_0] [i_0] [i_0];
        var_19 *= (arr_3 [i_0]);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        var_20 += (arr_12 [i_4]);
        var_21 = (max(var_21, (((~(arr_14 [i_4]))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            var_22 &= (~3720840121);
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    {
                        var_23 = (arr_5 [i_7] [i_7]);
                        var_24 *= ((!(arr_4 [5] [i_6])));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_9 = 4; i_9 < 8;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    {
                        var_25 = (-7462 * 0);
                        var_26 = (max(var_26, (-708 ^ 0)));
                        var_27 = (((arr_25 [i_5] [i_5] [i_5]) ? ((0 ? 13561580336559334115 : (arr_14 [i_10]))) : var_10));
                        var_28 += (((-(arr_4 [i_5] [i_5]))));

                        for (int i_12 = 4; i_12 < 9;i_12 += 1)
                        {
                            var_29 = var_2;
                            arr_33 [2] [2] [i_10] [i_11] [2] &= (0 && 719);
                            arr_34 [i_5] [i_5] [i_10] [i_9] [i_12 - 2] = (var_0 + (arr_0 [i_5]));
                            var_30 *= var_11;
                            arr_35 [i_5] [i_9 - 1] [i_9] [i_5] [i_9] [1] = 0;
                        }
                        for (int i_13 = 1; i_13 < 8;i_13 += 1)
                        {
                            var_31 = (max(var_31, (arr_36 [i_5] [i_5] [i_5] [i_5] [i_5])));
                            var_32 += (var_1 / (arr_14 [i_5]));
                        }
                        for (int i_14 = 1; i_14 < 7;i_14 += 1)
                        {
                            var_33 = (arr_6 [i_5]);
                            var_34 = var_0;
                            var_35 = -21;
                            arr_41 [3] [i_10] [i_10] [i_10] [i_9] [i_10] [i_5] = (((arr_12 [i_5]) < ((0 ? 329763075 : 0))));
                        }
                        for (int i_15 = 0; i_15 < 10;i_15 += 1)
                        {
                            var_36 -= (4885163737150217500 + var_5);
                            arr_44 [i_5] [i_9] [7] [i_5] [i_5] = (((156 % (arr_37 [i_5] [i_5] [i_5] [i_5] [i_5] [i_11] [i_15]))));
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_16 = 1; i_16 < 8;i_16 += 1)
        {
            for (int i_17 = 1; i_17 < 7;i_17 += 1)
            {
                {

                    for (int i_18 = 0; i_18 < 10;i_18 += 1)
                    {
                        var_37 |= (arr_4 [i_5] [i_5]);
                        arr_53 [i_5] [i_5] [i_5] [i_5] [i_18] = (var_8 ? (arr_18 [i_17 + 1] [i_5]) : var_2);
                    }
                    for (int i_19 = 0; i_19 < 10;i_19 += 1)
                    {
                        arr_56 [i_5] [i_5] [i_16 - 1] [i_5] [i_5] [i_19] = var_6;

                        for (int i_20 = 1; i_20 < 8;i_20 += 1) /* same iter space */
                        {
                            var_38 = (arr_21 [i_5]);
                            var_39 = (max(var_39, ((-(arr_19 [i_5] [i_16 + 2] [i_17])))));
                        }
                        for (int i_21 = 1; i_21 < 8;i_21 += 1) /* same iter space */
                        {
                            arr_62 [i_17] [i_21] = 236;
                            var_40 = (arr_20 [i_5] [i_5] [i_5] [i_5]);
                        }
                        for (int i_22 = 2; i_22 < 8;i_22 += 1)
                        {
                            var_41 *= var_0;
                            var_42 = (max(var_42, (((((((arr_31 [i_5] [i_16] [i_17] [i_16] [i_22] [i_22 + 1]) & (arr_38 [i_5] [i_19] [i_22 + 1] [i_19] [i_22])))) ^ (((arr_5 [i_5] [i_22]) & (arr_19 [i_5] [9] [9]))))))));
                        }
                        for (int i_23 = 0; i_23 < 10;i_23 += 1)
                        {
                            arr_69 [i_5] [i_5] [i_16 + 2] [i_17] [i_17] [i_23] = ((-12 ? 29 : (17998700583085504211 | -42)));
                            arr_70 [0] [i_5] [i_17 + 1] [i_16 - 1] [i_5] [i_5] = ((0 == 70) ? -9 : (arr_6 [i_5]));
                            var_43 = 13539247703279767298;
                        }
                    }
                    var_44 = (max(var_44, (5929824828980208023 <= -11)));

                    for (int i_24 = 0; i_24 < 10;i_24 += 1)
                    {
                        var_45 = (arr_2 [i_5] [i_16]);
                        var_46 += (arr_18 [i_16 - 1] [i_16 + 1]);
                        var_47 = (arr_30 [i_5] [i_5] [8] [i_5]);
                        arr_73 [i_5] [i_16 + 2] [i_5] = (-var_2 ? ((var_4 ? (arr_5 [i_5] [6]) : -708)) : 84);
                    }
                    var_48 *= (((((-6316 ? (arr_43 [5] [i_17] [i_17] [i_17] [i_5] [i_5]) : (arr_71 [i_5] [i_5] [i_5] [i_16] [i_16] [i_17])))) ? (arr_48 [i_5] [i_16]) : (~3654187788)));
                    arr_74 [i_5] [i_5] [i_5] = (((arr_55 [i_5] [i_5]) ? var_3 : var_9));
                }
            }
        }
    }
    #pragma endscop
}
