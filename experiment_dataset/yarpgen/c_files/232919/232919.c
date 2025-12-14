/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_13 = (max(var_13, (((~((max((arr_1 [2]), (arr_1 [2])))))))));
        var_14 = (min((max((((arr_1 [i_0]) ? (arr_0 [i_0]) : var_2)), (((-(arr_1 [i_0])))))), (((((2215 ? 0 : 3)) | ((-(arr_0 [i_0]))))))));

        /* vectorizable */
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            arr_4 [i_0] [i_1] [i_0] = -1;
            var_15 = ((~(arr_3 [i_1] [i_0] [i_1 + 4])));
        }
    }
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        var_16 = (max(var_16, (arr_6 [i_2])));
        var_17 *= (arr_6 [i_2]);
        var_18 = (min(((-(arr_6 [i_2 + 2]))), (((var_7 ? (arr_5 [i_2] [i_2]) : (arr_6 [i_2]))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        arr_10 [i_3] = arr_7 [i_3];
        arr_11 [i_3] = var_10;
        var_19 = (max(var_19, (arr_9 [i_3])));
    }

    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        arr_15 [i_4] &= ((-(arr_9 [3])));

        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        {
                            arr_26 [i_4] [i_5] [i_5] [i_6] [i_7] [i_7] = (~((+(((arr_19 [i_5] [i_8] [i_7]) - (arr_12 [i_4]))))));
                            arr_27 [i_7] [i_8] [i_7] [i_6] [i_6] [i_4] [i_7] |= (arr_8 [i_4]);
                        }
                    }
                }
            }
            var_20 = ((((((((arr_13 [i_4]) ? (arr_20 [i_4] [i_5] [i_4] [i_4] [i_5]) : var_12))) ? (arr_13 [i_5]) : ((var_0 ? (arr_16 [i_4]) : (arr_12 [1]))))) + -var_4));
            var_21 -= ((((((arr_12 [i_4]) + (arr_19 [16] [i_4] [i_5])))) ? (arr_22 [i_4] [i_4] [1] [i_5]) : ((((max((arr_12 [1]), (arr_20 [i_4] [i_4] [i_4] [17] [i_4])))) ? (max(var_2, (arr_9 [i_4]))) : (arr_22 [6] [i_4] [0] [i_5])))));
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_10 = 2; i_10 < 21;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    {
                        var_22 = (max(var_22, ((~(((arr_28 [i_11]) ? (arr_28 [i_11]) : (arr_28 [i_10])))))));
                        arr_35 [i_4] [i_4] [i_9] [i_9] [i_11] = (arr_19 [i_9] [i_10 - 1] [i_11]);
                        var_23 = (max(var_23, ((((((~(arr_14 [i_9] [i_9])))) ? (((+(((arr_12 [i_11]) ? (arr_12 [i_4]) : (arr_29 [i_9] [i_9])))))) : (arr_31 [i_4] [i_11]))))));
                        var_24 -= (arr_18 [i_4] [i_4] [i_4]);
                    }
                }
            }
            var_25 ^= (arr_14 [i_9] [i_9]);
        }
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            var_26 = (max(var_26, ((((arr_23 [11] [i_12] [i_12] [i_12]) ? ((min((arr_23 [i_4] [i_4] [i_4] [i_12]), var_9))) : (arr_23 [i_12] [15] [i_4] [i_4]))))));
            arr_38 [i_4] [i_12] = (((arr_36 [i_4] [i_12] [i_12]) | ((((!var_3) < (arr_20 [i_4] [i_4] [i_4] [i_4] [i_4]))))));
        }
        var_27 -= (max((arr_22 [i_4] [i_4] [8] [i_4]), ((((arr_37 [i_4] [i_4]) ? var_4 : (arr_31 [i_4] [18]))))));

        /* vectorizable */
        for (int i_13 = 0; i_13 < 22;i_13 += 1)
        {
            var_28 = (((((-(arr_24 [i_4] [6] [i_4] [12] [i_4])))) < (~var_11)));
            var_29 ^= ((-(arr_39 [i_4] [i_13] [i_13])));
            var_30 = (max(var_30, (arr_34 [i_4] [8] [10])));
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 22;i_14 += 1)
        {
            var_31 -= ((((-(arr_42 [i_4]))) & ((((arr_46 [0]) ? (arr_31 [i_4] [2]) : (arr_7 [i_4]))))));
            arr_47 [12] [i_14] |= (((arr_13 [i_4]) > ((-(arr_8 [i_4])))));
            var_32 = (max(var_32, 115));
        }
        for (int i_15 = 0; i_15 < 22;i_15 += 1)
        {

            /* vectorizable */
            for (int i_16 = 2; i_16 < 18;i_16 += 1)
            {
                var_33 += var_6;
                var_34 = (max(var_34, (((-(arr_40 [i_16 + 1]))))));
                var_35 = ((!((((arr_30 [i_4] [i_4] [i_15] [20]) ? (arr_52 [i_16]) : var_4)))));
            }
            var_36 *= (!((max(31974, 315958901))));
            var_37 = (max(var_37, ((((~var_1) << (((max((arr_22 [i_4] [i_4] [i_15] [i_4]), (max((arr_42 [i_15]), (arr_16 [i_15]))))) - 8806978002165303255)))))));
            var_38 = (max(var_38, ((((((((-(arr_43 [i_4] [i_4] [i_15])))) ? (((arr_8 [i_15]) ? (arr_49 [i_15] [i_15] [i_4]) : var_5)) : var_1))) ? (max((((-(arr_39 [i_4] [6] [i_15])))), (((arr_8 [i_4]) ? var_5 : var_4)))) : (~-104)))));
        }
    }
    for (int i_17 = 3; i_17 < 10;i_17 += 1)
    {

        for (int i_18 = 0; i_18 < 11;i_18 += 1)
        {
            arr_60 [i_17] [i_17] = (arr_0 [i_18]);
            arr_61 [i_17] = var_10;
            var_39 = (((((((arr_24 [i_17 - 3] [i_17] [18] [18] [i_18]) ? (arr_31 [i_17] [i_17]) : (arr_44 [i_17] [14] [i_17]))) < (((arr_5 [i_17] [i_17]) ? (arr_31 [i_17] [i_17]) : (arr_32 [i_17] [i_18]))))) ? (((~((~(arr_19 [i_17] [i_17 - 1] [i_18])))))) : ((+(((arr_34 [i_17 - 3] [i_17] [i_17]) ? (arr_43 [i_17] [i_17] [i_17]) : (arr_8 [i_18])))))));
            var_40 = (((((~(arr_7 [i_17])))) ? -var_9 : (~-var_6)));
        }
        /* vectorizable */
        for (int i_19 = 0; i_19 < 11;i_19 += 1)
        {
            var_41 = (max(var_41, (((-(arr_34 [i_17 - 3] [i_17 - 3] [8]))))));
            arr_64 [i_17] [i_17] = (((arr_36 [1] [1] [i_19]) > ((-(arr_48 [i_17] [i_19])))));
        }
        /* vectorizable */
        for (int i_20 = 0; i_20 < 11;i_20 += 1) /* same iter space */
        {
            var_42 *= (arr_56 [i_20]);
            arr_69 [i_17] = ((-((-(arr_36 [i_17] [i_17] [i_20])))));
        }
        for (int i_21 = 0; i_21 < 11;i_21 += 1) /* same iter space */
        {
            var_43 = ((((!((min((arr_1 [i_17]), (arr_31 [i_17 - 1] [i_17])))))) ? var_8 : ((((((~(arr_45 [i_17] [i_21] [i_17 - 3])))) ? (((arr_34 [i_17] [i_17] [i_17]) ? (arr_71 [i_17]) : var_0)) : (arr_25 [i_17] [i_21]))))));
            /* LoopNest 3 */
            for (int i_22 = 3; i_22 < 8;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 1;i_23 += 1)
                {
                    for (int i_24 = 1; i_24 < 9;i_24 += 1)
                    {
                        {
                            var_44 = (((((368136783 ? -7 : (arr_50 [i_17])))) ? (arr_13 [i_21]) : 98));
                            arr_81 [i_17] [i_21] [i_23] [i_23] [i_17] = ((~((17 ? (((((arr_25 [i_17] [i_17]) < (arr_12 [i_17 - 2]))))) : (arr_37 [i_17] [i_24 + 2])))));
                            var_45 *= ((-(((((((arr_21 [i_17] [i_21] [17] [i_23] [i_24]) ? (arr_23 [i_17] [i_21] [i_22] [i_23]) : (arr_44 [i_21] [i_22] [i_24])))) < (min((arr_42 [i_17]), (arr_13 [i_24]))))))));
                        }
                    }
                }
            }
        }
        arr_82 [i_17] = (min(((~((~(arr_56 [i_17]))))), (arr_23 [i_17 + 1] [i_17] [i_17] [i_17])));
    }
    for (int i_25 = 1; i_25 < 22;i_25 += 1)
    {
        arr_85 [i_25] = ((~(((((~(arr_7 [i_25])))) ? (~var_12) : (((arr_84 [i_25]) ? (arr_9 [i_25]) : (arr_83 [i_25])))))));
        var_46 -= (arr_9 [i_25 + 1]);
        var_47 = (max(var_47, ((((((1 ? 368136783 : 937036789))) ? (arr_83 [i_25 - 1]) : (((min((arr_83 [i_25 + 1]), (arr_83 [i_25 - 1]))))))))));
        var_48 *= ((((((~(arr_9 [i_25]))))) ? -var_4 : var_9));

        for (int i_26 = 0; i_26 < 1;i_26 += 1)
        {
            var_49 = (arr_84 [i_25]);
            arr_90 [i_26] = (arr_89 [i_26] [i_26] [i_25]);
        }
    }
    /* vectorizable */
    for (int i_27 = 0; i_27 < 20;i_27 += 1)
    {
        arr_93 [i_27] = (arr_92 [i_27]);
        var_50 = (max(var_50, ((((arr_20 [i_27] [i_27] [i_27] [i_27] [i_27]) ? (arr_20 [i_27] [i_27] [i_27] [i_27] [i_27]) : (arr_20 [i_27] [i_27] [i_27] [i_27] [i_27]))))));
    }
    /* LoopNest 2 */
    for (int i_28 = 2; i_28 < 10;i_28 += 1)
    {
        for (int i_29 = 0; i_29 < 13;i_29 += 1)
        {
            {
                var_51 -= (1 <= 4294967295);
                var_52 = (max(var_52, (((-((18906 ? 214 : 3)))))));
            }
        }
    }
    #pragma endscop
}
