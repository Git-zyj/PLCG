/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= ((!((!((min(8171852809959117534, 9223372036854775807)))))));
    var_14 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_15 = min((max(5117228957011885606, var_7)), (arr_4 [i_0] [i_1 + 1] [i_2]));

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_16 = ((+(((var_0 && (((arr_2 [i_0]) >= var_11)))))));
                        var_17 = (min(var_17, ((((arr_8 [i_3] [8] [i_0]) || ((min((max(-7544116844178571325, (arr_2 [4]))), var_12))))))));
                        var_18 = (arr_3 [i_0] [i_0] [i_0]);
                    }
                }
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    var_19 = (((245 | (~var_0))));
                    arr_12 [i_0] [i_4] [i_4] [i_0] = ((+(max(((max((arr_2 [i_0]), (arr_0 [i_1])))), ((~(arr_6 [i_0] [i_4])))))));
                }
                for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                {
                    var_20 = var_10;

                    for (int i_6 = 2; i_6 < 14;i_6 += 1)
                    {
                        var_21 = (9759132566127906560 && 9759132566127906560);
                        var_22 = (arr_10 [i_6] [i_5] [i_5] [i_0]);

                        /* vectorizable */
                        for (int i_7 = 3; i_7 < 14;i_7 += 1)
                        {
                            arr_22 [i_0] [i_1] [i_0] [i_6] [i_7] = (~var_5);
                            arr_23 [i_7] [i_6] [i_0] [i_1 - 2] [i_0] [i_0] = (arr_17 [i_7]);
                            arr_24 [i_0] [i_1] [14] [i_6 + 1] [i_7] = var_3;
                            var_23 = (!var_6);
                            var_24 = ((arr_16 [i_5]) || (((~(arr_0 [14])))));
                        }

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            var_25 = (arr_9 [i_0] [i_0] [i_0] [i_0]);
                            arr_27 [i_0] [i_1] [i_5] [i_6] [i_8] [i_8] = arr_17 [i_5];
                            arr_28 [i_0] [i_1] [13] [4] [i_5] = arr_3 [8] [i_5] [i_8];
                            var_26 -= (~var_11);
                        }
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            var_27 = (arr_20 [i_0] [14] [i_1] [i_5] [i_6] [i_9] [i_9]);
                            var_28 += min((~13329515116697666010), (((~(arr_6 [i_0] [13])))));
                        }
                        for (int i_10 = 2; i_10 < 12;i_10 += 1)
                        {
                            var_29 |= ((((((arr_26 [14] [i_0] [i_1 - 2] [i_5] [i_1 - 2] [i_10]) / (((((arr_11 [i_1] [i_1] [i_10]) && var_1))))))) == var_5));
                            arr_33 [i_0] [i_0] [3] [i_0] [i_0] [i_0] = (min((max(5117228957011885626, (!var_8))), var_5));
                            var_30 = var_12;
                            var_31 = var_12;
                        }
                        var_32 = var_0;
                    }
                }
                for (int i_11 = 0; i_11 < 16;i_11 += 1) /* same iter space */
                {

                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        var_33 = var_8;

                        for (int i_13 = 3; i_13 < 12;i_13 += 1)
                        {
                            var_34 = ((((max(8687611507581645056, 167)))));
                            var_35 = var_7;
                            var_36 = (max(var_36, (((~(((arr_18 [i_0] [i_0] [i_1] [i_11] [i_0] [i_12] [i_12]) - (arr_25 [i_0] [i_0]))))))));
                            arr_42 [i_0] [i_13] = (((arr_10 [i_0] [i_13] [i_11] [i_12]) / (min((arr_16 [i_13]), var_7))));
                        }
                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 16;i_14 += 1)
                        {
                            var_37 = (min(var_37, var_5));
                            var_38 *= 0;
                            var_39 = (max(var_39, (arr_34 [i_0] [i_1] [i_0] [i_14])));
                            arr_46 [i_0] [i_11] [i_11] |= (~var_9);
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 16;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 16;i_16 += 1)
                        {
                            {
                                arr_52 [2] [i_15] [i_16] = (~var_0);
                                var_40 = (max((min(var_5, 10545536735368226289)), var_3));
                            }
                        }
                    }
                }
                var_41 = (arr_1 [i_1]);
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 16;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 16;i_18 += 1)
                    {
                        {
                            var_42 = (max((max(var_11, (arr_30 [i_17] [i_18]))), (~var_9)));
                            var_43 = (arr_57 [i_0] [i_1 - 2] [i_17] [i_18]);
                            var_44 = ((+(((min((arr_1 [i_17]), (arr_45 [i_0] [i_0] [i_17])))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_19 = 0; i_19 < 14;i_19 += 1)
    {
        for (int i_20 = 0; i_20 < 14;i_20 += 1)
        {
            {
                var_45 -= (((var_11 | var_6) >> (((arr_13 [i_19] [i_20]) - 5769218304428434016))));
                var_46 = (arr_40 [i_19] [i_19] [i_19] [11] [i_20] [i_19]);
                var_47 -= var_6;
                var_48 -= (max(((~(arr_53 [i_20]))), (max((arr_44 [i_19] [i_19] [i_19] [i_20] [i_20] [i_20] [i_20]), var_9))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_21 = 0; i_21 < 17;i_21 += 1)
    {
        for (int i_22 = 0; i_22 < 17;i_22 += 1)
        {
            {
                arr_69 [i_21] [i_21] = var_6;

                for (int i_23 = 0; i_23 < 17;i_23 += 1)
                {
                    arr_73 [i_23] = var_5;
                    /* LoopNest 2 */
                    for (int i_24 = 2; i_24 < 16;i_24 += 1)
                    {
                        for (int i_25 = 0; i_25 < 17;i_25 += 1)
                        {
                            {
                                var_49 = (arr_67 [i_23] [i_23] [i_23]);
                                var_50 = ((+((+(((arr_64 [i_21] [i_22]) / var_3))))));
                            }
                        }
                    }
                    var_51 = (max(var_51, ((min(52972, 5117228957011885606)))));
                    arr_78 [i_21] [i_22] [i_22] [i_23] = (arr_75 [i_23]);

                    /* vectorizable */
                    for (int i_26 = 0; i_26 < 17;i_26 += 1)
                    {
                        arr_81 [i_21] [5] [i_23] [i_21] = (10346 ^ var_4);
                        var_52 = (~183);
                        var_53 = (!var_11);
                        var_54 = (min(var_54, (arr_65 [i_21])));
                    }
                }
                for (int i_27 = 0; i_27 < 17;i_27 += 1)
                {
                    arr_84 [i_21] [i_22] [i_22] = var_11;
                    arr_85 [i_21] [i_21] [i_21] = var_0;
                }
            }
        }
    }
    #pragma endscop
}
