/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [12] [14] = ((-(8617550850664186923 * 268427264)));
                                arr_14 [i_0] [11] [i_2] [i_3] [i_4] = ((-(((((var_6 ? var_2 : 1646444008699034417))) ? var_8 : (max(16800300065010517196, var_18))))));
                                var_20 = (max(var_20, ((((arr_12 [i_0] [i_0] [i_0 - 3] [i_0 - 3] [i_4]) ? (((((var_16 ? var_15 : var_19))) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_12 [i_0 + 1] [i_0 - 3] [i_0 - 2] [1] [i_0 - 3]))) : ((((((max(-1, (arr_3 [i_1] [i_3] [i_4])))) && 55619)))))))));
                                var_21 = ((2147483647 ? 9223372036854775807 : 16800300065010517198));
                                var_22 ^= (arr_5 [i_0] [i_1] [i_4] [i_1]);
                            }
                        }
                    }
                    arr_15 [1] [0] = -31043;
                    var_23 = (min(((max((arr_12 [i_0 - 3] [i_2] [i_2] [i_0] [i_0]), (arr_12 [i_0 + 1] [i_2] [19] [i_0] [i_2])))), ((var_4 ? var_8 : (arr_12 [i_0 + 1] [10] [i_2] [i_2] [i_2])))));
                }
            }
        }
    }
    var_24 = ((var_1 ? (max(var_18, var_13)) : (((min((var_13 == var_10), var_19))))));
    var_25 = (min(var_10, (~3604211396)));
    var_26 = (((((var_2 || var_6) ? (((var_0 << (var_16 - 221)))) : ((var_11 ? var_2 : var_18)))) <= (((var_18 ? var_5 : var_5)))));

    /* vectorizable */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 17;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        var_27 -= (arr_23 [i_5] [i_5] [i_6] [1]);
                        arr_30 [i_8] [i_6] [i_6] [i_6] [i_6] &= (((arr_23 [i_7 - 2] [i_7 - 2] [i_8] [1]) ? (arr_28 [i_7 - 3] [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 3]) : (arr_24 [i_7 + 1] [i_7 - 4] [i_7 - 3])));
                        arr_31 [i_7] [11] [1] [i_7] = (~var_14);
                        var_28 = (max(var_28, (arr_5 [i_5] [i_6] [i_7] [i_8])));
                        var_29 -= var_15;
                    }
                    var_30 = ((var_3 ? (arr_9 [i_7 + 1] [i_6] [i_7] [i_6]) : (arr_9 [i_7 - 3] [i_5] [i_7 - 3] [i_7])));
                    arr_32 [i_5] [i_5] [i_7] = (((arr_28 [i_7 - 3] [i_7 - 2] [i_7 - 4] [i_7 - 4] [i_7 - 2] [i_7 - 3]) <= (arr_28 [i_7 - 3] [i_7 - 3] [i_7 + 1] [i_7 - 2] [i_7 - 2] [i_7 - 3])));

                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        var_31 = 7281910067098031684;
                        arr_36 [i_5] [1] [i_7] [i_9] = (4218266442 == (((var_10 ? var_17 : var_1))));
                    }
                }
            }
        }
        arr_37 [i_5] = var_3;
    }
    for (int i_10 = 0; i_10 < 17;i_10 += 1)
    {
        var_32 = ((var_11 == (max((arr_18 [i_10] [i_10] [i_10]), var_0))));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 17;i_12 += 1)
            {
                {
                    var_33 = (max(var_33, ((((((var_4 ? (arr_6 [i_10] [1] [i_12]) : (arr_6 [i_10] [i_12] [i_11])))) ? var_0 : (((~(arr_28 [i_10] [i_10] [i_10] [i_11] [i_11] [i_10])))))))));

                    for (int i_13 = 0; i_13 < 17;i_13 += 1)
                    {
                        var_34 = (max(var_34, ((((arr_38 [i_10]) ? ((((arr_8 [i_12]) ? (arr_3 [i_11] [i_12] [i_13]) : (arr_40 [i_10])))) : (arr_33 [i_13]))))));
                        arr_48 [i_10] [i_12] [9] = var_15;

                        for (int i_14 = 0; i_14 < 17;i_14 += 1)
                        {
                            arr_51 [i_10] [i_12] [i_12] [i_13] [i_14] = 196;
                            var_35 = 236276647;
                            arr_52 [i_12] [i_10] [1] [14] [i_12] &= (max((min(var_8, (max((arr_20 [i_10]), (arr_47 [1] [13] [13] [i_13] [i_14]))))), (((((~(arr_9 [i_11] [i_11] [i_11] [i_13])))) ? (arr_40 [i_11]) : -7009295737399820901))));
                            var_36 = var_8;
                        }
                    }
                    /* vectorizable */
                    for (int i_15 = 3; i_15 < 15;i_15 += 1)
                    {
                        arr_55 [i_12] = 16800300065010517199;
                        arr_56 [i_10] [i_10] [i_10] [i_10] [4] [i_12] = 206;
                    }
                    var_37 *= (~var_17);
                }
            }
        }
        arr_57 [i_10] = ((~(((var_11 == ((max(-1, var_17))))))));
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 17;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 17;i_17 += 1)
            {
                {
                    var_38 = (min((((arr_4 [i_10] [i_16] [i_17]) ? var_18 : var_10)), ((min((arr_4 [i_10] [i_16] [i_16]), (arr_4 [i_10] [i_16] [i_17]))))));
                    var_39 = (((((min(var_12, (arr_11 [i_10] [i_16] [i_17] [i_10] [i_16] [i_16] [i_17]))))) >= var_4));
                }
            }
        }
        arr_63 [i_10] = (arr_24 [i_10] [i_10] [i_10]);
    }
    for (int i_18 = 1; i_18 < 11;i_18 += 1)
    {
        arr_66 [i_18] = var_14;
        arr_67 [i_18] = ((var_7 ? (((!(arr_24 [i_18] [i_18 + 1] [i_18 - 1])))) : var_16));
        var_40 = (max(var_40, ((((min(12547778573493474599, 11053291922670951037)) + -var_4)))));
        arr_68 [i_18] [i_18] = var_3;
    }
    /* vectorizable */
    for (int i_19 = 0; i_19 < 13;i_19 += 1)
    {
        arr_73 [i_19] = (arr_39 [i_19]);
        var_41 = (!var_8);
        arr_74 [i_19] [i_19] = (arr_72 [i_19] [i_19]);
    }
    #pragma endscop
}
