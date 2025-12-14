/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_10 = (max(var_10, ((((-1 + 2147483647) << (((((min((arr_0 [i_1 + 1]), var_7)) + 952361089)) - 15)))))));

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_11 -= (min((arr_11 [i_1 + 1] [i_0]), ((max((arr_11 [i_1 + 1] [i_1 + 1]), var_4)))));
                                arr_14 [i_0] [i_1] [i_1] [i_0] [i_0] [i_1] = (((((((arr_1 [i_0] [i_4]) ? (arr_6 [i_1] [i_3] [i_1 + 1] [i_1]) : (arr_11 [i_1 + 1] [i_2])))) ? (arr_2 [i_0] [i_0]) : 0)));
                                var_12 ^= (((min(532212665, 9223372036854775788)) == (((((var_8 + (arr_12 [i_0] [i_3] [i_3] [i_0])))) ? var_9 : (min((arr_4 [i_0]), (arr_10 [i_0] [i_3] [0] [i_0])))))));
                                arr_15 [i_0] [i_0] [i_1] [i_2] [i_1] [i_4] = var_4;
                            }
                        }
                    }
                    var_13 = (i_1 % 2 == zero) ? ((((arr_11 [i_1 + 1] [i_1 + 1]) >> ((((~(arr_6 [i_1 + 1] [i_1 + 1] [i_1] [i_1]))) + 38588))))) : ((((arr_11 [i_1 + 1] [i_1 + 1]) >> ((((((~(arr_6 [i_1 + 1] [i_1 + 1] [i_1] [i_1]))) + 38588)) - 16488)))));
                    var_14 -= (((min((arr_10 [i_1] [i_1 + 1] [i_1 + 1] [i_0]), (arr_10 [i_1] [i_1 + 1] [i_1] [i_0]))) <= var_9));
                }
                for (int i_5 = 4; i_5 < 9;i_5 += 1)
                {
                    var_15 = (min(var_15, (((var_1 + (((arr_6 [i_0] [i_5 - 1] [i_5 - 1] [i_0]) ? (((min((arr_6 [i_1] [i_1] [i_1] [i_0]), (arr_16 [i_0] [i_0] [i_0]))))) : (arr_13 [i_0] [i_1] [i_0] [i_1] [i_5] [i_5] [i_0]))))))));

                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        var_16 = ((((((arr_12 [i_0] [i_1] [i_5] [i_6]) - (arr_12 [i_0] [i_1] [i_1] [i_0])))) ? (arr_12 [i_0] [i_1] [8] [i_6]) : (min((arr_12 [4] [i_1] [9] [i_6]), (arr_12 [i_0] [i_1] [i_5 + 1] [i_6])))));
                        arr_21 [i_1] [i_1] [i_6] [i_1] = 1765016446;
                        arr_22 [1] [i_1] [6] [i_6] = -1765016455;
                    }
                    arr_23 [i_1] = (max(((min((arr_16 [i_0] [i_1] [i_0]), -1765016455))), 1765016446));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 6;i_8 += 1)
                        {
                            {
                                arr_28 [i_1] [i_8] [i_7] [i_1] [i_1] [i_1] = (max((arr_27 [i_0] [i_0] [4] [i_7] [i_8 + 3]), var_4));
                                arr_29 [i_1] [i_7] [i_1 + 1] [i_1 + 1] [i_0] [i_1] = (min(((((arr_5 [i_5 - 1] [i_1 + 1]) - (arr_11 [i_1 + 1] [i_1 + 1])))), ((((arr_25 [i_0] [i_1]) + (arr_11 [i_0] [i_7]))))));
                                arr_30 [i_8 + 3] [i_0] [i_1] [i_1] [i_0] [i_0] = (((min((arr_6 [i_5 - 1] [i_1] [i_5] [i_1]), (arr_18 [i_5 - 1] [i_5 - 1] [i_1]))) * (arr_18 [i_5 - 2] [i_5 - 2] [i_1])));
                                arr_31 [i_5] [i_1] = (arr_19 [i_1] [3] [3] [i_7] [i_7]);
                                var_17 = (((-1765016455 / 1765016447) ? (max((arr_16 [i_8 + 3] [i_1] [i_5 - 1]), -1765016430)) : (min((((-1765016447 + 2147483647) << (var_1 - 1147312836))), var_5))));
                            }
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        arr_34 [i_9] [i_9] = (((arr_32 [i_9]) > (-1765016446 || 1765016447)));
        var_18 ^= (((((-1765016447 & (arr_33 [1])))) ? (arr_33 [1]) : 1765016454));
        arr_35 [i_9] = (var_0 == var_7);
        var_19 = (-1765016446 + 1765016466);
    }
    for (int i_10 = 0; i_10 < 10;i_10 += 1)
    {
        arr_40 [i_10] [i_10] = (arr_7 [i_10] [i_10] [i_10]);
        arr_41 [i_10] = var_3;
        var_20 ^= (arr_1 [i_10] [i_10]);
    }
    var_21 = var_5;
    var_22 = (((var_1 & var_2) | var_6));
    #pragma endscop
}
