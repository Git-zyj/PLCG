/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((~142) / ((17060406661890184850 ? var_7 : var_7)))) + var_7));
    var_12 = (min(var_12, ((((((8987926425760400528 == 2017353383) ? 255 : ((-30218 ? var_1 : 138)))) == ((-var_8 ? var_1 : (var_9 & var_2))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] [i_1] [15] = ((-(((arr_7 [i_1] [i_1] [i_2]) & ((0 / (arr_5 [i_0])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] = ((((min((arr_5 [i_0]), (arr_4 [i_0] [i_3] [i_0])))) && var_10));
                                arr_17 [i_0] = (arr_5 [i_0]);
                                var_13 &= (arr_12 [4] [18] [i_2] [i_3] [18]);
                            }
                        }
                    }
                    var_14 = ((!((((var_1 | var_3) ? ((var_6 >> (var_1 - 139))) : (arr_6 [i_0] [i_0] [i_2]))))));
                    arr_18 [i_0] [i_1] [i_2] = (arr_13 [i_0] [i_1] [i_2] [i_2]);
                }
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    var_15 = (((min((~var_4), var_6)) == (((var_3 ? (~1347527009) : (arr_21 [i_0]))))));
                    var_16 = (min(var_16, ((((arr_20 [i_5] [i_0]) ? ((((arr_21 [i_5]) ? (arr_0 [i_1]) : var_3))) : ((((arr_20 [10] [i_5]) ? (arr_20 [i_1] [i_5]) : (arr_20 [14] [i_5])))))))));

                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        var_17 += (((-5251803740128804729 + 9223372036854775807) >> var_6));
                        arr_25 [i_0] [i_0] = ((!(((-((1 ? 2947440287 : (arr_8 [i_0] [i_0] [i_0]))))))));
                        var_18 = (min(var_18, ((((max(-30218, 2277964310)) >> 31)))));
                    }
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        var_19 = (min(var_19, var_7));
                        var_20 = ((min((((-1 != (arr_21 [i_0])))), (((arr_27 [i_0] [i_1] [i_0] [i_1] [i_1]) ? var_2 : var_3)))));
                    }
                }
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    var_21 = min(2277613913, (((arr_24 [i_0] [i_8] [i_8] [i_0] [i_8]) ? (((arr_20 [i_1] [i_0]) ? (arr_22 [i_0] [i_1] [i_0] [i_1]) : var_8)) : (arr_0 [i_0]))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            {
                                var_22 ^= (-(arr_20 [i_1] [9]));
                                var_23 = (arr_27 [i_0] [i_9] [i_8] [i_1] [i_0]);
                                var_24 = (min(var_24, (((((arr_11 [i_10] [i_9] [i_8] [i_0]) ? (arr_11 [i_1] [i_8] [i_9] [i_10]) : 1347527009))))));
                                var_25 *= 16147001798493978744;
                                var_26 = (((arr_34 [i_0] [i_0] [i_1] [i_8] [i_9] [i_10] [i_10]) > (((~(arr_22 [i_10] [i_9] [i_9] [i_9]))))));
                            }
                        }
                    }
                }

                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    var_27 = ((~((var_8 ? (((312918094 < (arr_20 [i_11] [i_1])))) : (arr_4 [i_0] [i_1] [i_11])))));

                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        arr_40 [i_0] [i_0] = (((arr_36 [i_11] [i_1]) ? 16147001798493978744 : (((((arr_30 [i_0] [i_1] [i_11] [i_12]) ? var_8 : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                        var_28 = min(((min((((arr_3 [i_0]) ? 0 : var_6)), var_4))), ((-((4304674790759393660 ? var_10 : var_0)))));
                    }
                    arr_41 [i_0] = var_6;
                    var_29 = (!var_4);
                }
                arr_42 [i_0] = (((((((((0 ? var_3 : var_0))) < ((4811560331131152606 ? 7511663579065780593 : -1)))))) >= ((8782 ? 397764720581198909 : 236))));
            }
        }
    }
    #pragma endscop
}
