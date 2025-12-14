/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] = min(((var_8 ? (arr_1 [i_0]) : (arr_0 [i_0]))), (arr_0 [i_1]));
                var_10 = (min(var_10, (((((((!(arr_1 [i_0]))))) > var_1)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_11 = (min(var_11, var_0));
                            var_12 = ((128 ? (max(var_0, (arr_7 [i_2] [i_1]))) : (((268435424 ? 128 : (-32767 - 1))))));
                            var_13 = (min(224, (min(((~(arr_9 [i_0] [i_1] [i_1] [13] [i_3] [i_3]))), 127))));
                        }
                    }
                }

                for (int i_4 = 3; i_4 < 13;i_4 += 1)
                {
                    var_14 = (max((((arr_0 [i_0]) >> (((((arr_2 [i_0] [i_0] [i_0]) ? (arr_1 [i_0]) : var_1)) - 215075717)))), ((+((((arr_2 [3] [3] [i_4]) == 0)))))));
                    var_15 = -var_1;
                    var_16 = (min(var_16, ((max((arr_9 [i_0] [i_0] [6] [i_4] [i_1] [3]), ((max((!var_2), 3296627155))))))));
                    var_17 = (arr_1 [i_1]);
                }
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    arr_16 [i_0] [i_1] [i_5] = ((((arr_12 [i_0] [i_1] [i_1] [i_5]) << (((arr_12 [i_0] [i_1] [i_5] [i_5]) - 1886550277)))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_18 = ((((((arr_8 [i_0]) == (max((arr_0 [i_5]), var_4)))))));
                                var_19 = (arr_9 [i_7] [i_7 - 1] [i_7] [i_7 - 1] [i_7] [i_7 + 1]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            {
                                var_20 = 129;
                                var_21 = (max((((!(arr_1 [i_0]))), ((-(arr_10 [i_9]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            {
                                var_22 = min(255, (((arr_3 [i_5]) ? 1631192610 : 6)));
                                var_23 = ((((((arr_13 [i_0] [i_10] [i_1] [i_0]) ? (arr_5 [i_0] [i_0] [i_0]) : (arr_5 [i_5] [i_1] [i_0])))) ? var_3 : ((180 ? (arr_1 [i_1]) : (arr_1 [i_0])))));
                                arr_31 [i_11] [i_11] [i_11] [i_11] [i_11] = ((((((((arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_9 : 75))) ? (((arr_12 [i_0] [i_1] [i_5] [i_11]) - 16352)) : (((((arr_3 [i_10]) >= var_8))))))) ? (arr_14 [i_1]) : ((((((((arr_25 [i_5] [i_10] [i_5] [i_10] [i_0]) ? (-127 - 1) : (arr_24 [i_0] [i_5] [i_5] [i_10] [2]))) + 2147483647)) >> (((((arr_22 [i_0] [i_1] [i_0] [12] [12] [i_11]) ? -1 : 255)) + 10))))));
                                var_24 = (((arr_8 [i_0]) || var_9));
                            }
                        }
                    }
                }
                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {

                    for (int i_13 = 0; i_13 < 15;i_13 += 1)
                    {
                        arr_37 [i_0] [i_0] [i_1] [i_12] [i_0] [i_13] = (+(((arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? 998340143 : 1284748454)));
                        arr_38 [i_0] [i_1] [i_12] [i_13] = ((+((((arr_14 [i_0]) <= (arr_14 [i_12]))))));
                        var_25 = var_6;
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        for (int i_15 = 3; i_15 < 14;i_15 += 1)
                        {
                            {
                                var_26 = (min(var_26, (((max((248 < var_6), (~var_4))) / (arr_36 [i_12] [i_12] [i_12])))));
                                arr_43 [i_0] [i_1] [i_14] [i_14] [i_15] [i_14] = ((+(((arr_22 [i_15 - 1] [i_15 - 2] [i_15] [i_15 - 3] [i_15] [i_15]) ? (arr_30 [i_15 - 1] [i_15 - 2] [i_15] [i_15] [i_15 - 1]) : (arr_22 [i_15 - 1] [i_15 - 2] [i_15 - 2] [i_15] [i_15 - 2] [i_15])))));
                                var_27 = (min((min(16352, 0)), (((arr_21 [i_0] [i_0] [i_0] [i_0]) ? var_3 : var_1))));
                            }
                        }
                    }
                }
                var_28 = (4294967281 ? (arr_12 [i_0] [i_0] [i_0] [i_0]) : (((arr_18 [i_0]) ? (arr_12 [i_0] [i_0] [i_0] [i_1]) : (arr_12 [i_1] [i_1] [i_1] [i_0]))));
            }
        }
    }
    var_29 = var_7;
    /* LoopNest 3 */
    for (int i_16 = 2; i_16 < 22;i_16 += 1)
    {
        for (int i_17 = 1; i_17 < 23;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 24;i_18 += 1)
            {
                {
                    var_30 = ((var_6 >> (((arr_45 [18]) - 404040800))));
                    var_31 = ((((4294967295 || ((max(0, 998340132))))) && ((((arr_47 [i_16]) & ((min((arr_44 [i_17] [i_17]), (arr_47 [i_16])))))))));
                    var_32 = (max(var_32, (((~(((var_6 != (((arr_46 [i_17] [i_18]) ? (arr_48 [i_17 + 1] [i_16]) : var_9))))))))));
                    var_33 = (((((arr_51 [i_17] [i_17] [i_17 + 1] [i_17 - 1]) >= (arr_44 [i_17] [i_17 - 1]))) ? -144 : (!5)));
                }
            }
        }
    }
    #pragma endscop
}
