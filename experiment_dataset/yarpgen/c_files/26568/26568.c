/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        var_17 *= ((~(((arr_0 [i_0]) ? var_8 : 1))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_18 *= ((var_15 < (!var_9)));
                                var_19 = 4;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_20 = 41;
                                var_21 ^= (((arr_3 [i_0]) & var_7));
                            }
                        }
                    }
                    var_22 *= (arr_13 [8] [8]);
                }
            }
        }
        var_23 = 4;
    }
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        var_24 = var_7;

        for (int i_8 = 1; i_8 < 9;i_8 += 1)
        {

            for (int i_9 = 2; i_9 < 10;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 3; i_10 < 10;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        {
                            arr_34 [i_7] [i_8 + 1] [3] [i_10 - 3] [i_11] = (min((+-151), var_8));
                            var_25 = (max(var_25, ((max(((((((!(arr_15 [i_7] [i_9] [i_11])))) < 1))), ((((min((arr_0 [i_10 - 1]), -15976))) + (arr_24 [i_7]))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        {
                            var_26 ^= (max(((max((var_7 == -1), (arr_26 [i_7] [5] [i_12] [2])))), ((~(-32767 - 1)))));
                            arr_39 [i_12] = (min(((((1 ? var_1 : 18)) | ((var_15 - (arr_25 [i_7] [i_8 - 1] [i_7]))))), (arr_28 [i_12] [i_8] [i_8] [i_7])));
                            var_27 = (min(0, (arr_25 [i_8] [i_8] [9])));
                            var_28 = ((((max((arr_11 [i_7] [i_8] [i_7] [i_12] [i_7]), (29 ^ 80)))) ? (arr_10 [i_7] [i_8 + 2]) : (+-1)));
                        }
                    }
                }
                arr_40 [i_7] [i_7] = (~1);
                var_29 += var_5;
                /* LoopNest 2 */
                for (int i_14 = 2; i_14 < 10;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 11;i_15 += 1)
                    {
                        {
                            var_30 = (max(var_30, (arr_19 [i_8] [i_14 + 1] [i_9 - 1] [i_8 + 2] [2] [i_7])));
                            var_31 = (arr_9 [i_7] [i_8] [i_9] [i_8] [i_15]);
                            arr_46 [i_7] [i_7] [10] [i_7] [i_15] = 48372;
                        }
                    }
                }
            }
            for (int i_16 = 2; i_16 < 9;i_16 += 1)
            {

                for (int i_17 = 0; i_17 < 11;i_17 += 1)
                {
                    var_32 = 1;
                    var_33 = max(-1, ((~(~1))));
                    var_34 = var_2;
                }
                for (int i_18 = 1; i_18 < 9;i_18 += 1)
                {
                    var_35 ^= (((((~((max(var_11, (arr_1 [i_8] [i_8]))))))) ? (min((min((arr_22 [i_16]), (arr_29 [i_7] [i_8 + 2] [i_7] [i_18]))), 2133146568)) : (--1097034806)));
                    var_36 = (min(var_36, var_5));
                    var_37 = arr_26 [i_7] [i_16 - 2] [i_16 - 2] [i_16 - 2];
                }
                var_38 = 1;
            }
            for (int i_19 = 0; i_19 < 11;i_19 += 1)
            {
                var_39 = ((!(((524287 ? (arr_36 [i_8] [i_8] [i_8 + 2] [i_8 + 2] [i_8 - 1]) : 1)))));
                var_40 = ((((min((arr_21 [i_19]), (~var_0)))) ? (arr_32 [i_8] [i_8] [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_8] [i_8 + 2]) : ((min((arr_7 [i_7] [i_7] [i_19]), ((((arr_41 [i_7] [i_7]) < 55607))))))));
                var_41 &= (var_3 + var_15);
            }
            var_42 = ((min(((var_14 || (arr_10 [i_7] [i_7]))), 1)));
        }
        /* LoopNest 3 */
        for (int i_20 = 0; i_20 < 1;i_20 += 1)
        {
            for (int i_21 = 3; i_21 < 9;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 11;i_22 += 1)
                {
                    {
                        arr_68 [10] [i_22] [i_7] [i_22] [i_7] = ((min((!1), (arr_17 [i_7] [i_7]))));
                        var_43 *= (min((arr_63 [i_20] [1] [i_20] [i_20]), (((((arr_57 [i_7] [i_21] [i_21 + 2]) * var_7))))));
                        var_44 = (!var_9);

                        for (int i_23 = 0; i_23 < 11;i_23 += 1)
                        {
                            arr_71 [i_7] [i_7] |= ((~(max((arr_51 [i_21 - 2] [i_21 - 3] [1] [i_21 - 2] [i_21 - 2] [i_23]), (arr_53 [i_22])))));
                            var_45 += (arr_63 [i_23] [3] [3] [i_7]);
                            arr_72 [i_7] [i_22] [i_7] [i_7] = (arr_63 [i_22] [i_21 - 1] [i_20] [i_7]);
                        }
                        for (int i_24 = 0; i_24 < 1;i_24 += 1)
                        {
                            var_46 = (max(var_46, ((((((-(arr_28 [i_24] [i_22] [i_20] [i_7])))) ? ((min((max((arr_45 [1] [3] [i_21] [i_20] [i_7]), var_16)), (~1)))) : ((~(arr_33 [3] [i_22] [i_21] [i_7] [i_7]))))))));
                            arr_77 [i_24] [i_24] [i_7] [i_21] [i_7] [i_20] [i_7] &= (-(((max(var_15, var_5)))));
                        }
                    }
                }
            }
        }
    }
    var_47 = var_5;
    var_48 = (min(var_48, ((((((-(!var_3)))) ? (var_10 ^ 54) : ((((!(!var_2))))))))));
    #pragma endscop
}
