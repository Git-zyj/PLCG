/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= ((!(~22)));
    var_16 ^= (!var_6);

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 20;i_4 += 1)
                    {
                        {
                            arr_13 [i_1] [i_3 - 2] [i_2] [i_1] [i_1] = (~61039);
                            var_17 ^= 1210774874;
                            var_18 = 22;
                        }
                    }
                }
            }

            /* vectorizable */
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                var_19 = (min(var_19, 61039));
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        {
                            var_20 = (!-233);
                            var_21 = (max(var_21, 4503599593816064));
                        }
                    }
                }
                var_22 = (~var_4);
            }
        }
        var_23 = (max(var_23, (((~((-(arr_5 [i_0 + 1] [i_0] [i_0 + 3]))))))));
        arr_21 [i_0] [2] = ((~(!35400)));
        var_24 = var_8;

        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            arr_24 [i_0 - 1] = ((~(~-2050514620)));
            var_25 = ((-(arr_16 [2] [i_0] [4] [i_0])));
        }
    }
    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {

        for (int i_10 = 1; i_10 < 13;i_10 += 1)
        {
            arr_30 [i_9] [i_9] [i_10] = 131;
            arr_31 [i_9] [3] [i_10 + 1] = ((!(~var_7)));
            arr_32 [i_9] [i_10] [i_9] = (!var_5);
            var_26 |= ((-(arr_27 [i_10 + 1] [i_10 - 1])));
        }
        for (int i_11 = 3; i_11 < 12;i_11 += 1) /* same iter space */
        {
            var_27 = ((~(~var_7)));
            var_28 = (~61039);
        }
        for (int i_12 = 3; i_12 < 12;i_12 += 1) /* same iter space */
        {
            arr_41 [i_9] [i_9] [i_9] = (!var_6);

            /* vectorizable */
            for (int i_13 = 0; i_13 < 14;i_13 += 1)
            {
                var_29 = (~30135);
                arr_44 [i_13] [i_12] [i_9] [i_13] |= -1210774874;
            }
            for (int i_14 = 2; i_14 < 12;i_14 += 1)
            {
                arr_49 [i_12 - 2] [i_9] = (~30131);
                arr_50 [i_9] [i_9] [i_9] = ((~(!var_3)));
                var_30 = (!-5433226868551198226);

                /* vectorizable */
                for (int i_15 = 1; i_15 < 13;i_15 += 1)
                {
                    arr_53 [i_9] [i_12] [1] [i_14] [8] = (~124);
                    arr_54 [i_9] = (~8425989963947037241);
                }
                for (int i_16 = 2; i_16 < 12;i_16 += 1)
                {
                    arr_58 [i_9] [i_9] [3] [i_9] [i_14] = ((!(~var_1)));
                    arr_59 [i_9] [i_9] = ((~((~(arr_19 [i_16] [i_16 + 2])))));
                }

                for (int i_17 = 4; i_17 < 12;i_17 += 1)
                {
                    var_31 = ((~(!-1633969002)));
                    var_32 -= (arr_45 [i_9] [i_14 - 2] [i_14] [i_12 - 2]);
                    var_33 = ((((!(arr_9 [i_12 + 1] [i_12 - 1] [i_12 - 2] [i_12])))));
                    arr_62 [i_9] [i_12 - 2] [i_14 - 1] [i_14] |= ((-((~(arr_11 [i_12] [i_12 - 2] [i_17] [i_17 - 1] [i_14 - 2] [i_9])))));
                }
                for (int i_18 = 1; i_18 < 10;i_18 += 1)
                {
                    var_34 = ((-(!var_0)));
                    var_35 = -var_9;
                    var_36 = var_6;
                }
                /* vectorizable */
                for (int i_19 = 0; i_19 < 14;i_19 += 1)
                {
                    arr_69 [i_9] [i_9] = ((~(arr_60 [i_19] [i_14 + 2] [i_14] [i_14 - 2])));

                    for (int i_20 = 0; i_20 < 14;i_20 += 1)
                    {
                        var_37 = ((!(arr_36 [i_14 - 2] [i_14 + 2] [i_14 - 2])));
                        var_38 -= (~4496);
                        arr_73 [0] [i_12] [i_14] [4] [i_19] &= ((!(arr_63 [i_14] [i_14] [i_20] [i_14 + 2] [i_20])));
                        arr_74 [i_9] [i_12 - 1] [i_14] [i_19] [i_9] [i_19] [i_12] = (~var_6);
                    }
                    for (int i_21 = 0; i_21 < 14;i_21 += 1)
                    {
                        var_39 = (!var_3);
                        var_40 &= ((~(-32767 - 1)));
                        var_41 += (~268402688);
                        arr_79 [i_9] [i_9] [i_9] [i_9] = (~61289);
                    }
                }
            }
        }
        var_42 = ((-(~3211)));
    }
    for (int i_22 = 0; i_22 < 21;i_22 += 1)
    {
        var_43 = -255;
        arr_82 [i_22] [15] = (((~(arr_20 [i_22] [i_22] [i_22] [i_22] [i_22]))));
    }
    var_44 = var_13;
    var_45 |= (~var_2);
    #pragma endscop
}
