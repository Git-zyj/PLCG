/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_11 *= (max((arr_2 [10]), (~var_1)));
        arr_3 [i_0] = (((var_7 ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0]))));
        arr_4 [i_0] = (((arr_0 [i_0]) ? (min(var_4, (arr_0 [i_0]))) : (((48819 >> (114 - 99))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_12 |= ((arr_6 [i_1]) / var_5);
            arr_12 [14] [i_2] = ((var_8 / (arr_5 [i_1])));
        }
        for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
        {
            var_13 -= min((((var_6 + 9223372036854775807) >> (114 - 110))), 4685);
            var_14 = 2528561046;
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        {
                            arr_28 [i_5] = ((var_1 ? ((-(((arr_23 [i_1] [i_4] [i_5] [i_6]) ? 97 : -1542486302560265937)))) : var_4));
                            var_15 += var_10;
                        }
                    }
                }
                arr_29 [3] [i_4] [i_4] = (((65535 ? 9 : 23076)));
            }
            for (int i_8 = 1; i_8 < 15;i_8 += 1)
            {
                arr_33 [i_1] [i_4] [i_8 + 1] [i_8] = (arr_32 [i_8] [i_4] [i_8]);
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 0;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        {
                            arr_38 [i_1] [i_4] [i_1] [i_10] [i_8] [i_8] = (max((min(-114, (min(60, 4294967291)))), (max((arr_7 [i_1]), (min(2311664707, 125))))));
                            var_16 = (((1760180475 ? (min(var_7, 45484539) : (((max(-4686, -118))))))));
                            var_17 = (max(var_17, (arr_16 [i_1] [i_1])));
                            var_18 = 1;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    {
                        arr_44 [i_1] = (max((arr_15 [i_12]), (arr_16 [i_11] [i_1])));

                        for (int i_13 = 1; i_13 < 16;i_13 += 1)
                        {
                            var_19 &= ((~var_1) ? var_6 : -var_10);
                            var_20 = var_10;
                        }
                        for (int i_14 = 1; i_14 < 16;i_14 += 1)
                        {
                            var_21 = (~7);
                            arr_52 [i_1] [i_1] [i_11] [i_14] [i_14] [i_14] = var_7;
                        }
                        for (int i_15 = 0; i_15 < 17;i_15 += 1)
                        {
                            arr_56 [i_15] [i_12] [i_11] [i_4] [i_4] [i_4] [i_15] = ((-4684 < (max(var_6, ((max(var_10, 114)))))));
                            arr_57 [i_1] [i_1] [3] [i_15] [1] [i_1] = (max((min((arr_20 [i_1] [i_1] [i_1]), var_5)), (((arr_40 [i_4] [i_11] [i_12]) ? (arr_20 [i_1] [i_12] [i_15]) : var_0))));
                        }
                        var_22 = (min(var_22, ((((min((arr_5 [8]), 427658796)) / (((var_2 ? var_2 : 1))))))));
                    }
                }
            }
            arr_58 [i_1] [i_4] = ((var_2 ? (max((arr_7 [i_1]), (arr_30 [i_4] [i_4]))) : var_0));
        }
        arr_59 [i_1] [0] = (((((((arr_30 [14] [i_1]) ? var_2 : var_8)))) ? (min(var_5, (arr_10 [i_1] [i_1] [i_1]))) : (((427658819 * 2147483647) ? var_0 : (((arr_55 [i_1] [14] [i_1] [i_1] [i_1] [i_1]) ? var_7 : var_2))))));
        arr_60 [i_1] = var_10;
        arr_61 [i_1] = (var_9 ? (arr_53 [i_1]) : var_3);
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 17;i_16 += 1)
        {
            for (int i_17 = 2; i_17 < 13;i_17 += 1)
            {
                {
                    var_23 = (!var_9);

                    for (int i_18 = 0; i_18 < 17;i_18 += 1)
                    {
                        arr_69 [i_1] [i_16] [9] [i_18] [i_18] [i_17] = max(((var_2 ? var_7 : (arr_62 [i_17 + 2] [i_17 + 1] [i_17 - 2]))), (((arr_62 [i_17 + 2] [i_17 + 2] [i_17 - 1]) ? -4686 : 1)));
                        var_24 = (max(var_24, 26794));
                        arr_70 [i_17] [i_16] [i_17] [i_16] = (((((var_2 || ((max(var_8, var_8)))))) / -106));
                        arr_71 [i_1] [i_16] [i_17] [i_1] [i_17] [i_1] = (min(21742, var_4));
                    }
                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        arr_74 [i_16] [i_19] |= (((((+(((-2147483647 - 1) ? -4686 : (arr_19 [i_16] [i_1])))))) ? -1654216380 : -var_2));

                        for (int i_20 = 3; i_20 < 16;i_20 += 1)
                        {
                            var_25 = ((((min(1, 1858909972))) ? (arr_46 [i_20 + 1] [i_20] [i_20] [i_20 - 3] [i_20]) : (((-(arr_46 [i_1] [i_16] [i_17] [i_19] [i_20 - 2]))))));
                            arr_78 [i_1] [i_16] [i_17] [i_19] [i_17] = var_0;
                        }
                        for (int i_21 = 0; i_21 < 1;i_21 += 1)
                        {
                            var_26 = ((min(((18020 ? 2436057305 : 0), 26794))));
                            arr_81 [i_1] [i_16] [i_17] [i_17] = ((3447582503 ? 1 : 4294967274));
                        }
                        var_27 = (max(var_27, ((max((23 < 1046896160), 1)))));
                        arr_82 [i_1] [i_16] [i_17] [i_19] = (max(var_9, (((!(arr_20 [i_1] [i_1] [i_17 - 1]))))));
                        var_28 += 1;
                    }
                    arr_83 [i_17] [i_17] [i_16] = (max((((arr_22 [i_17 + 1] [i_17 + 2] [i_17 + 2] [i_17 - 2]) || (arr_36 [i_1] [i_16] [i_17] [15] [15]))), (!var_4)));
                    var_29 = (((((var_2 & ((var_8 ? var_4 : (arr_53 [i_17])))))) ? (--66) : ((min(65, 1)))));
                }
            }
        }
    }
    var_30 = var_0;
    var_31 = ((min((~var_2), var_4)));
    #pragma endscop
}
