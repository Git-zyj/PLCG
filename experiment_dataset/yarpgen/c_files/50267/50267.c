/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_18 = (((arr_0 [i_0] [11]) - (arr_1 [i_0])));
        var_19 = ((-(var_8 && 412)));
        var_20 -= (((((arr_0 [4] [i_0]) ? (arr_0 [8] [i_0]) : (arr_0 [10] [10]))) / (arr_2 [12] [12])));
        var_21 = -1205128862;
        var_22 = ((((((arr_0 [i_0] [i_0]) ? var_6 : var_15))) ? (arr_1 [i_0]) : ((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = (((arr_6 [i_1]) - (max(-1205128831, (arr_6 [i_1])))));
        arr_9 [1] [1] = -2126567978;
        var_23 ^= ((-((~(arr_1 [20])))));
        arr_10 [i_1] = ((((1205128862 ? 1 : (arr_4 [i_1] [i_1]))) * (((~(arr_3 [0] [i_1]))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 4; i_3 < 12;i_3 += 1)
        {
            var_24 = (((arr_2 [i_3] [i_3]) + (~var_14)));
            arr_15 [i_2] = ((var_11 - (arr_4 [i_3 - 2] [i_3 - 4])));
        }
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            var_25 -= arr_7 [i_4];
            var_26 = (min(var_26, 1205128861));
            var_27 = (min(var_27, (-1 ^ var_2)));
        }
        var_28 *= (((arr_1 [20]) ? (((var_8 ^ (arr_4 [i_2] [i_2])))) : -var_11));

        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            var_29 -= (((arr_7 [i_2]) & var_12));
            arr_21 [i_5] [2] = (~5);
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    {

                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            arr_29 [i_5] = 107;
                            var_30 = ((~(arr_24 [i_2] [2] [i_5] [i_5] [i_6 - 1])));
                            arr_30 [i_5] [i_5] [12] [i_5] [10] = (((((var_5 << (((arr_28 [i_8] [i_8] [i_7] [i_2] [i_2] [i_5] [i_2]) - 18286466645059297269))))) ? (arr_5 [i_6 + 1]) : ((10082802020712437452 ? (arr_5 [i_2]) : 1501229706))));
                        }
                        for (int i_9 = 2; i_9 < 12;i_9 += 1)
                        {
                            var_31 = (min(var_31, (arr_33 [12])));
                            arr_34 [i_2] [i_5] [i_6 - 1] [i_7] = (arr_18 [i_9 - 1]);
                            var_32 ^= 18841;
                        }
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            var_33 *= (~var_0);
                            arr_39 [i_5] [i_5] [i_6 - 2] [i_7] [6] = 1;
                            var_34 -= var_13;
                        }
                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            var_35 = (min(var_35, (arr_37 [2] [i_7] [i_6] [i_5] [2])));
                            var_36 *= -10786344724750378052;
                        }
                        var_37 ^= arr_14 [i_2];
                        arr_43 [i_2] [i_5] [i_6] [i_5] [9] [i_6] = ((arr_33 [i_5]) & (arr_22 [i_2] [i_5] [i_6]));
                        var_38 = (arr_26 [i_5] [i_5] [i_6] [i_7]);
                    }
                }
            }
        }
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            var_39 = (max(var_39, (arr_26 [1] [1] [i_2] [i_2])));
            arr_46 [7] [i_2] = -var_9;
        }
        arr_47 [i_2] = -83;
        /* LoopNest 2 */
        for (int i_13 = 1; i_13 < 13;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 0;i_14 += 1)
            {
                {
                    var_40 = (((arr_2 [i_14] [i_14]) ? (arr_2 [i_14] [i_14]) : (arr_2 [i_14] [i_14])));

                    for (int i_15 = 1; i_15 < 13;i_15 += 1)
                    {

                        for (int i_16 = 2; i_16 < 12;i_16 += 1)
                        {
                            var_41 ^= -var_16;
                            var_42 -= (((arr_24 [i_13 + 1] [i_15 + 1] [i_16] [i_15 - 1] [i_16 - 2]) ^ (arr_24 [i_13 - 1] [i_15 + 1] [i_16] [i_15 + 1] [i_16 + 1])));
                            var_43 = (((arr_18 [i_13 - 1]) != var_11));
                        }
                        for (int i_17 = 0; i_17 < 14;i_17 += 1)
                        {
                            var_44 ^= (~((1205128861 ? (arr_40 [i_17] [i_13] [i_17] [i_13] [i_13] [i_14] [8]) : var_11)));
                            var_45 = 65535;
                        }
                        for (int i_18 = 0; i_18 < 14;i_18 += 1)
                        {
                            arr_62 [i_14] = ((1 - (arr_20 [i_2] [i_14])));
                            arr_63 [4] [4] [i_14 + 1] [i_14] [i_14 + 1] = (arr_56 [i_2] [4] [i_14 + 1] [4] [i_18] [10]);
                        }
                        for (int i_19 = 1; i_19 < 13;i_19 += 1)
                        {
                            var_46 ^= arr_33 [4];
                            var_47 = (arr_20 [i_14] [i_14]);
                            arr_66 [i_14] = (arr_36 [i_13 - 1] [i_14] [i_19 - 1]);
                            var_48 = (((~var_6) ? (((!(arr_14 [i_14])))) : -1));
                        }
                        var_49 ^= ((-(arr_49 [i_13 + 1] [i_15 - 1] [7])));
                        var_50 = ((-(arr_41 [i_15 - 1] [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_13 - 1])));
                    }
                    arr_67 [i_14] [i_14] [i_14] [i_2] = arr_55 [i_14] [i_14] [i_13] [i_14];
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_20 = 3; i_20 < 14;i_20 += 1)
    {
        for (int i_21 = 2; i_21 < 15;i_21 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_22 = 0; i_22 < 16;i_22 += 1)
                {
                    for (int i_23 = 1; i_23 < 14;i_23 += 1)
                    {
                        {
                            var_51 = (arr_68 [i_20] [i_20]);
                            var_52 = ((!(arr_69 [i_23])));
                        }
                    }
                }
                arr_82 [i_20] = 7660399348959173546;
            }
        }
    }
    #pragma endscop
}
