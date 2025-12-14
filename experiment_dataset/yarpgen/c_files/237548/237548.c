/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = -48;
        var_15 = arr_1 [i_0] [i_0 + 2];

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = (arr_0 [i_0 - 1]);
            var_16 -= 5709;
            arr_7 [i_1] = 204;
        }
        var_17 = (((((var_13 ? (arr_5 [i_0] [i_0] [i_0]) : 58))) * var_6));
    }
    for (int i_2 = 4; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_18 = -74;
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_19 -= (max((!1), var_11));
                                var_20 = (min(var_20, (((((((arr_8 [i_2]) ? (max(432345564227567616, (arr_0 [i_4]))) : (arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))) ? (arr_0 [i_3]) : -6705)))));
                                var_21 = (min(var_21, (((~(arr_14 [i_2]))))));
                                var_22 *= ((var_12 < ((((var_5 ? var_0 : (arr_8 [i_2])))))));
                                var_23 = arr_12 [i_5];
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 17;i_8 += 1)
                        {
                            {
                                var_24 = var_10;
                                var_25 ^= (arr_24 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]);
                                var_26 = (max(var_26, (arr_9 [i_3 - 2])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 19;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 19;i_10 += 1)
                        {
                            {
                                var_27 = (arr_17 [i_2] [i_2] [i_4] [i_2] [i_4]);
                                arr_31 [i_2] [i_2] [i_4] [i_4] [i_2] [i_2] = var_10;
                                var_28 = (min(((min(((-(arr_16 [i_2] [i_2] [i_4] [i_4] [i_4] [i_4]))), var_5))), (min((arr_26 [i_2] [i_2] [i_4] [i_2]), (min((arr_8 [i_2]), var_8))))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_11 = 4; i_11 < 18;i_11 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 20;i_12 += 1)
        {
            for (int i_13 = 3; i_13 < 19;i_13 += 1)
            {
                for (int i_14 = 2; i_14 < 19;i_14 += 1)
                {
                    {
                        arr_42 [i_11] [i_11] [i_11] [i_11] = max(((-151 ? ((59826 ? (arr_5 [i_11] [i_11] [i_11]) : 205)) : (((arr_13 [i_11] [i_11] [i_11]) / var_12)))), (arr_22 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]));
                        var_29 ^= (arr_12 [i_11]);
                        var_30 -= (max((max(((var_11 ? var_12 : var_4)), (arr_30 [i_11] [i_11] [i_11 + 1] [i_14 - 2] [i_11]))), (((-(arr_13 [i_11] [i_11] [i_11]))))));
                        var_31 = max(12307623209732075636, (((255 ? ((max(var_9, 78))) : ((max(-14578, -1)))))));
                    }
                }
            }
        }

        for (int i_15 = 1; i_15 < 18;i_15 += 1)
        {
            var_32 = (min((min(((~(arr_24 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]))), (arr_23 [i_11] [i_11] [i_11] [i_11]))), 1915052895));

            for (int i_16 = 1; i_16 < 18;i_16 += 1)
            {

                for (int i_17 = 0; i_17 < 20;i_17 += 1)
                {
                    var_33 = (arr_13 [i_16] [i_16] [i_16]);
                    arr_50 [i_11] [i_11] [i_11] [i_11] [i_11] &= var_6;
                }
                for (int i_18 = 0; i_18 < 0;i_18 += 1)
                {
                    var_34 *= var_12;
                    var_35 = (max(var_35, ((((arr_10 [i_16]) ? 59817 : ((-((var_12 ? (arr_35 [i_11] [i_11]) : (arr_14 [i_11]))))))))));
                }
                for (int i_19 = 2; i_19 < 19;i_19 += 1)
                {
                    var_36 = ((max((arr_36 [i_16] [i_16] [i_16]), (arr_28 [i_11] [i_11] [i_11] [i_11] [i_11]))));

                    for (int i_20 = 3; i_20 < 16;i_20 += 1)
                    {
                        arr_59 [i_11] [i_16] [i_16] = var_6;
                        var_37 = (arr_35 [i_16] [i_16]);
                    }
                    var_38 = (max(16, 2816215746396744886));
                }
                for (int i_21 = 2; i_21 < 19;i_21 += 1)
                {
                    var_39 = (min(var_39, (((min((arr_44 [i_11 - 1]), (arr_44 [i_11 - 1])))))));
                    arr_62 [i_16] [i_16] [i_11] [i_16] [i_11] = ((~(max(10052073302001151205, 2816215746396744892))));
                    var_40 = 2816215746396744886;

                    /* vectorizable */
                    for (int i_22 = 0; i_22 < 20;i_22 += 1)
                    {
                        arr_66 [i_16] [i_16] = var_10;
                        var_41 = (arr_18 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]);
                    }
                }
                var_42 = (min((max((((arr_25 [i_16] [i_16] [i_16] [i_16] [i_16]) ? var_11 : var_13)), (arr_15 [i_11] [i_16] [i_11] [i_11]))), var_13));
            }
            arr_67 [i_11] [i_11] = ((((((min(13418, (arr_51 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]))))) | (max((arr_40 [i_11]), (arr_56 [i_11] [i_11] [i_11] [i_11] [i_11]))))));
            var_43 = ((((min((arr_61 [i_11] [i_11] [i_11] [i_15 - 1]), 1))) ? var_0 : (arr_61 [i_11] [i_11] [i_11] [i_15 - 1])));
            var_44 = (min(var_44, var_3));
        }
        /* vectorizable */
        for (int i_23 = 0; i_23 < 1;i_23 += 1)
        {
            /* LoopNest 2 */
            for (int i_24 = 3; i_24 < 17;i_24 += 1)
            {
                for (int i_25 = 1; i_25 < 18;i_25 += 1)
                {
                    {
                        var_45 = ((246 == (arr_71 [i_11 + 2] [i_23])));
                        var_46 = ((~(arr_68 [i_24 + 2] [i_23])));

                        for (int i_26 = 0; i_26 < 20;i_26 += 1)
                        {
                            arr_79 [i_11] [i_11] [i_11] [i_11] [i_23] = (~var_1);
                            var_47 ^= ((1 ? (arr_28 [i_11 + 2] [i_24 - 3] [i_24 - 3] [i_24 - 3] [i_24 - 3]) : 5700));
                            var_48 = ((var_10 ? (arr_24 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]) : (arr_24 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])));
                            arr_80 [i_23] = (arr_2 [i_24]);
                            var_49 &= ((-(((arr_77 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]) ? var_6 : (arr_23 [i_26] [i_26] [i_11] [i_26])))));
                        }
                    }
                }
            }
            var_50 = (((arr_49 [i_11] [i_11] [i_11 + 1] [i_11 + 1]) << (100 - 76)));
            arr_81 [i_23] = -1620;
        }
        arr_82 [i_11] = (((((arr_9 [i_11 - 4]) / 15630528327312806719)) % (arr_9 [i_11 - 3])));
    }
    #pragma endscop
}
