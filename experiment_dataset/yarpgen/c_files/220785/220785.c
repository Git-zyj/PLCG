/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_1] = var_8;

                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] [i_2] [i_1] = var_15;
                    var_20 |= ((-((-(arr_6 [i_2] [i_2 + 1] [i_2])))));

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 19;i_3 += 1) /* same iter space */
                    {
                        var_21 = var_15;
                        var_22 = (7577567850642992813 * (arr_3 [i_0 + 1]));

                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            var_23 = var_13;
                            arr_15 [i_1] [i_1] [i_2 - 1] [i_3 + 1] [i_4] = ((((((arr_13 [20] [i_1] [i_2] [i_1] [i_1]) ? (arr_4 [i_0 + 1]) : (arr_6 [i_4] [i_0] [i_0])))) ? (~var_6) : (((arr_8 [i_1]) ? var_17 : (arr_4 [i_2])))));
                        }
                    }
                    for (int i_5 = 3; i_5 < 19;i_5 += 1) /* same iter space */
                    {
                        var_24 = ((((var_11 ? 438238338 : var_9)) < ((((arr_14 [i_2 + 1] [i_5 - 3] [i_5] [i_5] [i_5] [i_5 - 1] [i_5 + 1]) / var_7)))));
                        var_25 = (min(var_2, (max((min((arr_7 [i_0] [i_1] [i_1] [i_5]), (arr_11 [i_0 - 1] [i_1] [i_1] [i_1]))), 65517))));
                        arr_19 [11] [i_1] = ((((((max(var_0, (arr_4 [i_2])))) ? var_9 : var_13))) ? (((arr_7 [i_5 - 1] [i_1] [i_1] [i_2 - 1]) ? (arr_7 [i_5 + 2] [i_1] [i_1] [i_2 + 1]) : (arr_7 [i_5 + 2] [i_1] [i_1] [i_2 - 1]))) : ((((((10246360809395973923 ? 18 : var_11))) ? (arr_10 [i_5 - 3] [i_5 + 2] [i_1] [i_0 + 1]) : (var_11 * var_6)))));
                    }
                    /* vectorizable */
                    for (int i_6 = 3; i_6 < 19;i_6 += 1) /* same iter space */
                    {
                        var_26 = var_12;
                        arr_22 [i_0] [19] [i_1] [i_0] [i_0] = (+(((arr_8 [i_1]) ? 65517 : 14519480395206479633)));
                        var_27 = ((var_6 ? var_19 : (arr_14 [i_0] [i_0] [i_0 - 1] [17] [i_2 - 1] [i_2 + 1] [i_6 - 1])));
                        var_28 |= (((arr_20 [20] [i_0] [i_0 - 2] [i_0] [i_2 + 1]) ? (arr_20 [0] [0] [i_0 + 1] [i_2] [i_6 + 2]) : (arr_20 [12] [i_0 + 1] [i_0 - 1] [i_1] [i_6])));
                    }
                    var_29 = ((~((var_7 ? (min((arr_11 [i_2] [i_1] [i_2 - 1] [i_2 - 1]), var_8)) : ((var_3 ? (arr_3 [i_2]) : var_6))))));
                }
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    var_30 = ((~((~(arr_17 [i_0] [i_0] [i_1] [i_0] [i_0 - 1] [i_0 - 1])))));
                    var_31 = (max((max((arr_16 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [7]), (arr_10 [i_1] [i_0 + 1] [i_0] [i_0 - 1]))), var_18));

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        var_32 = (arr_2 [i_0 + 1] [i_0]);
                        var_33 = var_10;
                        var_34 = (min(var_34, (arr_14 [i_8] [i_7] [i_7] [i_1] [i_1] [i_0] [i_0])));
                        var_35 = var_8;

                        for (int i_9 = 1; i_9 < 1;i_9 += 1)
                        {
                            var_36 = (arr_26 [i_8] [i_9 - 1] [i_9] [i_8] [i_9 - 1]);
                            var_37 = (max(var_37, (((65523 & ((~(arr_25 [i_0] [i_1] [i_7] [i_9]))))))));
                            var_38 = ((var_17 ? ((((arr_26 [i_9 - 1] [19] [i_9 - 1] [i_9 - 1] [i_9]) - 65499))) : (((arr_8 [i_1]) ? var_18 : 17146716796968896156))));
                        }
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            var_39 = (max(var_39, (arr_20 [i_8] [i_1] [i_1] [i_1] [i_1])));
                            arr_32 [i_10] [i_8] [i_1] [i_1] [i_1] [i_1] [i_0] = ((var_14 ? var_3 : (arr_8 [i_1])));
                        }
                        for (int i_11 = 1; i_11 < 19;i_11 += 1)
                        {
                            var_40 = var_1;
                            arr_36 [i_0 - 1] [i_1] [i_0 - 1] [18] [i_1] = (((arr_24 [i_0 + 1] [i_0] [i_0 - 2] [i_0]) + 7934875317900776496));
                            var_41 = (~var_4);
                        }
                    }
                }
                var_42 = (((((-7934875317900776504 ? (arr_25 [i_1] [i_1] [i_1] [i_1]) : ((-29666 ? var_14 : var_13))))) ? ((-(((var_4 != (arr_11 [i_0] [i_1] [i_0] [i_1])))))) : (!-1300027276740655453)));
                var_43 ^= ((((((~var_6) ? (16 - 4) : (((arr_3 [i_0]) ? var_6 : (arr_28 [i_0] [18] [i_1] [i_1])))))) ? (arr_16 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0] [1]) : (min(((40 ? (arr_29 [i_0 + 1] [i_0] [i_1] [i_0 + 1] [i_0]) : (arr_11 [i_0] [0] [i_0] [i_0 - 1]))), ((min(13, -12989)))))));
            }
        }
    }
    var_44 = ((min(((var_4 ? 4294967290 : -1), var_2))));
    var_45 *= var_16;
    #pragma endscop
}
