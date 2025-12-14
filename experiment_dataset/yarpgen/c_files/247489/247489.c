/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_19, ((min((((max(182, (arr_2 [i_0] [i_1]))))), var_14)))));
                                arr_14 [i_4] &= max((min((!var_5), 106)), ((max((arr_6 [i_0] [i_0] [i_0] [i_0]), (arr_7 [i_0] [i_1 + 1] [2] [i_3])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_20 = (var_9 ^ -76);
                                arr_20 [i_1] [i_0] [i_2] [2] [i_1] = (arr_17 [11] [i_2] [i_1 + 4]);
                            }
                        }
                    }
                }
            }
        }
        var_21 = (max(1, (arr_8 [i_0] [i_0])));
        arr_21 [i_0] = arr_2 [9] [1];
        var_22 = arr_19 [i_0] [i_0] [i_0] [1] [i_0];
    }
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        arr_24 [16] = (arr_23 [i_7] [i_7]);
        arr_25 [i_7] = ((+((max((arr_23 [i_7] [i_7]), (arr_22 [2]))))));
        arr_26 [i_7] &= var_6;
    }

    /* vectorizable */
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        arr_30 [i_8] = (arr_28 [10]);

        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {

            for (int i_10 = 3; i_10 < 11;i_10 += 1)
            {
                var_23 = ((!(arr_33 [10] [10] [i_10 + 1] [10])));
                var_24 = -12718;
            }
            arr_35 [4] [2] = 127;
            arr_36 [i_8] [6] = (arr_22 [i_8]);
            var_25 = (max(var_25, ((((arr_33 [i_8] [i_9] [i_9] [i_9]) ? (arr_33 [i_8] [i_8] [12] [i_9]) : (arr_33 [i_8] [i_8] [8] [i_8]))))));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 13;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 13;i_12 += 1)
                {
                    {
                        var_26 = -var_16;
                        arr_42 [i_8] [i_8] [i_11] [i_11] = 38;
                    }
                }
            }
        }
        for (int i_13 = 0; i_13 < 13;i_13 += 1) /* same iter space */
        {
            var_27 ^= (arr_34 [2] [9] [8]);

            for (int i_14 = 0; i_14 < 13;i_14 += 1)
            {

                for (int i_15 = 0; i_15 < 13;i_15 += 1)
                {

                    for (int i_16 = 4; i_16 < 12;i_16 += 1)
                    {
                        arr_53 [i_13] [i_13] = (!var_2);
                        arr_54 [7] [i_8] [i_13] [i_14] [i_14] [i_8] [i_16] |= 178;
                        arr_55 [8] [i_16 - 1] [i_15] [i_15] [9] [i_13] [i_8] = ((-(((arr_45 [i_15] [i_13] [7]) ? (arr_48 [2] [2] [i_14]) : 38))));
                    }
                    var_28 = arr_44 [i_8] [i_8];
                    var_29 = arr_48 [i_13] [i_14] [i_15];
                }
                for (int i_17 = 3; i_17 < 10;i_17 += 1) /* same iter space */
                {
                    var_30 ^= (arr_50 [12] [i_8] [i_17 + 2] [i_17 - 1] [i_17 + 2] [i_17 + 3]);
                    var_31 ^= -127;
                    var_32 |= arr_45 [i_8] [2] [i_8];
                }
                for (int i_18 = 3; i_18 < 10;i_18 += 1) /* same iter space */
                {
                    arr_61 [i_18] [i_13] [i_14] [i_18] [i_18 - 1] = (((arr_33 [i_13] [9] [i_18 + 2] [i_18 + 1]) ? (arr_32 [i_8]) : (arr_39 [i_18 + 2] [i_18 + 2] [i_14] [2] [i_18])));
                    var_33 = (((arr_43 [i_18 - 2] [i_18 - 2]) ? var_1 : (arr_43 [i_18 + 3] [i_18 - 3])));
                }
                arr_62 [i_8] [i_8] [i_14] = arr_56 [i_8] [i_8] [i_8] [i_8];

                for (int i_19 = 0; i_19 < 13;i_19 += 1)
                {
                    arr_65 [i_19] [i_19] [11] [i_19] [i_19] [10] = var_4;
                    arr_66 [4] [4] [i_19] = 735;
                    arr_67 [1] [8] [i_19] [i_19] [i_8] [i_8] = ((((!(arr_52 [i_8] [i_13] [1] [i_19]))) ? (arr_50 [i_19] [7] [i_13] [5] [i_13] [5]) : 166));
                }
            }
            for (int i_20 = 0; i_20 < 13;i_20 += 1)
            {
                arr_71 [i_8] [11] [i_20] = var_1;
                arr_72 [i_8] [i_8] [i_13] [2] = (((~218) ? (!var_11) : (!1)));
            }
            for (int i_21 = 0; i_21 < 13;i_21 += 1)
            {
                arr_76 [i_21] [3] = ((~(arr_49 [i_8] [i_13])));
                var_34 = ((!(arr_27 [i_13])));
            }
            var_35 = var_7;
        }
        for (int i_22 = 0; i_22 < 13;i_22 += 1) /* same iter space */
        {
            var_36 += -3470;
            arr_79 [9] [i_22] [i_22] = ((var_15 && (arr_75 [i_22] [i_22] [0])));
        }
    }
    #pragma endscop
}
