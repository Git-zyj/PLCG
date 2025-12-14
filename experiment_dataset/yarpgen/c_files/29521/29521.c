/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [1] = ((+(((((((arr_1 [i_0]) != 5)))) % 3248040191902863881))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_11 = (min(var_11, ((+(((var_2 < ((((arr_1 [i_0]) == (arr_2 [i_0] [i_1])))))))))));
                        arr_10 [i_0] [i_1] [i_2] [5] [i_2] = ((((~(!4294967295)))) > ((3248040191902863863 >> (15210 - 15167))));
                    }
                }
            }
        }
    }
    for (int i_4 = 2; i_4 < 20;i_4 += 1)
    {

        /* vectorizable */
        for (int i_5 = 3; i_5 < 17;i_5 += 1)
        {
            var_12 = ((!(!1143414196)));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 19;i_7 += 1)
                {
                    {
                        var_13 = (min(var_13, (arr_13 [i_5])));
                        var_14 = (arr_13 [1]);
                    }
                }
            }

            for (int i_8 = 3; i_8 < 20;i_8 += 1)
            {

                for (int i_9 = 2; i_9 < 19;i_9 += 1)
                {

                    for (int i_10 = 3; i_10 < 17;i_10 += 1) /* same iter space */
                    {
                        var_15 = ((34528 > (arr_20 [i_4 + 1])));
                        arr_30 [i_4] [i_5] [i_10] = ((~(arr_25 [i_10 + 3] [i_8] [i_5] [i_5 + 4])));
                        var_16 = ((-(arr_14 [i_5 + 1] [i_4 + 1])));
                        arr_31 [i_9 - 2] [6] [i_10] = (~(arr_12 [i_10]));
                    }
                    for (int i_11 = 3; i_11 < 17;i_11 += 1) /* same iter space */
                    {
                        arr_34 [i_4] [i_9] [i_11] [i_9] [20] = (~33801);
                        var_17 = ((~(~-1)));
                        var_18 = ((-1342576883 ? ((-(arr_13 [i_9 + 2]))) : ((~(arr_32 [i_4] [i_5] [13] [i_5] [i_9] [i_11])))));
                    }
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        var_19 = 15210;
                        var_20 = (arr_21 [i_4] [i_9] [i_4]);
                        var_21 -= 34528;
                    }
                    var_22 &= (((arr_23 [11] [2]) ? -1 : (arr_28 [i_5] [1])));
                }
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    var_23 = ((!(arr_12 [4])));
                    arr_40 [17] [i_8] [18] [18] = ((+(((arr_12 [i_8]) % -18692))));
                    arr_41 [i_4] [i_4] [i_5] [1] [i_13] = (((arr_23 [13] [i_5 - 1]) % -var_10));
                }
                for (int i_14 = 2; i_14 < 20;i_14 += 1)
                {
                    arr_44 [11] [12] = ((2116771616 ? ((((arr_22 [2] [1] [i_4]) ? 2040 : -32))) : (arr_24 [i_4 - 2])));
                    var_24 = 21;
                }
                var_25 &= (arr_26 [i_5] [i_5 - 3] [i_8] [i_4] [i_5]);
                var_26 = (arr_35 [i_4 + 1] [i_5] [i_8] [i_8] [8] [i_5 + 3]);
            }
            for (int i_15 = 0; i_15 < 21;i_15 += 1)
            {
                var_27 = 3248040191902863856;
                var_28 = -553790257;
                var_29 = (max(var_29, -var_5));
                var_30 &= (arr_23 [11] [14]);
            }
            var_31 = ((((!(arr_19 [i_5 + 2] [i_4]))) ? (arr_37 [0] [20] [20]) : -18681));
        }
        /* vectorizable */
        for (int i_16 = 3; i_16 < 20;i_16 += 1)
        {
            var_32 += -57169;
            var_33 = (~(arr_13 [i_4]));

            for (int i_17 = 0; i_17 < 21;i_17 += 1)
            {

                for (int i_18 = 0; i_18 < 21;i_18 += 1) /* same iter space */
                {
                    var_34 = (max(var_34, (((-(arr_49 [i_16] [2] [20]))))));
                    var_35 = var_10;
                }
                for (int i_19 = 0; i_19 < 21;i_19 += 1) /* same iter space */
                {
                    arr_61 [i_4 - 2] [i_4 - 2] [10] [i_17] [i_19] = (((((!(arr_45 [i_4] [i_16] [i_17] [i_19])))) > var_5));

                    for (int i_20 = 1; i_20 < 19;i_20 += 1)
                    {
                        arr_66 [14] = 0;
                        var_36 = ((-((~(arr_32 [i_4] [10] [i_17] [i_17] [5] [i_20 + 2])))));
                        var_37 = (max(var_37, (~var_9)));
                    }
                    for (int i_21 = 0; i_21 < 21;i_21 += 1)
                    {
                        var_38 = ((-(!144115188075593728)));
                        var_39 = (arr_50 [17] [i_4] [8] [i_4]);
                        var_40 = ((var_8 << (var_2 - 45231)));
                        arr_69 [i_16] = 7;
                    }
                    var_41 = (arr_22 [i_16 + 1] [i_16] [i_16 - 1]);
                    arr_70 [1] [i_17] [i_16] [i_4] = (arr_59 [i_4] [18] [i_17] [10]);
                    var_42 -= (~var_4);
                }
                var_43 = -2116771602;
                arr_71 [i_4] [i_4] [i_16] [i_17] = (arr_39 [i_17] [i_16 - 1] [i_4 - 1] [i_4 - 2]);
            }
            /* LoopNest 2 */
            for (int i_22 = 1; i_22 < 1;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 21;i_23 += 1)
                {
                    {
                        var_44 = (max(var_44, ((((!148) || var_4)))));

                        for (int i_24 = 0; i_24 < 21;i_24 += 1) /* same iter space */
                        {
                            arr_80 [1] [12] [i_4] [i_24] [i_4] |= var_1;
                            var_45 = (arr_23 [i_24] [i_16]);
                        }
                        for (int i_25 = 0; i_25 < 21;i_25 += 1) /* same iter space */
                        {
                            var_46 = (max(var_46, (((!(~var_4))))));
                            var_47 = ((-4095 ? (arr_15 [i_4 + 1]) : 1813505109));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_26 = 0; i_26 < 21;i_26 += 1)
            {
                for (int i_27 = 0; i_27 < 21;i_27 += 1)
                {
                    for (int i_28 = 0; i_28 < 21;i_28 += 1)
                    {
                        {
                            var_48 = (((115 || (arr_75 [i_16] [i_16] [i_26]))));
                            arr_94 [14] [i_26] [i_26] [i_26] [2] [11] [19] = 511;
                            arr_95 [i_4] [i_16] [14] [i_27] = (arr_53 [i_4 - 1]);
                        }
                    }
                }
            }
        }
        var_49 = var_3;
    }
    /* vectorizable */
    for (int i_29 = 0; i_29 < 14;i_29 += 1)
    {
        arr_98 [i_29] = (((63 ? -1143414173 : 3547660209)));
        var_50 = (!72057594037927928);
    }
    var_51 = 224;
    var_52 = (max((((var_7 > (!var_3)))), var_0));
    var_53 -= ((var_9 % ((min(((min(16174, 65535))), (62 + var_6))))));
    #pragma endscop
}
