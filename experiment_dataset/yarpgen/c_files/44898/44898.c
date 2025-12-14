/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_5 [i_1] [i_1] = ((!(arr_3 [i_0] [i_1])));
            var_11 = (((arr_0 [i_0]) >= (arr_0 [i_1])));
            arr_6 [6] = (!3917465020);
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_12 = (max(var_12, (((!(((~(arr_3 [i_0] [i_2])))))))));

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_13 = var_9;
                var_14 = (arr_9 [i_2] [i_2] [i_2]);
            }
        }
        for (int i_4 = 2; i_4 < 18;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 4; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 4; i_7 < 18;i_7 += 1)
                    {
                        {
                            var_15 = (((arr_21 [i_5] [i_5 - 2] [i_5 + 1] [i_5 - 1] [i_6]) ? (((1 ? 1 : 1))) : var_5));
                            var_16 = ((~var_1) != (arr_20 [i_5 + 1] [i_5 + 2] [i_4 + 2] [i_4 - 2]));
                            var_17 = (((arr_13 [i_5 - 4]) ? (arr_17 [i_5 - 2] [i_5 - 1] [i_5 - 4] [i_5]) : ((var_7 ? var_4 : (arr_18 [18] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        }
                    }
                }
            }
            var_18 = (max(var_18, (arr_13 [i_0])));
            var_19 = ((-(((arr_9 [i_0] [i_4] [i_4]) ? var_0 : var_1))));
        }
        arr_22 [i_0] = var_7;
    }
    for (int i_8 = 1; i_8 < 15;i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_9 = 2; i_9 < 16;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                {
                    var_20 *= (min(1, ((((arr_7 [i_9 - 2] [i_9 - 2] [i_9 + 1]) >= -3004170863)))));
                    var_21 ^= (min((max(2843930721, ((var_6 ? (arr_21 [0] [i_9] [i_10] [i_9] [i_10]) : var_5)))), 1));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 17;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 17;i_12 += 1)
            {
                {
                    arr_37 [i_11] = (((arr_9 [i_8 + 1] [i_8 + 1] [i_11]) ? ((min((arr_9 [i_8] [i_8] [i_11]), (arr_9 [i_8] [i_8 + 2] [i_11])))) : (arr_9 [i_8] [i_8] [i_11])));
                    var_22 -= (+(((arr_31 [i_8 + 1]) ? (arr_31 [i_8 + 1]) : (arr_31 [i_8 + 1]))));
                }
            }
        }
    }
    for (int i_13 = 1; i_13 < 15;i_13 += 1) /* same iter space */
    {
        arr_41 [i_13 + 2] = (((arr_3 [i_13 + 2] [i_13 + 1]) || ((min((arr_35 [2] [i_13 - 1] [i_13 + 1]), (arr_35 [1] [i_13 + 2] [i_13 - 1]))))));
        var_23 -= (min((((arr_26 [i_13]) ? (max(var_1, (arr_24 [1]))) : (arr_28 [0] [i_13 + 1]))), ((((((var_3 ? (arr_38 [i_13]) : (arr_36 [i_13 + 1] [i_13 + 1] [i_13])))) ? (~var_0) : (arr_10 [i_13] [i_13] [i_13 + 2] [i_13]))))));
        arr_42 [i_13] = (max(1073479680, -6108));
        var_24 = ((-(max((arr_21 [i_13 - 1] [i_13 + 2] [i_13] [i_13 - 1] [1]), (arr_21 [i_13] [i_13] [i_13 + 2] [i_13 + 2] [8])))));
    }
    /* vectorizable */
    for (int i_14 = 1; i_14 < 15;i_14 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 17;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 17;i_16 += 1)
            {
                {

                    for (int i_17 = 1; i_17 < 16;i_17 += 1)
                    {
                        var_25 = ((arr_15 [i_14 + 1] [i_15] [i_16]) != (arr_15 [i_14 - 1] [i_15] [i_17 - 1]));
                        arr_53 [1] [1] [i_16] [i_16] [i_16] [1] = ((~(arr_39 [i_14 + 1])));
                        arr_54 [1] [i_16] [i_16] [i_17 - 1] = -var_10;
                        var_26 = (arr_36 [i_14 + 1] [i_14 + 1] [i_17 - 1]);
                    }
                    var_27 = arr_4 [i_14 + 1] [i_14 - 1] [i_14 - 1];
                    var_28 = (max(var_28, (((arr_51 [2] [i_14 + 2] [i_16] [i_16]) ? 1 : var_4))));
                }
            }
        }
        arr_55 [i_14 - 1] [i_14] = ((((((arr_46 [i_14 + 2]) >> (arr_28 [10] [10])))) ? (arr_35 [0] [0] [i_14]) : (arr_11 [i_14 + 2])));
        var_29 -= ((arr_19 [i_14 + 1] [0] [i_14 - 1] [10]) ? (arr_19 [i_14] [i_14] [i_14 + 1] [16]) : (arr_19 [i_14 + 2] [i_14] [i_14 - 1] [1]));
    }

    for (int i_18 = 0; i_18 < 14;i_18 += 1) /* same iter space */
    {
        var_30 &= min((arr_58 [i_18]), (-14635 % 264303449));
        var_31 = ((-((min((arr_10 [i_18] [i_18] [i_18] [i_18]), (arr_10 [i_18] [18] [18] [i_18]))))));
    }
    for (int i_19 = 0; i_19 < 14;i_19 += 1) /* same iter space */
    {

        for (int i_20 = 3; i_20 < 13;i_20 += 1)
        {
            /* LoopNest 2 */
            for (int i_21 = 1; i_21 < 10;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 0;i_22 += 1)
                {
                    {
                        var_32 |= var_6;
                        var_33 -= arr_14 [i_19] [i_20] [i_20] [i_22];
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_23 = 1; i_23 < 13;i_23 += 1)
            {
                for (int i_24 = 0; i_24 < 0;i_24 += 1)
                {
                    for (int i_25 = 0; i_25 < 14;i_25 += 1)
                    {
                        {
                            var_34 &= (min((arr_59 [i_23] [i_23]), (min(2843930721, 1))));
                            var_35 |= (((arr_45 [i_20 - 1] [i_23 - 1]) ? (((arr_69 [i_24 + 1] [i_20] [i_24 + 1] [i_23 - 1]) - (arr_69 [i_24 + 1] [i_24 + 1] [i_23] [i_23 - 1]))) : (((!var_6) ? var_9 : (!var_5)))));
                        }
                    }
                }
            }
            arr_78 [i_19] [i_20] [i_19] = ((~((((max((arr_15 [i_20] [i_20] [i_20 - 3]), var_10))) ? (((!(arr_51 [i_19] [i_19] [i_19] [i_20 + 1])))) : (((!(arr_61 [1]))))))));
        }
        var_36 += (-(min((arr_8 [i_19]), (min((arr_19 [i_19] [i_19] [i_19] [i_19]), (arr_14 [i_19] [i_19] [i_19] [i_19]))))));
        var_37 = (min(var_37, (((+(((arr_51 [i_19] [i_19] [i_19] [i_19]) ? var_3 : 1451036572)))))));
        arr_79 [i_19] [i_19] = ((-((((min((arr_25 [i_19] [i_19]), (arr_10 [i_19] [i_19] [i_19] [i_19])))) ? (max((arr_70 [i_19] [i_19] [i_19] [i_19]), (arr_52 [i_19] [i_19] [i_19] [i_19]))) : (arr_59 [i_19] [i_19])))));
        var_38 += (min(315726485, -19085));
    }
    #pragma endscop
}
