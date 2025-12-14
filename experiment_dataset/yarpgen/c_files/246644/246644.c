/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~var_4);
    var_14 += ((-(min((86 <= 8), ((var_12 ? var_12 : 2109971971))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_15 = ((-((((arr_3 [i_2 - 2]) || 1)))));
                    var_16 = ((((((arr_0 [i_0] [i_2 - 1]) % (arr_0 [i_0] [i_2 - 2])))) ? (((((173 << (var_12 - 10853))) * (arr_7 [i_0] [11] [11] [11])))) : (arr_4 [i_2 - 3] [i_2 - 2] [i_2 + 2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_17 += ((2815570250 ? var_8 : (((((arr_10 [i_3] [i_1] [i_3] [i_3] [i_1] [i_2]) == (arr_10 [i_4] [i_1] [i_4] [i_3] [i_1] [i_1])))))));
                                var_18 += (arr_9 [i_0] [i_1] [i_0] [i_3]);
                                arr_13 [i_4] [i_3] [i_4] [i_0] [i_4] [i_0] [i_0] = (arr_5 [i_0]);
                            }
                        }
                    }
                }
            }
        }
        arr_14 [i_0] [i_0] = ((((min((max(-8, (arr_0 [i_0] [i_0]))), (76 * 28672)))) ? 12 : ((13822 & (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])))));
        var_19 = 141863388262170624;
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
    {
        var_20 = var_10;
        arr_18 [i_5] [i_5] = (((((arr_3 [i_5]) > (arr_3 [i_5])))) ^ (max((arr_3 [i_5]), (arr_3 [i_5]))));
        var_21 = (((max((((arr_0 [i_5] [11]) && (arr_17 [i_5] [i_5]))), (var_8 && var_7))) ? ((((var_10 ? (arr_3 [i_5]) : var_7)))) : (arr_6 [i_5] [i_5] [i_5] [i_5])));
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 10;i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                {
                    var_22 = (max(var_22, (var_2 == var_7)));
                    arr_26 [i_6] [i_7] [i_8] [i_6] = (arr_9 [i_6] [i_6] [i_6] [i_6 + 1]);
                    arr_27 [i_6] [i_7] [i_6] = -var_5;
                }
            }
        }
        var_23 = (min(var_23, (arr_4 [i_6 + 1] [i_6 + 1] [i_6])));
        var_24 = var_11;
        arr_28 [i_6] = ((-(arr_5 [i_6 - 1])));
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 10;i_9 += 1) /* same iter space */
    {
        arr_32 [i_9] = ((((var_4 << (arr_29 [i_9 - 1] [i_9]))) >> (747016263550594145 - 747016263550594136)));
        var_25 = (-var_6 ? var_8 : ((0 >> (var_9 - 5310673821360124155))));
    }
    var_26 *= (((((min(260046848, -7987426416875519430)) * -var_6))) ? var_0 : var_11);

    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        var_27 = (max(var_27, 25681));
        var_28 -= ((((min((~var_1), (((36867 ? var_4 : 28668)))))) ? var_0 : ((max(((var_1 ? 51695 : 2215)), (((13817 > (arr_15 [i_10])))))))));
        /* LoopNest 3 */
        for (int i_11 = 1; i_11 < 8;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 11;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 10;i_13 += 1)
                {
                    {
                        var_29 = (max(var_29, ((min((((var_6 < ((-(arr_19 [6] [6])))))), (((arr_2 [i_13] [i_11 - 1]) ? var_1 : 10581)))))));
                        arr_47 [i_10] [i_13] [i_12] = (min(-var_9, 5141567678979648004));
                        var_30 = (4294967271 || -3119167120957168248);
                    }
                }
            }
        }
        arr_48 [i_10] = ((-(max((arr_34 [i_10]), (arr_21 [i_10])))));
        var_31 = (max(var_31, -var_2));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
    {

        for (int i_15 = 0; i_15 < 20;i_15 += 1)
        {
            var_32 ^= ((-(arr_51 [i_15])));

            for (int i_16 = 0; i_16 < 20;i_16 += 1)
            {
                arr_56 [i_14] [i_15] [i_15] [i_14] = (((arr_54 [i_14] [i_14] [i_15] [i_16]) ? (arr_6 [i_14] [i_14] [i_14] [i_14]) : -7991));
                var_33 |= (((((111 ? 3100 : -5919))) ? (arr_0 [i_14] [1]) : (((arr_55 [i_14] [i_15] [i_15] [0]) | var_0))));
                arr_57 [i_14] [i_15] [i_15] [i_15] = ((((((arr_8 [i_14] [i_14] [19] [i_15] [i_15]) | (arr_3 [19])))) ? 99 : (arr_49 [i_14] [i_15])));
                arr_58 [i_14] [i_15] [i_16] = ((-(arr_52 [i_14] [i_15] [i_16])));
            }
        }
        for (int i_17 = 0; i_17 < 1;i_17 += 1)
        {
            arr_63 [i_17] = (((82 > var_8) & (arr_16 [i_17])));
            var_34 = (((arr_6 [i_14] [i_17] [i_14] [i_17]) ? (arr_6 [15] [i_17] [i_14] [i_17]) : (arr_6 [i_14] [i_14] [i_14] [i_14])));
            var_35 = 65408;
            arr_64 [i_17] [i_17] = (arr_1 [i_14]);
        }
        /* LoopNest 2 */
        for (int i_18 = 1; i_18 < 16;i_18 += 1)
        {
            for (int i_19 = 1; i_19 < 17;i_19 += 1)
            {
                {
                    arr_70 [i_14] [i_18] [i_19] = (((arr_62 [i_14]) ? (arr_59 [18]) : (arr_1 [i_14])));
                    var_36 = (~var_3);
                }
            }
        }
        var_37 -= (5141567678979648004 + 1);
        arr_71 [i_14] = (((arr_67 [i_14] [i_14] [i_14]) >= var_5));
    }
    for (int i_20 = 0; i_20 < 1;i_20 += 1) /* same iter space */
    {
        var_38 = ((156 << (96 - 96)));
        var_39 = (min(var_39, (((-(var_6 || var_1))))));
        /* LoopNest 2 */
        for (int i_21 = 3; i_21 < 17;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 20;i_22 += 1)
            {
                {
                    arr_81 [i_20] [i_21 - 2] [i_21] [i_22] = ((((var_10 ? (arr_2 [i_20] [i_21]) : 167)) & (--1)));
                    var_40 = (((arr_72 [i_21]) % ((2544 ? 3853017620534580000 : 0))));
                    var_41 = ((-((min((arr_62 [i_20]), var_3)))));
                }
            }
        }
    }
    for (int i_23 = 0; i_23 < 1;i_23 += 1) /* same iter space */
    {
        arr_85 [i_23] [i_23] = (((arr_51 [i_23]) & (((((arr_75 [i_23] [i_23]) || 3853017620534580009))))));
        var_42 = ((-(arr_65 [i_23])));
        var_43 = var_9;
    }
    #pragma endscop
}
