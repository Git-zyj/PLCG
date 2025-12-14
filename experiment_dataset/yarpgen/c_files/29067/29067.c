/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= var_11;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 &= (min((max((((!(arr_2 [i_0])))), ((-(arr_2 [i_0]))))), ((((arr_2 [i_0]) >= (arr_0 [i_0]))))));
        var_16 = ((!(arr_0 [i_0])));
        var_17 = (max(var_17, (((~((max(((((arr_0 [i_0]) || (arr_0 [i_0])))), (arr_0 [i_0])))))))));
        var_18 = (min(var_18, (((~(max((arr_0 [i_0]), (!5))))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    var_19 = (((arr_4 [i_1]) / (arr_9 [i_1] [i_1] [i_3])));
                    var_20 = (-20 - -33);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_21 = (min(var_21, ((max(14, -9121200241348653410)))));
                                var_22 = (arr_8 [i_2] [i_3] [i_5]);
                                var_23 = (arr_7 [i_1] [i_1] [i_1]);
                                var_24 = (arr_12 [i_1] [12] [12] [i_4]);
                            }
                        }
                    }
                }
            }
        }
        var_25 = (min((((!(arr_0 [15])))), (arr_10 [0] [i_1] [i_1] [3] [i_1])));
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        var_26 = (min(var_26, (max((arr_16 [i_6] [i_6]), (((~(arr_17 [i_6]))))))));

        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {

            /* vectorizable */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                var_27 = (min(var_27, (~-5)));
                var_28 = (arr_19 [i_6]);
            }

            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {

                /* vectorizable */
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    var_29 = (min(var_29, (((-(((!(arr_2 [i_7])))))))));
                    var_30 = (arr_19 [i_6]);
                    var_31 -= (((-(arr_1 [i_10]))));
                    var_32 = (arr_2 [i_10]);
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        {
                            var_33 = (max((arr_27 [i_6]), (((arr_25 [i_6] [i_7] [5]) / (arr_15 [i_12])))));
                            var_34 = arr_18 [i_6];
                            var_35 = max((((!((((-21 + 2147483647) >> 17)))))), (max(-18, 1)));
                            var_36 = (arr_1 [i_7]);
                        }
                    }
                }
            }
            for (int i_13 = 0; i_13 < 16;i_13 += 1)
            {
                var_37 = (((min(3126998923, 13)) + (arr_22 [i_6] [i_6] [i_6])));
                var_38 = ((((((min((arr_35 [i_6] [i_6] [11] [i_13]), (arr_1 [i_6])))) % (arr_19 [i_6]))) % ((max(((max((arr_17 [i_6]), (arr_26 [i_7] [i_7] [i_13])))), (max((arr_17 [i_6]), (arr_34 [i_6] [i_7] [i_13]))))))));
                var_39 = (arr_23 [i_13] [i_7] [7] [i_6]);
                var_40 = ((!((max((arr_25 [i_6] [i_7] [i_6]), (((!(arr_17 [i_6])))))))));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 16;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 16;i_15 += 1)
                    {
                        {
                            var_41 = (min(var_41, ((((((((~(arr_39 [i_6] [i_15] [i_13] [i_14] [i_14] [2])))) < (min((arr_30 [i_14] [i_13] [15]), (arr_34 [i_14] [i_7] [i_13])))))) ^ ((-(arr_1 [i_6])))))));
                            var_42 = 17;
                        }
                    }
                }
            }
            for (int i_16 = 0; i_16 < 16;i_16 += 1)
            {
                var_43 = ((+(min((max((arr_40 [i_6] [i_6]), (arr_38 [i_6]))), (((-(arr_18 [i_6]))))))));
                var_44 = (arr_2 [i_6]);
                var_45 ^= ((+(max(((((arr_27 [i_7]) - (arr_22 [i_6] [1] [i_6])))), (max((arr_33 [i_6] [i_6] [i_6]), (arr_30 [i_7] [i_7] [i_7])))))));
            }
            for (int i_17 = 0; i_17 < 16;i_17 += 1)
            {
                var_46 = (max(var_46, ((((max((arr_28 [i_6] [12] [i_17] [7]), (arr_47 [2]))) | ((((!((min((arr_15 [i_7]), (arr_42 [i_17] [2] [i_6])))))))))))));
                var_47 = ((max((((arr_37 [6] [i_7] [13] [13]) & (arr_32 [i_6] [i_6] [i_7] [i_7] [14] [i_7] [i_17]))), (~3))));
            }
        }
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 16;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 1;i_19 += 1)
            {
                {
                    var_48 = (((-(arr_29 [i_6] [i_18] [i_6] [i_19]))));
                    var_49 = (18 != 2529874268);
                }
            }
        }
    }
    var_50 = (~-47);
    var_51 = (11 != 2097151);
    var_52 = var_0;
    #pragma endscop
}
