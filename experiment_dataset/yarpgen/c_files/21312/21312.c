/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_21 = ((-(var_6 / 31)));
                    var_22 = ((~(min((arr_3 [i_0] [i_2 - 1] [i_2]), (arr_5 [i_2] [i_2 + 2] [i_2 - 1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_23 = (min(-32, (~-32)));
                                var_24 = (max(41, (((((var_17 ? var_11 : var_5))) ? -var_10 : (arr_9 [i_2] [i_1] [i_1 - 1] [i_1 - 3])))));
                                arr_14 [i_2] = ((((~var_18) < (((var_13 == (arr_9 [i_2] [i_1 - 3] [i_2 - 1] [i_3])))))));
                            }
                        }
                    }
                    var_25 = var_6;
                }
            }
        }
    }
    var_26 = ((var_1 || (((min(var_3, -51))))));

    /* vectorizable */
    for (int i_5 = 1; i_5 < 21;i_5 += 1)
    {
        var_27 = var_0;
        var_28 = (~var_15);
        var_29 = 31;
    }
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        var_30 = var_17;
        arr_20 [i_6] = ((arr_16 [i_6] [i_6]) == ((max((max(39, var_2)), ((max(var_6, (arr_15 [20] [i_6]))))))));
        var_31 = ((!((var_15 && (var_9 && var_10)))));
        arr_21 [9] [i_6] = var_18;
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 3; i_8 < 20;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                {
                    var_32 = (arr_24 [i_7] [i_7] [i_7]);
                    arr_29 [i_7] [i_7] [i_9] [i_9] = ((((max(8, -17))) ? -var_19 : 16));
                    var_33 = (arr_28 [i_7] [20] [i_9] [i_9]);
                }
            }
        }

        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {

            /* vectorizable */
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                var_34 = (((!-32) ? var_15 : -16));
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 21;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        {
                            var_35 = (!var_2);
                            var_36 = 37;
                        }
                    }
                }
            }
            for (int i_14 = 0; i_14 < 22;i_14 += 1)
            {
                var_37 = (-(((arr_25 [i_7]) ? 16 : (arr_27 [i_7] [1]))));
                var_38 = (max(var_12, ((((((arr_42 [i_7] [i_7] [4] [i_14]) == (arr_33 [i_7] [i_10] [i_14]))) ? ((max(46, -32))) : ((((arr_25 [i_7]) || (arr_28 [i_7] [i_7] [i_7] [i_14])))))))));

                /* vectorizable */
                for (int i_15 = 2; i_15 < 21;i_15 += 1)
                {
                    var_39 = ((var_3 == ((var_2 ? var_7 : var_3))));
                    var_40 = (var_7 == var_1);
                    arr_46 [i_7] [i_10] [i_7] [i_15] [i_7] = ((var_12 ? var_6 : ((var_2 ? (arr_16 [i_7] [i_7]) : var_11))));
                    var_41 = (((arr_38 [i_7] [i_7] [i_7] [i_7]) == (!var_15)));
                }
                for (int i_16 = 0; i_16 < 22;i_16 += 1)
                {
                    var_42 = (((var_5 ? var_17 : (((arr_48 [i_7] [i_7] [i_7] [i_7]) ? -13 : var_14)))));
                    arr_49 [i_7] [i_10] [i_10] [i_10] [i_7] = (((~-62) ? (arr_45 [i_7] [i_10]) : (-54 || var_8)));
                }
            }
            var_43 = ((((!(arr_27 [i_7] [i_10]))) ? var_16 : ((min((arr_23 [i_7]), var_14)))));
            var_44 = ((var_10 ? ((((((arr_34 [i_7] [i_10]) ? (arr_38 [i_7] [0] [i_10] [i_7]) : var_8))) ? var_9 : var_12)) : 34));
            arr_50 [i_7] [i_10] = ((((((var_3 == var_13) ? var_9 : ((max(24, -17)))))) ? -10 : var_8));
            arr_51 [i_10] [i_7] [i_7] = -46;
        }
        for (int i_17 = 0; i_17 < 22;i_17 += 1)
        {
            var_45 = (((((~((38 ? var_5 : var_14))))) ? ((~(~-15))) : (max((var_0 ^ -31), (arr_25 [i_17])))));
            var_46 = (((~-17) < ((min(8, (var_12 > var_13))))));
            var_47 = ((-((max(var_11, (arr_25 [i_7]))))));
        }
        var_48 = ((((46 ? var_9 : var_14))));
        var_49 = var_8;
    }
    for (int i_18 = 0; i_18 < 1;i_18 += 1) /* same iter space */
    {
        var_50 = min(-20, (!10));
        var_51 = (min((((((arr_33 [i_18] [i_18] [i_18]) ? 37 : var_8)))), (var_6 | var_19)));
        arr_56 [i_18] = ((var_14 ? ((-13 ? 0 : 18)) : ((-59 ? ((max(11, -31))) : var_7))));
        var_52 = var_13;
    }
    #pragma endscop
}
