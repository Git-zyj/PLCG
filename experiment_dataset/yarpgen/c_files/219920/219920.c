/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_20 = 246;
                        var_21 = arr_9 [i_0] [i_1];
                    }
                }
            }
        }
        var_22 = max((((~(arr_9 [i_0 - 3] [i_0 - 2])))), (~2515787367));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        arr_14 [i_4] [10] = (arr_12 [i_4]);
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 15;i_6 += 1)
            {
                {
                    arr_21 [i_4] [i_5 + 4] [i_6] = (arr_12 [i_4]);
                    var_23 = (arr_5 [i_6 + 1] [i_5 + 1] [12]);
                    arr_22 [15] [i_4] = ((~(arr_1 [10])));
                    var_24 = ((~(arr_18 [i_4])));
                }
            }
        }
    }
    for (int i_7 = 4; i_7 < 7;i_7 += 1) /* same iter space */
    {
        arr_25 [i_7] = (((arr_7 [i_7 - 3] [i_7]) ? (max(1779179938, 1779179911)) : (max((arr_5 [i_7] [i_7] [i_7]), (arr_3 [i_7 - 1])))));
        /* LoopNest 2 */
        for (int i_8 = 3; i_8 < 6;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                {
                    arr_31 [i_9] [8] [i_9] = (arr_0 [i_9]);
                    var_25 = (-((((((-(arr_13 [i_7 - 2])))) && ((min((arr_13 [i_7]), (arr_18 [i_7]))))))));
                    arr_32 [i_7 - 1] [i_9] = ((+((+(min((arr_17 [i_7] [i_8] [i_9]), (arr_26 [0] [i_8])))))));
                }
            }
        }
        arr_33 [i_7 - 1] = (((arr_12 [13]) ? (((((arr_4 [i_7]) >= (((-(arr_9 [i_7 + 1] [12])))))))) : (((-(arr_29 [i_7]))))));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 6;i_11 += 1)
            {
                {
                    var_26 = (arr_12 [i_11]);
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 8;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 9;i_13 += 1)
                        {
                            {
                                var_27 = arr_36 [8] [1] [i_12] [2];
                                arr_45 [i_13] [7] [i_10] [i_10] [i_10] [i_10] [i_7] = ((~((-(min(4294967274, 53))))));
                            }
                        }
                    }
                    arr_46 [i_7] [i_7] [i_11] = arr_4 [i_7];
                    var_28 = (((((arr_38 [i_7 - 3] [i_10] [i_11 - 1]) || (arr_38 [i_7 - 1] [i_7 - 1] [i_11]))) || (2515787370 || 2515787377)));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_14 = 4; i_14 < 7;i_14 += 1) /* same iter space */
    {
        var_29 = (arr_10 [i_14 - 4]);

        for (int i_15 = 1; i_15 < 9;i_15 += 1)
        {

            for (int i_16 = 2; i_16 < 8;i_16 += 1)
            {
                var_30 = (arr_8 [i_15]);
                arr_55 [i_15] [i_14] [i_14] [i_15] = (arr_11 [i_16] [i_15]);

                for (int i_17 = 0; i_17 < 10;i_17 += 1)
                {
                    arr_59 [i_15 - 1] [i_15] [i_15] [i_15] [3] = ((~(((arr_6 [24] [i_14 + 3] [24] [i_14 + 3]) & (arr_18 [i_15])))));
                    var_31 = (((arr_23 [i_15] [i_14]) ? (arr_47 [i_14 + 3]) : ((-(arr_39 [2] [2] [i_15 - 1] [5])))));
                    var_32 = (~(arr_43 [i_14] [i_15] [i_16] [i_14] [i_14]));
                }
                for (int i_18 = 2; i_18 < 9;i_18 += 1) /* same iter space */
                {

                    for (int i_19 = 1; i_19 < 6;i_19 += 1) /* same iter space */
                    {
                        arr_66 [i_14 + 3] [i_14 + 3] [i_15] [2] [i_14] [i_14] [9] = (((arr_49 [i_18 - 1] [i_15 - 1]) * (arr_49 [i_18 + 1] [i_15 + 1])));
                        var_33 = (arr_6 [i_14] [i_15 - 1] [17] [2]);
                        var_34 = (arr_61 [i_15 + 1] [i_15 - 1] [i_15 + 1]);
                    }
                    for (int i_20 = 1; i_20 < 6;i_20 += 1) /* same iter space */
                    {
                        var_35 = (arr_3 [7]);
                        arr_69 [8] [1] [i_16] [i_15] = ((-(arr_57 [0] [i_16 - 1] [i_15] [i_15] [i_15])));
                        arr_70 [i_14 - 2] [i_15] [1] [i_15] [i_20 + 4] = (arr_54 [i_18] [7] [i_16] [7]);
                    }
                    arr_71 [i_14] [i_14] [i_15] [i_15] [i_16] [i_15] = (((arr_67 [i_14 - 3] [i_14] [i_14 - 3] [i_14 - 3] [0]) == (arr_41 [i_14] [i_15 + 1] [3] [i_16 + 2] [i_18])));
                    arr_72 [i_15] [i_16] [5] [i_15] = (((((arr_9 [i_16] [i_14]) ^ (arr_1 [i_15]))) / (arr_54 [i_18 - 1] [i_16] [i_15 - 1] [i_14])));
                }
                for (int i_21 = 2; i_21 < 9;i_21 += 1) /* same iter space */
                {
                    arr_76 [i_14] [i_15] [i_14] [i_14] [i_14 + 1] [i_14] = (((arr_23 [i_14 - 1] [i_15 + 1]) - (((arr_41 [i_14] [i_14] [i_14] [i_14] [i_14]) ? (arr_0 [i_15]) : (arr_18 [i_14])))));
                    arr_77 [8] [i_15] = (~2515787353);
                }
                for (int i_22 = 2; i_22 < 9;i_22 += 1) /* same iter space */
                {
                    arr_82 [i_15] [i_16] [i_14] [i_14] [i_15] = ((~(((arr_39 [i_14] [i_16 + 1] [i_14] [i_14]) ? (arr_50 [i_16] [i_16] [i_15]) : (arr_30 [i_14] [i_15] [i_15] [1])))));
                    var_36 = ((~(arr_75 [i_15 + 1] [i_15] [i_15])));
                    arr_83 [i_15] [i_16] [i_16] [9] = (arr_15 [i_16 - 2] [i_15 - 1]);
                    arr_84 [i_15] [i_15] [i_15] [i_15 - 1] [5] [i_15] = (arr_58 [9] [i_15 - 1] [i_15 - 1] [i_15]);
                }
                var_37 = (((arr_75 [i_14 - 1] [i_15] [i_15]) & (arr_75 [i_14 - 1] [5] [i_15])));
            }
            arr_85 [i_14] [i_15] = (arr_51 [i_14] [i_15] [i_15]);
            arr_86 [i_14] [i_15] = (~-130272558871102234);
        }
        arr_87 [i_14] [i_14] = ((-((~(arr_53 [i_14] [i_14] [i_14] [i_14])))));
        var_38 = (1 - -9659);
    }
    var_39 = var_15;
    var_40 = (min(-30790, -574218814));
    var_41 = var_2;
    #pragma endscop
}
