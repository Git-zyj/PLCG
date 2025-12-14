/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!3);

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_18 ^= ((arr_0 [7]) ? (((var_5 * (arr_1 [i_0 - 1])))) : (18446744073709551614 * 4287575085155838787));
        var_19 = ((-((max((arr_1 [i_0 - 1]), 124)))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_20 = ((!(arr_3 [i_1] [i_1])));
        var_21 = (max(var_21, var_4));
    }
    for (int i_2 = 2; i_2 < 14;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 2; i_3 < 14;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        arr_13 [0] [i_3] [i_3] [i_3] = -1372996326;
                        arr_14 [i_2 - 1] [i_2] [6] [i_2 - 1] = ((18178613117996491633 ? 4 : 5446756848680377013));
                        var_22 *= ((-8589197263195481823 ? 172 : 0));
                    }
                }
            }
            arr_15 [11] [13] [i_3] = 18446744073709551606;
        }
        var_23 ^= (-(~31));
    }

    /* vectorizable */
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        var_24 *= (!-var_14);

        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 15;i_10 += 1)
                    {
                        {
                            var_25 += ((-(arr_16 [i_6])));
                            var_26 = (min(var_26, -1379918802));
                        }
                    }
                }

                for (int i_11 = 1; i_11 < 12;i_11 += 1) /* same iter space */
                {
                    arr_34 [i_6] [5] [i_6] [i_6] [13] [1] = (arr_21 [10]);
                    var_27 = var_0;
                }
                for (int i_12 = 1; i_12 < 12;i_12 += 1) /* same iter space */
                {

                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        var_28 &= (((arr_26 [8] [i_12 + 3] [i_8] [4] [i_6]) && 0));
                        var_29 &= (arr_25 [i_6] [i_7] [i_8] [i_12 + 3]);
                        var_30 -= ((-(((!(arr_27 [2] [14] [i_7 - 1] [i_8] [i_12] [i_13]))))));
                    }
                    var_31 = -252;
                    var_32 -= (((arr_32 [10] [i_7 - 1]) ? (arr_32 [i_6] [i_7 - 1]) : var_12));
                }
            }

            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                var_33 = var_10;
                var_34 = (!-var_0);
                arr_42 [i_6] &= ((255 ? 195821018 : 1));
                arr_43 [1] [i_7] [i_7] [9] = (arr_3 [i_6] [i_7 - 1]);
            }
        }
        for (int i_15 = 0; i_15 < 16;i_15 += 1)
        {
            arr_47 [i_15] [i_15] = var_9;
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 16;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 16;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 16;i_18 += 1)
                    {
                        {
                            var_35 ^= -var_8;
                            arr_57 [i_15] [i_15] = var_4;
                        }
                    }
                }
            }
        }
    }
    for (int i_19 = 0; i_19 < 18;i_19 += 1)
    {
        var_36 = ((-2518 / (((arr_58 [i_19]) * (arr_2 [i_19])))));
        var_37 += (~223342804);
        var_38 = (((-(arr_3 [1] [15]))));

        /* vectorizable */
        for (int i_20 = 3; i_20 < 16;i_20 += 1)
        {
            var_39 = -9;

            for (int i_21 = 0; i_21 < 18;i_21 += 1)
            {
                var_40 = ((~(arr_62 [i_21] [14] [i_19])));
                var_41 = ((var_10 ? -8589197263195481823 : (arr_3 [i_19] [i_20 - 3])));
                var_42 = (arr_61 [13]);
            }
        }
        for (int i_22 = 0; i_22 < 1;i_22 += 1)
        {
            var_43 = (arr_64 [i_19]);
            arr_70 [i_19] [i_19] = (~122);
        }
    }
    for (int i_23 = 0; i_23 < 16;i_23 += 1)
    {
        var_44 += 32760;
        var_45 = (!72);
        /* LoopNest 2 */
        for (int i_24 = 0; i_24 < 16;i_24 += 1)
        {
            for (int i_25 = 2; i_25 < 13;i_25 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_26 = 0; i_26 < 1;i_26 += 1)
                    {
                        for (int i_27 = 0; i_27 < 1;i_27 += 1)
                        {
                            {
                                arr_83 [i_24] = ((-((max((arr_75 [i_23] [i_24] [7] [i_24]), -88)))));
                                var_46 = 26707;
                                var_47 = (~-1);
                                var_48 = (!((max((arr_29 [i_24] [15] [i_24] [i_26]), 65509))));
                                arr_84 [i_24] = var_1;
                            }
                        }
                    }
                    arr_85 [i_24] [i_24] [i_24] [i_24] = (arr_63 [i_25] [i_23]);
                    /* LoopNest 2 */
                    for (int i_28 = 1; i_28 < 1;i_28 += 1)
                    {
                        for (int i_29 = 0; i_29 < 16;i_29 += 1)
                        {
                            {
                                arr_90 [13] [13] [9] [i_28] [i_24] = (min(30720, (arr_35 [i_25 - 2] [i_25 - 1])));
                                arr_91 [9] [i_24] [i_25] [i_24] [8] = (arr_66 [i_23]);
                                arr_92 [1] [i_24] [i_25 + 2] [i_25] [i_28] [i_28] [i_24] = (!1);
                                arr_93 [i_23] [i_24] [i_25] [i_24] [i_29] [i_25] [i_25] = (max((--18446744073709551601), (max(18446744073709551606, var_1))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
