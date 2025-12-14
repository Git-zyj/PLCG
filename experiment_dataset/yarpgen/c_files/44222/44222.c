/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_14 = ((((arr_2 [i_0]) ? (arr_0 [i_0]) : var_1)));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        {
                            var_15 = var_9;
                            var_16 = ((!(arr_2 [i_0])));
                            arr_13 [i_0] [i_2] [13] [i_4] = (((arr_9 [i_0] [i_0] [1] [i_3] [i_0]) + (arr_9 [i_0] [20] [4] [i_3] [i_2])));
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            var_17 = (min(var_17, (~1)));
            var_18 = ((~(arr_4 [i_0] [i_5])));
            /* LoopNest 3 */
            for (int i_6 = 1; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        {
                            var_19 = (arr_4 [i_0] [i_0]);
                            var_20 = (arr_12 [i_0] [i_0] [i_6] [i_0] [i_8] [i_8]);
                        }
                    }
                }
            }
        }
        for (int i_9 = 1; i_9 < 24;i_9 += 1)
        {
            arr_30 [i_0] [i_9] [i_0] = 30476;
            var_21 = (min(var_21, (var_7 >= var_4)));
        }
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            arr_34 [i_0] = 33405;
            var_22 = 57;
            var_23 = (min(var_23, (((35052 ? 254 : ((var_3 ? var_5 : (arr_18 [24] [i_10] [18]))))))));
            arr_35 [i_0] [i_10] = (((arr_5 [i_0] [i_0] [i_0]) >= (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_10])));
        }
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 25;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 25;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 25;i_13 += 1)
                {
                    {
                        var_24 += ((!((((var_11 + 2147483647) >> (var_6 + 13421))))));
                        var_25 = (arr_37 [i_0] [i_11]);
                    }
                }
            }
        }
    }
    for (int i_14 = 0; i_14 < 23;i_14 += 1)
    {
        var_26 *= ((-((((arr_8 [i_14] [i_14] [2] [i_14] [i_14] [i_14]) >= (arr_23 [i_14] [i_14] [i_14] [i_14]))))));
        var_27 = ((-((-var_6 ? (3 * 1) : (var_7 * var_8)))));
        var_28 = (max(var_9, (var_9 == var_4)));
        var_29 *= (max(((min((arr_6 [i_14] [i_14] [i_14]), (arr_6 [i_14] [i_14] [i_14])))), var_1));
        arr_49 [i_14] [i_14] = ((max((!var_2), var_6)));
    }
    var_30 -= 1;
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 13;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 13;i_16 += 1)
        {
            {

                for (int i_17 = 0; i_17 < 13;i_17 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 13;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 13;i_19 += 1)
                        {
                            {
                                arr_64 [i_15] [i_16] [i_17] [i_15] [2] [i_15] [1] = (max((((arr_56 [i_15] [i_19]) ? (arr_56 [i_15] [i_16]) : (arr_56 [i_15] [8]))), ((min((arr_56 [i_15] [i_18]), 23801)))));
                                arr_65 [i_15] [i_15] [i_15] [i_15] = (max((arr_18 [i_15] [i_16] [i_18]), (((max((arr_8 [i_15] [i_15] [i_17] [i_15] [i_15] [i_15]), (arr_52 [i_15])))))));
                            }
                        }
                    }
                    var_31 = (min((((((min(1, var_12))) || ((min(var_6, 154)))))), ((-((((arr_29 [i_16] [i_16] [i_15]) || var_4)))))));

                    for (int i_20 = 0; i_20 < 13;i_20 += 1)
                    {
                        arr_68 [i_20] [11] [i_17] [i_15] [i_16] = (((~var_11) / ((min((max(var_11, var_6)), -9223372036854775794)))));
                        arr_69 [i_15] [4] [i_17] [i_20] |= (((((((arr_11 [i_15] [i_17] [i_16] [i_17] [i_20]) >= 154))) | ((max((arr_6 [i_15] [i_17] [i_20]), (arr_0 [i_17])))))));

                        for (int i_21 = 0; i_21 < 13;i_21 += 1)
                        {
                            var_32 -= ((!((((arr_24 [i_16] [i_16] [i_17] [i_16] [i_16]) ? (arr_5 [i_15] [i_17] [i_20]) : var_8)))));
                            var_33 = ((((((~(arr_60 [i_15] [i_15] [1] [i_17] [1] [i_17]))) % -var_11)) & var_13));
                            var_34 -= (arr_48 [i_20]);
                        }
                        /* vectorizable */
                        for (int i_22 = 2; i_22 < 9;i_22 += 1)
                        {
                            var_35 = (((((var_1 * (arr_10 [i_15] [i_15] [i_20] [i_20])))) ? 0 : ((0 ? (arr_43 [i_15] [i_16] [i_16] [i_20] [i_22]) : (arr_63 [11] [11] [i_15] [i_20] [11] [i_20] [i_20])))));
                            var_36 = ((!(((var_9 ? var_3 : var_13)))));
                        }
                        var_37 = (35042 >= ((var_12 ? var_5 : var_3)));
                    }
                    for (int i_23 = 0; i_23 < 13;i_23 += 1)
                    {

                        /* vectorizable */
                        for (int i_24 = 0; i_24 < 13;i_24 += 1)
                        {
                            var_38 = var_1;
                            arr_82 [5] [i_16] [i_17] [i_15] [i_24] = (((30487 ? var_8 : 232)) <= var_13);
                            var_39 = (arr_16 [i_15] [i_15]);
                        }
                        for (int i_25 = 0; i_25 < 13;i_25 += 1)
                        {
                            var_40 = (max(var_40, ((((-7 ? (!var_10) : (arr_57 [i_15] [i_25] [i_23])))))));
                            var_41 = var_9;
                        }
                        arr_86 [i_15] [i_15] [i_17] = 251;
                        var_42 = (max((arr_24 [i_15] [i_16] [i_15] [i_23] [i_23]), (arr_16 [i_17] [i_15])));
                    }
                    var_43 &= var_4;
                }
                arr_87 [i_15] [i_16] [i_15] = (((((-((max((arr_75 [i_15] [i_15] [i_15] [i_15] [i_15] [i_16] [i_16]), (arr_47 [15] [i_16]))))))) ? ((((max(var_8, (arr_83 [i_15] [i_15] [i_15] [i_15])))) << (var_0 - 69))) : ((((((arr_31 [i_15] [21]) * 1))) ? (arr_58 [i_16] [i_16] [i_15] [i_16]) : (var_2 == var_3)))));
                var_44 = (min(var_44, ((min((arr_8 [i_16] [i_16] [i_15] [i_15] [1] [i_15]), var_7)))));
                var_45 = (min((var_7 * -var_9), (((arr_45 [i_16]) - ((((arr_29 [i_15] [i_16] [i_15]) ? var_2 : 2899358689)))))));
                var_46 = ((((arr_39 [1]) ? (arr_39 [22]) : (arr_52 [8]))) * ((max(var_4, var_8))));
            }
        }
    }
    #pragma endscop
}
