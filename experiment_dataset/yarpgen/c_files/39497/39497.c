/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_15 = (min(var_15, ((((((-19574 ? 116 : (arr_1 [i_0])))) ? (((!(arr_1 [i_0])))) : (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))))))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_16 -= (max((((!((((arr_8 [i_0] [i_1] [i_0] [i_1]) ? var_7 : 2261168625)))))), (arr_1 [i_1 + 1])));
                        arr_9 [i_0] [i_2] [i_0] [i_3] = ((!(arr_5 [i_1 - 3] [i_1 + 1])));

                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            var_17 = ((2033798671 ? 2033798644 : 2033798644));
                            arr_12 [i_2] [i_2 - 1] = (((((((arr_3 [i_4] [i_3] [i_2]) ? var_3 : var_7))) ? -2033798671 : var_7)));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            var_18 = -86;
                            var_19 = var_3;
                            var_20 = (min(var_20, var_11));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            var_21 ^= (~var_3);
                            var_22 &= ((-10801 ? (((arr_16 [i_0] [i_3] [i_0] [i_1] [i_0]) ? var_11 : ((2261168637 ? 2261168624 : 2261168652)))) : (max(var_1, (max((arr_11 [i_3] [i_1] [i_2 + 1] [i_3] [i_6]), var_3))))));
                            var_23 -= (max((((((var_1 ? (arr_0 [i_6] [i_3]) : var_8))) ? (!var_7) : var_4)), ((var_8 ? ((-(arr_13 [i_0] [i_0] [i_1] [i_0] [i_1] [i_6]))) : (!var_13)))));
                            var_24 = (((~var_1) ? (arr_13 [i_0] [i_1] [i_2] [i_6] [i_6] [16]) : (~-1)));
                        }
                    }
                }
            }
        }

        for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
        {
            var_25 = (~9256);
            /* LoopNest 3 */
            for (int i_8 = 2; i_8 < 15;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 0;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        {
                            var_26 = var_9;
                            var_27 = (+-var_7);
                        }
                    }
                }
            }
            arr_31 [i_7] [i_7] [i_7] = 2261168652;
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
        {

            for (int i_12 = 0; i_12 < 17;i_12 += 1)
            {

                for (int i_13 = 2; i_13 < 15;i_13 += 1)
                {
                    var_28 = ((var_0 ? (arr_8 [i_12] [i_13 - 2] [i_13] [i_13]) : (arr_8 [i_12] [i_13 - 1] [i_13] [i_13 - 2])));
                    var_29 = (~var_11);
                    var_30 = ((var_4 ? (arr_36 [i_13 + 2] [i_13 + 2] [i_13 + 1] [i_13 + 2]) : (arr_7 [i_13] [i_13 - 2] [i_13 + 1] [i_13 - 2])));
                    var_31 = (min(var_31, (((~(!var_7))))));
                }
                var_32 = var_11;
                var_33 = (((arr_33 [i_0] [14]) ? var_8 : (arr_13 [i_0] [i_0] [i_11] [i_11] [i_11] [i_12])));
                var_34 = arr_0 [i_0] [i_0];
            }
            for (int i_14 = 2; i_14 < 13;i_14 += 1)
            {
                /* LoopNest 2 */
                for (int i_15 = 2; i_15 < 16;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 17;i_16 += 1)
                    {
                        {
                            arr_49 [i_0] [i_0] [i_0] [i_0] |= ((~((var_13 ? var_0 : (arr_30 [i_0] [i_11] [i_14] [i_15] [i_14])))));
                            var_35 = ((~(arr_16 [i_0] [i_0] [i_16] [i_0] [i_0])));
                            var_36 = ((1609283094 ? 2114674072 : 501771332));
                        }
                    }
                }
                arr_50 [i_0] [i_0] [i_0] [i_0] = (~var_8);
                arr_51 [i_0] [i_11] = ((-(arr_0 [i_14 + 2] [i_14 + 1])));
            }
            var_37 = (max(var_37, (((~(((arr_2 [i_0]) ? var_11 : (arr_23 [i_0] [i_11] [i_11]))))))));

            for (int i_17 = 0; i_17 < 17;i_17 += 1)
            {
                var_38 = (max(var_38, (((var_11 ? var_8 : (arr_7 [i_0] [i_11] [i_17] [i_17]))))));
                var_39 = ((((arr_36 [i_0] [i_11] [i_0] [i_0]) ? var_5 : var_5)));
                var_40 = ((!(arr_20 [i_0] [i_0] [i_0])));
            }
            arr_54 [i_0] = ((2033798650 ? -326148907 : (!var_9)));
            arr_55 [i_0] [i_0] = arr_1 [i_0];
        }
    }
    for (int i_18 = 0; i_18 < 17;i_18 += 1)
    {
        var_41 = ((~((~(arr_34 [i_18] [13] [i_18])))));
        var_42 = (((-var_0 ? var_0 : -2122129724)));
        arr_60 [i_18] = (max((arr_53 [2] [11] [i_18] [i_18]), (max(((60555 ? (-32767 - 1) : 2354661199)), var_2))));
    }
    var_43 = ((var_3 ? var_0 : (!3902466182486013690)));
    var_44 = var_11;
    #pragma endscop
}
