/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_8 [i_0] [i_0] [i_3] [i_2] = (arr_7 [i_1] [i_1] [0]);
                        var_20 = (min(var_20, (arr_7 [i_3] [i_1] [3])));
                        var_21 = (min(1, (((((((arr_0 [i_0]) || (arr_7 [i_0] [6] [i_0]))))) | ((var_7 ? var_1 : var_4))))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    {
                        arr_15 [i_0] [i_0] [i_0] = (((((arr_9 [i_0] [i_0] [9]) / (arr_9 [i_0] [i_4] [i_0]))) ^ var_10));
                        var_22 = ((!((min((arr_4 [i_6] [i_5] [i_4] [i_0]), var_17)))));
                        var_23 = (max(var_23, (((!(~1))))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 8;i_9 += 1)
                {
                    {
                        var_24 += (max((((arr_4 [4] [i_9 - 1] [i_9] [i_9]) >> ((((1 ? (arr_4 [8] [i_7] [8] [i_9]) : var_17)) - 31552)))), ((min(var_12, (!var_3))))));
                        var_25 = (min((max((max((arr_2 [i_7] [i_8] [0]), var_13)), (!-5482))), ((((arr_2 [i_0] [i_8] [i_9 + 1]) ? (arr_5 [i_0] [1] [1]) : (arr_11 [0] [i_7] [i_8] [i_8]))))));
                        arr_24 [i_9] [6] [i_9] = (min((((!(arr_10 [i_9] [i_9 + 1] [i_9 + 2])))), ((var_7 ? (arr_10 [1] [i_9 + 2] [i_9 + 2]) : (arr_10 [i_9] [i_9 - 1] [i_9 + 2])))));
                    }
                }
            }
        }

        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            arr_27 [i_10] = (((var_1 || (~2305772640469516288))));
            arr_28 [i_0] = ((~(((arr_9 [i_0] [i_0] [i_0]) ? ((max(var_15, (arr_25 [9])))) : (arr_21 [i_0] [i_10] [i_0])))));
            arr_29 [i_0] = arr_2 [i_0] [6] [i_10];
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                for (int i_12 = 3; i_12 < 6;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 10;i_13 += 1)
                    {
                        {
                            var_26 += ((((((arr_21 [i_0] [i_0] [i_0]) ? (222 ^ var_9) : var_2))) ? var_14 : (((max(0, (arr_22 [i_11] [i_10] [i_11] [i_12] [6])))))));
                            var_27 = (((((((arr_31 [5] [i_0]) ? (arr_20 [i_12]) : (arr_33 [i_10] [i_10]))))) ? ((max((arr_22 [i_11] [i_12] [4] [3] [i_12 - 3]), var_3))) : ((max((arr_31 [1] [5]), (arr_10 [6] [i_12] [i_13]))))));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 10;i_14 += 1)
        {

            for (int i_15 = 0; i_15 < 10;i_15 += 1) /* same iter space */
            {
                var_28 = ((-((1 ? var_3 : (arr_33 [i_0] [i_0])))));
                arr_41 [i_15] [9] [i_15] = ((arr_37 [i_0] [2] [i_15]) ? (arr_37 [i_0] [i_14] [i_14]) : (arr_37 [i_0] [i_15] [i_15]));
            }
            for (int i_16 = 0; i_16 < 10;i_16 += 1) /* same iter space */
            {
                var_29 = (min(var_29, (((-(arr_35 [i_14]))))));
                var_30 = (184 < 92);
            }
            for (int i_17 = 4; i_17 < 7;i_17 += 1)
            {
                var_31 = (arr_0 [i_17 + 2]);
                arr_47 [0] [i_0] = (((((arr_11 [6] [i_14] [6] [i_0]) ? var_13 : (arr_7 [i_17] [6] [i_0]))) > (!150)));
            }
            var_32 = (((arr_36 [i_14]) ? var_14 : (((arr_45 [3] [i_14] [6] [i_14]) - (arr_42 [i_0] [i_0] [i_0] [i_0])))));
            /* LoopNest 3 */
            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {
                for (int i_19 = 1; i_19 < 9;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 10;i_20 += 1)
                    {
                        {
                            var_33 = (max(var_33, ((((arr_54 [2] [i_14] [5] [i_18] [i_19] [i_19] [i_19 + 1]) == (((arr_38 [i_0]) ? 1 : 21)))))));
                            var_34 += ((!(((32767 >> (var_13 + 4387883910621151424))))));
                        }
                    }
                }
            }
            arr_55 [i_0] = 13501;
        }
    }
    for (int i_21 = 1; i_21 < 7;i_21 += 1)
    {
        arr_58 [i_21] = ((((min(1, var_15))) ? ((max(10, (max(-79, 248))))) : var_0));
        arr_59 [i_21] = -2460131911301251386;
        arr_60 [i_21] = ((-(((~var_7) ? (arr_43 [1]) : (max((arr_0 [i_21]), var_4))))));
        var_35 = ((max((((arr_9 [7] [7] [i_21]) ? var_15 : var_10)), (!var_3))));
    }
    var_36 = var_10;
    #pragma endscop
}
