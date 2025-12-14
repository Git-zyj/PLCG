/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= ((~(!var_5)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_11 = (~var_1);
                var_12 = var_3;
                arr_6 [i_0] [i_0] [i_0] = (((arr_3 [i_1 - 3]) ? ((~(arr_3 [i_1 + 2]))) : (arr_3 [i_1 - 2])));
                arr_7 [i_0] = ((~((((min((arr_2 [i_1 + 1]), (arr_0 [i_0])))) ? (arr_3 [i_0]) : (((arr_2 [i_0]) ? var_0 : (arr_1 [i_0])))))));
            }
        }
    }
    var_13 = var_0;

    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = var_1;
        arr_11 [i_2] [i_2] = var_9;
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
    {
        var_14 += ((((((((-(arr_13 [5])))) ? (((arr_9 [i_3]) ? (arr_9 [i_3]) : var_6)) : var_7))) ? -127 : var_6));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                    {
                        var_15 = ((!(arr_14 [i_5])));

                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            var_16 = var_5;
                            var_17 = (max(var_17, ((+(((arr_16 [i_7] [i_3] [i_3]) ? var_4 : var_8))))));
                        }
                        for (int i_8 = 1; i_8 < 17;i_8 += 1)
                        {
                            var_18 = ((-(arr_13 [i_8 - 1])));
                            arr_28 [i_3] = ((27984 ? 212588665340539335 : 1));
                        }
                        arr_29 [i_3] [i_3] = var_2;
                        var_19 = (max(var_19, (arr_27 [i_3])));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
                    {
                        arr_34 [11] [15] [i_5] [i_3] [i_3] [7] = ((37536 ? var_1 : (arr_32 [2] [6] [i_5] [i_9])));
                        arr_35 [i_3] [i_5] [i_4] [7] [i_3] [i_3] = var_5;
                    }
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        var_20 = (max(var_20, (arr_23 [i_3] [i_3] [1] [i_5] [6] [6])));
                        arr_38 [11] [i_4] [i_4] [13] [i_3] [i_10] = (arr_12 [i_3] [i_3]);
                        arr_39 [i_3] [1] [i_3] [i_5] [i_10] = var_6;
                        arr_40 [i_3] [i_5] [i_3] = ((var_1 ? (arr_27 [i_3]) : ((((((var_7 ? var_8 : (arr_36 [i_5] [i_4] [i_5] [i_4] [i_10])))) ? var_1 : -var_4)))));
                    }

                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        arr_43 [i_3] [i_4] [i_3] [i_5] [i_11] = (~var_3);
                        var_21 = var_9;
                    }
                    /* vectorizable */
                    for (int i_12 = 2; i_12 < 17;i_12 += 1)
                    {
                        var_22 -= (arr_17 [i_4] [i_4] [i_12]);
                        arr_46 [i_3] = ((arr_33 [i_3] [i_3] [i_3] [i_3]) ? var_0 : (arr_33 [i_3] [i_5] [i_3] [i_3]));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 17;i_14 += 1)
            {
                {

                    for (int i_15 = 0; i_15 < 18;i_15 += 1)
                    {
                        arr_56 [i_3] [11] [i_14 + 1] [i_14] [i_3] [i_14] = ((!((!(arr_51 [i_14 + 1] [i_14 - 1] [i_14 + 1] [i_14 - 1])))));
                        var_23 = ((~(~18234155408369012262)));
                        arr_57 [i_3] [i_13] [i_13] [i_3] [i_3] [i_3] = (arr_37 [i_14] [i_3] [i_14] [i_13]);
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 18;i_16 += 1)
                    {
                        for (int i_17 = 1; i_17 < 1;i_17 += 1)
                        {
                            {
                                var_24 = (max(var_24, (((!(arr_49 [i_16] [i_16] [i_16]))))));
                                arr_62 [i_3] [i_13] [i_3] [i_16] [7] = ((((((arr_58 [i_3] [i_14 + 1] [i_3]) ? (!var_0) : ((-(arr_59 [i_3] [i_3] [i_3])))))) ? ((-(arr_23 [i_17] [i_17] [i_17] [i_17 - 1] [i_17] [i_17 - 1]))) : (arr_32 [i_13] [i_14 + 1] [i_17] [i_17 - 1])));
                                arr_63 [i_3] [i_13] [i_3] [i_16] [1] [i_3] = ((-(((!(arr_9 [i_14 - 1]))))));
                                var_25 ^= (~1);
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 18;i_18 += 1)
        {
            for (int i_19 = 3; i_19 < 16;i_19 += 1)
            {
                {
                    arr_71 [i_3] [2] [i_3] = ((~(((arr_61 [i_19 - 3] [i_19 + 1] [i_19 + 2] [i_3] [i_19 - 1]) ? (arr_61 [i_19 + 2] [i_19 + 1] [i_19 - 1] [i_3] [i_19 - 3]) : var_4))));
                    var_26 = ((-(((!(arr_55 [i_19] [i_19 + 1] [i_3]))))));
                    var_27 = (min(var_27, (((~(arr_68 [i_19] [i_18] [i_18] [i_3]))))));
                    var_28 = (min(var_28, ((((arr_68 [i_3] [i_3] [i_18] [i_3]) ? ((~((var_2 ? (arr_44 [i_19]) : (arr_30 [i_3] [6] [i_19] [i_19]))))) : var_9)))));
                    arr_72 [i_3] [i_18] [i_18] [i_19] = ((!(arr_67 [i_19 - 2])));
                }
            }
        }
    }
    for (int i_20 = 0; i_20 < 18;i_20 += 1) /* same iter space */
    {
        var_29 += (arr_73 [i_20] [6]);
        arr_77 [i_20] = -var_5;
        var_30 = ((~(arr_75 [i_20])));
    }
    /* vectorizable */
    for (int i_21 = 0; i_21 < 12;i_21 += 1)
    {
        arr_80 [i_21] = (~var_2);
        /* LoopNest 2 */
        for (int i_22 = 0; i_22 < 12;i_22 += 1)
        {
            for (int i_23 = 0; i_23 < 0;i_23 += 1)
            {
                {
                    arr_87 [i_21] [i_22] [i_23] = (!var_6);
                    arr_88 [i_21] [i_22] [i_23] = ((~(arr_85 [i_21] [i_21])));
                    arr_89 [10] [1] [i_23 + 1] = var_2;

                    for (int i_24 = 0; i_24 < 12;i_24 += 1) /* same iter space */
                    {
                        arr_92 [i_22] [0] = (((((18234155408369012280 ? -127 : 18234155408369012284))) ? (~var_1) : var_3));
                        var_31 -= (arr_1 [i_22]);
                        var_32 ^= var_8;
                        arr_93 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21] = var_8;
                    }
                    for (int i_25 = 0; i_25 < 12;i_25 += 1) /* same iter space */
                    {
                        arr_96 [i_21] [0] [2] [0] = (arr_69 [i_21] [17] [i_23 + 1]);
                        arr_97 [i_25] [3] [i_22] [i_21] = (arr_75 [i_23 + 1]);
                    }
                    for (int i_26 = 0; i_26 < 12;i_26 += 1) /* same iter space */
                    {
                        arr_100 [i_21] [i_22] [i_21] [i_26] = var_7;
                        arr_101 [i_23 + 1] [i_26] = var_0;
                        var_33 = ((-(arr_61 [i_23] [i_23 + 1] [i_23 + 1] [i_21] [i_23])));
                    }
                }
            }
        }
        arr_102 [i_21] &= (var_8 ? (arr_18 [i_21] [i_21] [i_21] [i_21]) : (~41));
    }

    for (int i_27 = 2; i_27 < 16;i_27 += 1)
    {
        var_34 = (min(var_34, ((((!var_6) ? ((~((var_3 ? (arr_103 [i_27]) : (arr_104 [i_27]))))) : var_4)))));

        for (int i_28 = 0; i_28 < 20;i_28 += 1)
        {
            /* LoopNest 2 */
            for (int i_29 = 0; i_29 < 20;i_29 += 1)
            {
                for (int i_30 = 0; i_30 < 0;i_30 += 1)
                {
                    {
                        arr_113 [14] [i_30] [i_29] [i_30] = (arr_105 [i_27]);

                        for (int i_31 = 0; i_31 < 20;i_31 += 1)
                        {
                            arr_116 [i_27] [i_30] [i_27] [i_31] [i_31] = (min((arr_106 [i_28]), (((((var_0 ? var_3 : var_1))) ? var_7 : ((((!(arr_106 [i_30])))))))));
                            arr_117 [i_27] [i_30] [i_30] [i_31] = (((min((arr_109 [i_30 + 1] [i_30 + 1] [i_30] [i_30]), (arr_109 [i_30 + 1] [i_30 + 1] [i_30] [i_30]))) ? (min((arr_109 [i_30 + 1] [i_30 + 1] [i_30] [i_30]), var_2)) : (((!(arr_109 [i_30 + 1] [i_30 + 1] [i_30] [i_30]))))));
                        }
                        /* vectorizable */
                        for (int i_32 = 0; i_32 < 20;i_32 += 1)
                        {
                            var_35 -= ((((((arr_104 [i_27 + 4]) ? var_6 : var_5))) ? (((!(arr_104 [12])))) : (~var_2)));
                            arr_122 [i_30] [i_30] = (!var_3);
                            var_36 = ((1918484384 ? 37552 : var_2));
                        }
                        var_37 = (((((-(arr_109 [i_27] [i_28] [i_29] [i_30 + 1])))) ? (arr_111 [i_27] [i_27] [i_27] [i_27 + 4] [i_27]) : (max(((~(arr_119 [i_27] [i_28] [i_29] [i_29] [i_30]))), (((arr_115 [i_27] [i_27] [i_28] [i_28] [i_29] [i_29]) ? var_1 : var_9))))));
                        arr_123 [i_27] [i_30] [i_30] [i_30] = var_3;
                    }
                }
            }
            arr_124 [i_27 + 3] [i_28] = var_3;
        }
    }
    #pragma endscop
}
