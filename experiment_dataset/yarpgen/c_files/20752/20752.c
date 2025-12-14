/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;
    var_19 = (max(var_19, var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
                {
                    var_20 ^= (arr_5 [i_1 + 1] [i_1 + 1]);
                    var_21 += var_4;
                    var_22 = (min(((((1 >> (165 - 140))))), var_6));
                }
                for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
                {
                    var_23 = ((var_0 > (((((var_8 / (arr_3 [i_1] [6])))) | (arr_2 [i_3])))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_24 = ((-((7 ? var_15 : 1943271780))));
                                var_25 = max(0, ((~(max(15, var_10)))));
                                var_26 = (((max((arr_13 [i_0] [8] [0] [i_4] [i_1]), (((arr_1 [i_3]) | var_6))))) < ((((((((((-9223372036854775807 - 1) + 9223372036854775807)) + 9223372036854775807)) << 0))) ? 13835058055282163712 : (((var_9 ? (arr_4 [i_5] [i_3]) : -295367686))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_27 = (((((1 > (arr_3 [i_1 - 1] [i_6 - 1])))) >> ((((~(arr_3 [i_1 - 1] [i_6 - 1]))) - 2853517926))));
                                var_28 = 45337610668378813;
                                var_29 = (min((((arr_8 [i_1] [i_1 + 1] [2]) + (295367686 - 7))), ((min((arr_17 [0] [12] [i_1] [12] [i_0] [i_6 - 1] [i_1 - 1]), 15511)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 4; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            {
                                var_30 = (min(((-(arr_9 [i_1 + 1] [i_8 + 2]))), ((((arr_9 [i_1 + 1] [i_8 - 4]) < (arr_9 [i_1 + 2] [i_8 + 2]))))));
                                var_31 = ((((((min((arr_2 [i_9]), 255)) == (~var_14)))) / ((1 ? (arr_5 [i_8 - 4] [i_8 - 3]) : (arr_5 [i_8 - 2] [i_8 + 2])))));
                                var_32 = ((((((arr_7 [i_1 - 1] [i_1 - 1]) * (arr_7 [i_1 - 1] [i_1 - 1])))) ? -var_8 : -112));
                            }
                        }
                    }
                    var_33 = ((+(max(((min((arr_28 [i_0] [i_0] [i_0] [i_0] [i_1]), -1))), (arr_7 [i_1 - 1] [i_1 - 1])))));
                }
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {

                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        var_34 ^= (arr_19 [i_0] [i_0] [i_0] [6] [4]);
                        var_35 = (((((((arr_32 [i_11] [2] [0] [i_1 + 1] [i_0] [3]) > (arr_1 [i_0]))))) / (arr_27 [i_1] [i_11])));
                    }
                    for (int i_12 = 1; i_12 < 12;i_12 += 1)
                    {
                        var_36 = (arr_27 [i_1] [i_1]);
                        var_37 = (((arr_22 [10] [10] [i_1 - 1] [i_1 + 2] [i_1 - 1] [i_1]) > (((!(arr_10 [i_12 - 1] [i_1] [i_12] [i_12 + 1]))))));
                    }

                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 13;i_13 += 1)
                    {
                        var_38 = ((-2 ? (((35553 + (arr_9 [i_0] [i_1])))) : (-849465774 - 4194296)));
                        var_39 &= arr_19 [i_0] [i_0] [12] [i_0] [i_13];
                        var_40 = (arr_28 [i_13] [i_1] [i_13] [i_13] [i_1]);
                    }
                    var_41 = ((-121 ? ((511 * (((arr_5 [i_0] [i_0]) ? 1 : var_3)))) : ((((arr_29 [i_1 + 1] [i_1 + 1] [i_1]) / 15511)))));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 13;i_14 += 1)
                    {
                        for (int i_15 = 2; i_15 < 12;i_15 += 1)
                        {
                            {
                                var_42 += (arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                                var_43 = (max(-97, 7646170564936563579));
                            }
                        }
                    }
                    var_44 = (-2147483647 - 1);
                }
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 13;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        {
                            var_45 = ((((((arr_22 [i_1 - 1] [i_17] [i_17] [i_1 - 1] [i_1 - 1] [i_1]) ? (arr_16 [i_1] [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1]) : (max(var_17, 1515181069))))) != ((~(arr_6 [i_1] [i_1 + 1] [i_1])))));
                            var_46 = ((max(var_0, (arr_1 [i_1 - 1]))));
                            var_47 = (max(var_47, (((((max(var_13, ((1 ? var_17 : var_8))))) ? (((var_4 ? 15360 : (arr_11 [i_1 + 1] [i_1 - 1] [i_1 + 2] [i_16] [i_17])))) : (max(4294967293, (arr_15 [i_1] [i_16] [i_1] [i_1 + 1] [i_1] [i_16] [i_1]))))))));
                        }
                    }
                }
                var_48 = ((0 ? 254 : 274877906943));
            }
        }
    }
    var_49 = ((((((var_14 >= var_6) == var_13))) >= (max((!var_16), ((242 >> (3497825340 - 3497825316)))))));
    var_50 = (((max((max(var_16, var_1)), (var_6 > 8806))) > (((((var_14 ? 8806 : var_3))) ? ((1 ? 3 : var_7)) : var_14))));
    #pragma endscop
}
