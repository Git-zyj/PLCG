/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_4, (min(var_10, var_10))));
    var_14 = (!var_2);
    var_15 = ((var_4 ? ((min(var_2, var_9))) : var_6));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_16 -= ((4294967295 - ((max(-35, -70)))));
        var_17 = var_4;

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = max(-2000288969, (max(115, -2000288969)));
            var_18 ^= ((!(((var_5 ? 4 : var_12)))));
            var_19 = (((!var_4) ? var_11 : (((((max(21, 10))) != var_8)))));

            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                var_20 = ((((max(-5, (arr_0 [i_0])))) ? ((max((arr_0 [i_0]), var_5))) : (((!(arr_0 [i_0]))))));
                var_21 = ((((min(((var_4 >> (((arr_9 [i_0 + 1] [i_1] [6] [i_2]) - 26199)))), var_1))) ? 1 : 46));
            }
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                var_22 = (((arr_0 [i_0]) ? var_8 : (arr_0 [i_0])));
                var_23 = (min(var_23, 9));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_24 = ((var_4 ? 849021044 : 1));
                            arr_19 [14] [i_1] [i_3] [i_0] [i_5] = ((~(849021037 | 10)));
                        }
                    }
                }
                var_25 = (~((~(max((arr_14 [i_0] [i_3] [i_1] [i_0]), (arr_10 [i_0] [i_1] [i_0] [i_3]))))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 23;i_7 += 1)
                    {
                        {
                            var_26 = ((-(arr_11 [i_0 + 2] [8] [8] [i_1])));
                            var_27 &= ((((max((arr_5 [i_6]), var_2))) ? (arr_5 [i_3]) : -31352));
                        }
                    }
                }
            }
            for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
            {
                var_28 = (min((arr_12 [i_0 - 1] [i_0 + 1] [i_0 + 1]), (arr_12 [i_0 + 1] [i_0 - 1] [i_0 + 1])));
                var_29 = ((((((arr_1 [i_0 - 1]) ? 3445946251 : var_5))) ? var_11 : 123));
            }
            for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
            {
                var_30 = ((!((max((arr_27 [i_0 + 2] [i_1] [i_0]), (arr_10 [i_1] [i_1] [i_0] [i_0]))))));

                for (int i_10 = 1; i_10 < 24;i_10 += 1) /* same iter space */
                {
                    var_31 = (min(var_31, var_10));
                    arr_33 [i_0] [i_1] [0] [i_0] [0] = (max(((-(arr_27 [i_0] [i_1] [i_0]))), ((((arr_1 [i_0 + 1]) ? (~-22) : (arr_22 [i_10] [i_0] [i_10 + 1] [i_0 + 2] [i_0] [i_0 + 2]))))));
                    var_32 = 3445946241;
                    var_33 = (arr_31 [i_0] [i_0]);
                }
                for (int i_11 = 1; i_11 < 24;i_11 += 1) /* same iter space */
                {

                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        arr_40 [i_0 - 1] [i_11] [i_0] [i_11] [i_12] [i_0 + 1] [6] = var_11;
                        var_34 = (var_6 != var_10);
                        var_35 = (max(((var_5 ? var_6 : var_6)), (((!(arr_36 [i_0]))))));
                        arr_41 [i_0] [i_1] [i_1] [i_11] [i_12] = (arr_39 [i_0 + 1] [i_1] [i_9] [i_11 - 1] [i_0 - 1] [i_11 - 1]);
                        var_36 = ((~(arr_38 [1] [i_0] [i_0 + 2])));
                    }
                    /* vectorizable */
                    for (int i_13 = 2; i_13 < 24;i_13 += 1)
                    {
                        var_37 = (((arr_38 [i_0 + 1] [i_0] [i_0 + 1]) ? (arr_38 [i_0 - 1] [i_0] [i_0 + 1]) : var_12));
                        arr_44 [i_0] [i_0] [20] [i_11 - 1] [i_13] = var_4;
                    }
                    /* vectorizable */
                    for (int i_14 = 2; i_14 < 21;i_14 += 1)
                    {
                        var_38 = -18729;
                        arr_49 [i_14 + 3] [1] [i_0] [i_9] [i_0] [i_0] [i_0] = ((~(arr_18 [i_0 + 1] [i_0 - 1] [i_0 + 2] [i_0 + 1] [i_11 + 1])));
                    }
                    arr_50 [i_0] = (max(((var_11 ? (((var_8 ? (arr_31 [i_0 + 2] [i_0]) : var_9))) : (arr_13 [i_0 + 1] [i_11 - 1]))), 4294967295));
                }
                for (int i_15 = 1; i_15 < 24;i_15 += 1) /* same iter space */
                {
                    var_39 = (max(var_39, var_4));
                    var_40 *= (((arr_47 [i_0 + 1] [21] [20] [1] [i_15 - 1] [i_15 - 1] [i_15 - 1]) ? var_10 : (((~var_9) ? (!var_1) : ((-(arr_24 [i_9] [i_1] [i_9] [i_9] [i_9] [i_0] [22])))))));

                    /* vectorizable */
                    for (int i_16 = 1; i_16 < 23;i_16 += 1)
                    {
                        arr_56 [i_1] [i_0] [24] [i_15] [i_16 + 1] = -var_12;
                        var_41 = (arr_51 [i_0] [i_1] [i_1] [22] [i_0] [i_15]);
                    }
                    arr_57 [i_0] [i_1] = ((2000288969 ? 1 : (0 & 16)));
                }
            }
        }
    }
    for (int i_17 = 1; i_17 < 9;i_17 += 1)
    {

        for (int i_18 = 0; i_18 < 13;i_18 += 1) /* same iter space */
        {
            var_42 = (max((((var_6 ? var_9 : var_4))), (((min(var_4, var_3)) & var_1))));
            var_43 = 1397068128;
        }
        for (int i_19 = 0; i_19 < 13;i_19 += 1) /* same iter space */
        {
            arr_66 [i_19] [i_17] [i_17 + 3] = (min(var_1, ((var_5 ? 1 : -132))));
            var_44 = ((((((arr_23 [i_17 - 1] [i_17] [i_17 + 3] [i_17 + 1] [23] [i_17 + 2]) ? var_2 : var_5))) && 23));
            arr_67 [i_17] [i_19] [4] = (max((arr_0 [i_17]), (arr_59 [i_17 + 1])));
            /* LoopNest 2 */
            for (int i_20 = 0; i_20 < 13;i_20 += 1)
            {
                for (int i_21 = 3; i_21 < 11;i_21 += 1)
                {
                    {
                        arr_74 [i_17] [i_19] [i_20] [i_21 - 3] [i_19] = ((var_11 ? var_0 : (((!(arr_68 [i_17 + 2] [i_17 + 2] [i_21 - 1]))))));
                        var_45 = var_12;
                        arr_75 [i_17 - 1] [i_20] [i_17] [i_19] [i_17 - 1] = (((((~(arr_37 [i_17] [i_17 + 3] [i_17] [i_17 + 3] [i_17])))) ? (arr_37 [i_17] [i_17] [i_17] [i_17 + 3] [i_17]) : (!var_9)));
                    }
                }
            }
        }
        var_46 = var_1;
        var_47 -= ((max(-22112, (min(2642151662, var_1)))));
    }
    #pragma endscop
}
