/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (arr_2 [i_0]);
        var_16 = var_7;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            arr_7 [i_1] [i_1] [13] = (((((arr_6 [i_0] [i_0] [i_0]) && var_11)) && -6721978918059724054));
            var_17 = (arr_0 [i_0]);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_18 = var_6;
                            var_19 = (arr_16 [i_3] [i_3]);
                            var_20 = -var_12;
                            arr_18 [i_0] [i_0] [i_3] [i_3] [11] [i_4] = ((arr_11 [i_3] [i_3] [18] [i_0 - 1]) + (arr_1 [i_0 + 1]));
                            var_21 = ((var_12 ^ (arr_8 [13] [i_2])));
                        }
                    }
                }
                arr_19 [i_3] = ((~(arr_12 [i_0] [1] [1])));
                var_22 = arr_15 [i_3] [i_2] [i_3] [13];
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
            {
                var_23 = var_11;
                arr_22 [i_0] [i_6] = (((arr_20 [i_0 + 2] [15] [1]) > ((((!(arr_15 [9] [i_2] [2] [i_2])))))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 17;i_8 += 1)
                    {
                        {
                            arr_28 [i_6] [i_6] = -var_5;
                            var_24 = arr_2 [i_2];
                            var_25 = ((+(((arr_6 [i_0] [1] [1]) % var_8))));
                            arr_29 [i_0] [i_2] [i_0] [i_0] [i_6] = (arr_2 [i_0 + 2]);
                        }
                    }
                }
            }
            arr_30 [i_0] &= ((!(arr_24 [i_0 + 2] [18] [i_0 + 1] [i_0 + 2])));
            var_26 = ((!(var_9 <= var_5)));
            var_27 = ((!(((var_5 ? (arr_16 [0] [0]) : (arr_11 [16] [i_0] [i_2] [i_2]))))));
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        {
                            var_28 = (((6721978918059724053 ^ 3881811786042722197) ? (var_11 > var_12) : (((arr_35 [i_0] [i_9]) ? var_3 : var_8))));
                            var_29 += (arr_23 [i_0] [i_0] [i_0] [i_0]);
                            arr_39 [i_0] [i_9] [i_9] [1] [1] [2] = (i_9 % 2 == zero) ? (((arr_1 [i_0 - 2]) >> (((arr_37 [i_9] [i_2] [13] [4] [0] [i_10] [i_11]) - 754265457)))) : (((arr_1 [i_0 - 2]) >> (((((arr_37 [i_9] [i_2] [13] [4] [0] [i_10] [i_11]) - 754265457)) - 832157684))));
                            arr_40 [i_9] [17] = (((arr_4 [i_9] [i_10] [i_10]) - (arr_25 [i_0])));
                        }
                    }
                }
            }
        }
        for (int i_12 = 0; i_12 < 20;i_12 += 1) /* same iter space */
        {
            var_30 = (!((((max(-6721978918059724054, 1085637287)) >> (!var_13)))));
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 20;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 20;i_14 += 1)
                {
                    {
                        var_31 = (arr_45 [i_0] [i_13] [1]);
                        var_32 = (arr_25 [i_0]);
                        var_33 = (((!var_9) == (arr_48 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1])));
                    }
                }
            }
            var_34 = ((~(arr_21 [i_12] [i_0] [1])));
        }
        for (int i_15 = 0; i_15 < 20;i_15 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 20;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 20;i_17 += 1)
                {
                    {
                        arr_58 [i_15] [i_17] [i_17] [i_17] = ((~(min((arr_56 [i_0 + 1] [i_0] [i_15] [i_0 - 1] [i_0]), (arr_56 [i_0 + 2] [i_0] [i_15] [i_0 + 2] [i_0 + 2])))));
                        arr_59 [i_0] [i_15] [i_15] [9] [i_17] [i_15] = ((((!(arr_5 [i_15])))));
                        arr_60 [i_15] = max((min(1153245510, 4294967295)), 524287);
                        var_35 = ((-(max((arr_20 [i_0] [i_17] [i_16]), -var_6))));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_18 = 0; i_18 < 20;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 20;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 20;i_20 += 1)
                    {
                        {
                            arr_71 [i_15] [i_15] [16] [9] [17] [i_20] = max((!var_7), ((~((var_2 % (arr_65 [i_15] [1]))))));
                            var_36 = ((((max(var_4, (arr_67 [6] [i_15] [0] [i_18] [15] [i_15]))))));
                            var_37 = (((max(var_13, ((-(arr_38 [i_0] [i_0] [i_0] [i_0] [i_15]))))) < (~var_9)));
                            var_38 -= (arr_62 [7] [i_19]);
                        }
                    }
                }
            }
        }
        var_39 = (!(!0));
    }
    for (int i_21 = 2; i_21 < 18;i_21 += 1) /* same iter space */
    {
        var_40 += ((((~(((arr_11 [1] [i_21 - 1] [i_21 - 1] [1]) << (var_1 + 4101079047012448875))))) ^ ((max((arr_54 [1] [i_21 + 2]), -var_14)))));
        arr_74 [i_21] = var_4;
        var_41 = ((var_12 % ((max((!var_7), (arr_0 [i_21]))))));
    }
    for (int i_22 = 2; i_22 < 18;i_22 += 1) /* same iter space */
    {
        var_42 = (!var_12);
        var_43 = (((~var_14) ^ (~var_2)));
    }
    /* vectorizable */
    for (int i_23 = 2; i_23 < 18;i_23 += 1) /* same iter space */
    {
        var_44 = var_12;
        var_45 = (((((-(arr_24 [i_23] [i_23] [i_23] [i_23])))) && (arr_77 [i_23 - 2])));
        var_46 = ((~(!4294967295)));
        arr_79 [i_23] = ((-var_7 ? (((var_4 * (arr_15 [i_23] [i_23] [i_23] [i_23])))) : ((var_8 / (arr_9 [i_23] [i_23])))));
    }
    var_47 |= (!var_0);
    var_48 = var_14;
    var_49 = ((-(1363955819008048698 > 1)));
    var_50 = (max(var_50, var_1));
    #pragma endscop
}
