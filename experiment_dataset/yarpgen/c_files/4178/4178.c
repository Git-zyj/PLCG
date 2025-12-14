/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_7 [3] = ((~(((arr_6 [i_0] [i_0] [i_0]) ? (arr_4 [9] [9]) : var_11))));
            var_19 = (((arr_1 [i_1]) ^ (arr_0 [1] [1])));
            var_20 = (~var_0);
        }
        var_21 = (((-(var_13 / var_17))));
        var_22 = (((!(((var_15 ? 52 : (arr_0 [i_0] [i_0])))))) ? (((var_1 && var_2) ? (min(6830979456593193740, 0)) : ((((arr_2 [i_0]) ^ (arr_3 [i_0] [i_0])))))) : (((min(125, (((!(arr_0 [i_0] [4])))))))));
        var_23 = (min((min((((arr_6 [i_0] [i_0] [i_0]) ? var_10 : (arr_1 [i_0]))), (arr_5 [i_0] [i_0] [13]))), ((((arr_2 [i_0]) <= var_15)))));
        arr_8 [i_0] [9] = (arr_6 [i_0] [6] [i_0]);
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        arr_13 [i_2] [i_2] = ((((((((arr_12 [22]) ? (arr_12 [i_2]) : (arr_12 [i_2])))) && var_2)) || ((max(((((arr_10 [i_2]) < (arr_10 [20])))), (((arr_12 [i_2]) ? (arr_9 [0] [14]) : (arr_10 [i_2]))))))));
        arr_14 [i_2] [i_2] = (max((((+((((arr_9 [3] [2]) && -1635)))))), (((arr_12 [i_2]) ? var_7 : (arr_12 [i_2])))));
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_24 = var_13;
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    {
                        var_25 = (var_14 < 15);
                        var_26 = ((~(arr_18 [i_4] [i_5])));
                        arr_26 [i_6] [i_6] [i_6] [i_6] = (arr_17 [i_6]);
                        arr_27 [i_3] [i_4] [i_5] [i_6] = (((arr_15 [i_5] [i_6]) <= (arr_20 [i_5] [i_4])));
                        var_27 = (arr_15 [i_3] [14]);
                    }
                }
            }
            var_28 = (max(var_28, ((((arr_25 [i_3] [i_3] [i_3] [i_3]) / (arr_12 [i_3]))))));
            var_29 = (((((arr_12 [i_4]) + 2147483647)) >> (var_10 - 81)));
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_31 [i_3] [i_7] = (min(var_1, (min((((arr_21 [i_3] [1]) ? var_9 : var_9)), (arr_24 [i_3] [i_3] [i_3])))));

            for (int i_8 = 2; i_8 < 18;i_8 += 1)
            {
                arr_35 [i_3] [i_3] = ((min((~var_1), ((((arr_21 [i_7] [i_8]) >= (arr_22 [4] [i_7] [i_7] [21])))))));
                arr_36 [i_8] [i_8] [i_8] = ((!((min(((-(arr_10 [i_3]))), (((var_3 / (arr_16 [i_8] [i_7])))))))));

                /* vectorizable */
                for (int i_9 = 2; i_9 < 20;i_9 += 1) /* same iter space */
                {
                    var_30 = ((var_17 * (((arr_33 [i_3] [i_7] [i_8 + 3] [i_9 + 1]) / var_9))));
                    var_31 |= (((var_15 + 38) ? ((((1 || (arr_24 [i_3] [i_3] [8]))))) : var_7));
                }
                for (int i_10 = 2; i_10 < 20;i_10 += 1) /* same iter space */
                {
                    var_32 = (min(var_32, ((((var_9 ? -125 : ((~(arr_33 [i_3] [i_8 - 1] [i_8] [10])))))))));
                    arr_42 [i_7] [i_10] [i_8] [i_10 + 2] [i_3] [i_7] = arr_20 [i_10 - 2] [i_7];
                }
            }
            for (int i_11 = 1; i_11 < 19;i_11 += 1)
            {
                var_33 = ((~(min((arr_19 [i_11 + 1] [i_11 + 1] [16]), (arr_19 [i_11 + 2] [i_7] [i_7])))));
                arr_45 [i_11] = (arr_33 [i_3] [i_7] [i_7] [i_11 + 1]);
            }
            for (int i_12 = 0; i_12 < 22;i_12 += 1)
            {
                arr_50 [i_3] [i_7] = (!-var_5);
                var_34 *= (arr_19 [i_12] [i_3] [i_3]);
            }
            for (int i_13 = 0; i_13 < 22;i_13 += 1)
            {
                var_35 = ((min((((arr_52 [i_3] [i_3] [4]) ? (arr_24 [i_13] [i_7] [i_3]) : (arr_30 [i_13]))), ((((arr_38 [i_3] [i_3] [i_3] [i_3]) + 1837776169))))));
                var_36 = (((arr_41 [i_3] [i_3] [13] [13]) ? var_11 : ((((((arr_32 [i_3] [i_7] [i_13] [i_7]) ? var_12 : var_12))) & ((0 ? 11543 : 7))))));
            }

            for (int i_14 = 0; i_14 < 22;i_14 += 1)
            {
                var_37 *= (min((((!70) ? (arr_51 [14] [i_7] [4]) : (((arr_39 [i_3] [i_7] [i_14] [i_14]) ? var_16 : (arr_55 [i_3] [i_3] [i_3] [16]))))), ((((arr_48 [i_3]) && ((((arr_34 [i_14]) ? var_16 : (arr_30 [19])))))))));

                for (int i_15 = 0; i_15 < 22;i_15 += 1) /* same iter space */
                {
                    var_38 = (max(var_38, (arr_18 [i_7] [i_7])));
                    arr_59 [i_14] [i_7] [i_7] [i_7] = ((((min((min(var_4, (arr_43 [i_3] [i_7] [i_14] [i_14]))), var_16))) ? (arr_32 [i_14] [i_14] [3] [1]) : (((arr_52 [i_7] [i_7] [1]) - var_8))));
                    arr_60 [i_3] [i_3] [i_14] = (((arr_21 [i_7] [i_3]) < (((arr_33 [i_15] [i_14] [i_7] [i_3]) ? ((((arr_38 [i_15] [1] [i_7] [i_3]) ? var_12 : var_17))) : var_6))));
                }
                /* vectorizable */
                for (int i_16 = 0; i_16 < 22;i_16 += 1) /* same iter space */
                {
                    arr_64 [i_16] [i_14] [i_14] [i_14] [i_3] = (~175);
                    var_39 &= 175;
                    arr_65 [i_14] = ((((var_7 ? (arr_41 [i_3] [9] [i_14] [i_3]) : (arr_48 [i_3]))) * var_1));
                }
                for (int i_17 = 0; i_17 < 22;i_17 += 1) /* same iter space */
                {
                    var_40 = (min((((-(1 || 25)))), ((~(var_12 / var_11)))));
                    arr_68 [i_14] [i_17] = (((arr_63 [i_3] [i_3] [i_14] [i_7] [11]) ? ((((!(arr_56 [i_7] [i_14] [i_14]))) ? var_4 : ((((var_10 && (arr_32 [i_17] [i_14] [i_3] [i_3]))))))) : (((((var_1 & (arr_63 [i_3] [i_7] [i_3] [i_14] [14])))) ? (arr_22 [i_3] [i_7] [i_14] [i_17]) : (arr_62 [i_3] [i_3] [11] [i_3])))));
                    arr_69 [i_3] [i_7] [i_14] [i_17] = ((~(arr_18 [i_17] [i_3])));
                    arr_70 [4] [i_14] [12] [i_14] [i_3] = (((min(var_7, (min((arr_20 [i_3] [i_3]), var_9)))) + 63039));
                    arr_71 [i_14] [i_3] [i_3] = (arr_43 [i_3] [i_3] [i_3] [i_14]);
                }
            }
        }
        for (int i_18 = 0; i_18 < 22;i_18 += 1)
        {
            var_41 = var_9;
            var_42 = (!var_0);
        }
        var_43 = (min((((~(arr_54 [i_3])))), (min((arr_63 [i_3] [i_3] [i_3] [i_3] [i_3]), -var_7))));
        var_44 = (arr_52 [i_3] [20] [i_3]);
    }
    /* vectorizable */
    for (int i_19 = 0; i_19 < 22;i_19 += 1)
    {

        for (int i_20 = 0; i_20 < 1;i_20 += 1)
        {
            var_45 = var_17;
            var_46 += ((1 ? 6754145544367669548 : 32767));

            for (int i_21 = 0; i_21 < 22;i_21 += 1)
            {
                var_47 = (arr_78 [i_19]);
                var_48 = (((arr_11 [i_21]) ? (((-1632228877 + 2147483647) << 1)) : var_15));
            }
            arr_82 [i_20] [i_19] = var_17;
            var_49 = (arr_34 [1]);
        }
        for (int i_22 = 0; i_22 < 22;i_22 += 1)
        {
            var_50 = ((-(var_17 >= var_12)));
            var_51 = ((-1 && (arr_47 [i_19] [i_22] [11])));
            var_52 = 8219415775329233822;
        }

        for (int i_23 = 0; i_23 < 22;i_23 += 1)
        {

            for (int i_24 = 0; i_24 < 22;i_24 += 1)
            {
                arr_92 [i_19] [i_24] [i_19] = (arr_84 [i_23]);
                arr_93 [i_24] [i_23] [11] [i_24] = var_16;
            }
            var_53 = (min(var_53, (((~(arr_18 [i_19] [i_23]))))));
        }
        var_54 = -var_1;
        /* LoopNest 2 */
        for (int i_25 = 0; i_25 < 22;i_25 += 1)
        {
            for (int i_26 = 0; i_26 < 22;i_26 += 1)
            {
                {
                    arr_98 [1] [7] [i_19] [i_19] = ((1 < (-32767 - 1)));
                    /* LoopNest 2 */
                    for (int i_27 = 0; i_27 < 22;i_27 += 1)
                    {
                        for (int i_28 = 0; i_28 < 22;i_28 += 1)
                        {
                            {
                                arr_104 [i_28] = ((~(138 <= var_13)));
                                var_55 = (((arr_29 [i_19] [i_25] [i_26]) ? (arr_49 [i_19] [i_25]) : var_16));
                            }
                        }
                    }
                }
            }
        }
    }
    var_56 = var_16;
    #pragma endscop
}
