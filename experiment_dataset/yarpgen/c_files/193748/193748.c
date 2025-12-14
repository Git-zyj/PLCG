/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_17 = (min((~var_6), (((((1 ? (arr_0 [i_0]) : var_5))) ? 1592191782 : (var_5 || var_14)))));
                    var_18 = 355782667374879668;
                }
                for (int i_3 = 3; i_3 < 22;i_3 += 1)
                {
                    var_19 = ((var_4 ? (arr_8 [i_0] [i_0]) : (((-((~(arr_11 [i_1] [i_1] [i_1] [i_1]))))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 24;i_5 += 1)
                        {
                            {
                                var_20 = -var_14;
                                var_21 = ((-362892051 ? (arr_15 [i_0] [24] [i_3] [i_1] [0]) : var_13));
                            }
                        }
                    }
                    var_22 = (min(var_22, var_14));
                    var_23 = (arr_12 [i_3] [i_1] [i_1] [i_1] [12] [14]);
                }
                var_24 = 3254307759;
                var_25 = (min((min(((min(98, (arr_15 [i_0] [i_0] [18] [18] [18])))), 151)), var_16));
            }
        }
    }

    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        var_26 = (arr_0 [i_6]);
        var_27 = ((((-(arr_4 [i_6] [i_6] [i_6])))) ? (arr_4 [i_6] [i_6] [i_6]) : (arr_4 [i_6] [i_6] [i_6]));
        var_28 = var_16;
        var_29 = ((~(max((arr_18 [i_6]), (arr_9 [i_6] [i_6] [14])))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    var_30 = ((((min(var_6, 98))) <= var_4));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 0;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 18;i_10 += 1)
                        {
                            {
                                var_31 = (max((((var_8 ? -29496 : ((75 ? var_1 : (arr_28 [i_6] [i_8] [i_6])))))), ((((arr_27 [i_8] [i_8] [i_7] [i_8]) >= 0)))));
                                var_32 |= ((-((((arr_7 [i_7] [i_7] [i_7] [i_9 + 1]) || (((var_1 ? 5929478126575431791 : (arr_25 [i_6] [i_6] [i_6] [i_6])))))))));
                                var_33 = max(((((((1073709056 ? var_7 : -4058162852620554265))) ? (arr_22 [i_10 + 2] [i_10 + 2]) : -4058162852620554265))), (((((3221258239 ? 1 : var_4))) & 7475471460373616778)));
                                var_34 = (min(var_34, (((!(arr_26 [i_9 + 1] [i_9] [i_9] [i_9] [i_9 + 1]))))));
                            }
                        }
                    }
                    var_35 = ((((!(var_1 & var_0))) ? ((((min(0, var_14))) ? 6943930226263047100 : (arr_25 [i_6] [i_6] [i_6] [i_6]))) : var_16));
                    var_36 = var_13;
                    var_37 = (arr_0 [i_6]);
                }
            }
        }
    }
    for (int i_11 = 1; i_11 < 12;i_11 += 1)
    {
        var_38 = (max(var_38, var_12));
        /* LoopNest 2 */
        for (int i_12 = 3; i_12 < 10;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 13;i_13 += 1)
            {
                {
                    var_39 = (min(var_39, ((((arr_14 [9] [i_11 - 1] [i_12] [i_12 - 3]) ? (min((arr_20 [i_11] [i_11] [i_11]), var_4)) : (-1078540296 >= 151))))));
                    var_40 = 4294967295;
                }
            }
        }
    }
    for (int i_14 = 3; i_14 < 10;i_14 += 1)
    {
        var_41 = (((~1034157379) << (((((~var_10) ? (max(2822329074, 855)) : (min(var_14, var_6)))) - 2822329049))));
        var_42 = ((1073709070 ? 15030 : (((max(1073709056, (arr_12 [i_14] [i_14] [i_14] [i_14] [i_14 - 2] [i_14])))))));
    }
    for (int i_15 = 1; i_15 < 8;i_15 += 1)
    {
        var_43 *= (((max((arr_10 [4]), (arr_10 [24])))) & ((((~3221258230) || ((((arr_0 [i_15 + 2]) ? var_7 : 6943930226263047106)))))));
        /* LoopNest 2 */
        for (int i_16 = 4; i_16 < 7;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 10;i_17 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 10;i_18 += 1)
                    {
                        for (int i_19 = 2; i_19 < 9;i_19 += 1)
                        {
                            {
                                var_44 = ((!((((arr_10 [i_16]) ? (arr_9 [i_16] [i_16 - 3] [i_19 - 2]) : (arr_10 [i_16]))))));
                                var_45 = 5;
                            }
                        }
                    }
                    var_46 = 7;
                    var_47 = (((((261120 ? 432908216 : 9008))) ? 3299042167 : 25283));
                }
            }
        }
    }
    #pragma endscop
}
