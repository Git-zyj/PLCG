/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= ((((min(var_8, var_14))) ? var_0 : (min((~var_0), (var_6 | var_9)))));
    var_18 = -1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_19 = (-8192 || 9223372036854775807);
                                var_20 = ((min((arr_7 [i_4 - 1] [i_1] [i_1 + 1] [i_2 - 4]), (arr_7 [i_4 + 1] [i_1 - 1] [i_1 - 1] [i_2 - 3]))));
                                var_21 = (min(((((-8174 <= (arr_0 [i_0]))))), (((var_7 & 8195) ? ((12022284801279828248 ? (arr_11 [i_0] [10] [i_2 - 3] [i_2 + 1] [10] [i_4] [i_4]) : (arr_0 [i_4 + 1]))) : ((max(-8169, (arr_2 [i_3]))))))));
                                var_22 = (((arr_1 [i_1 + 1] [i_2 - 1]) ? ((-8165 ? (arr_1 [i_1 - 1] [i_2 - 4]) : var_7)) : ((var_5 ? (arr_1 [i_1 + 1] [i_2 - 1]) : (arr_1 [i_1 + 1] [i_2 - 4])))));
                            }
                        }
                    }
                    var_23 = ((arr_9 [i_1] [i_2] [i_1 - 1] [i_1]) <= (~8192));
                    var_24 = (arr_9 [4] [i_2] [i_1] [i_2]);
                }
            }
        }
    }
    var_25 = var_10;
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 20;i_7 += 1)
            {
                {

                    for (int i_8 = 1; i_8 < 18;i_8 += 1)
                    {
                        var_26 = (max((((arr_22 [i_7 - 3] [i_7] [i_7 - 1] [i_7 - 3]) ? (arr_22 [i_7 - 3] [i_7] [i_7 - 1] [i_7 - 3]) : var_15)), (((arr_22 [i_7 - 3] [i_7] [i_7 - 1] [i_7 - 3]) ? 1250257215225283724 : -671752162))));

                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            var_27 ^= (max(1, 8165));
                            var_28 = (max(2048, ((((arr_22 [i_7 - 3] [i_7] [i_8 + 1] [16]) ? var_9 : (((arr_18 [i_5] [i_6] [i_8 + 2]) ? (arr_12 [12]) : var_15)))))));
                            var_29 = ((1536 != (arr_13 [i_9])));
                        }
                        /* vectorizable */
                        for (int i_10 = 1; i_10 < 20;i_10 += 1)
                        {
                            var_30 = ((!(arr_29 [i_10] [18] [i_10 - 1] [i_7] [1] [i_5] [13])));
                            var_31 = (max(var_31, (arr_27 [i_5] [i_5] [1] [i_10 + 1] [i_10])));
                            var_32 = ((~(arr_18 [i_8 + 3] [i_7 + 1] [i_10 - 1])));
                        }
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            var_33 = (max((max(var_15, -8198)), (var_14 <= 1765646485)));
                            var_34 = (~-8205);
                            var_35 = ((-(((((214544595 ? 4095 : 16214))) * (min(262142, 13663295536419110306))))));
                        }
                    }
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        var_36 = ((-65 >= (arr_32 [15] [15] [i_12])));
                        var_37 = -78;
                    }

                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        var_38 = 13372;
                        var_39 = (max(var_39, (((-1629248977 * (240 <= var_12))))));
                    }
                    var_40 = ((((((arr_35 [i_7] [6] [i_6] [i_6] [i_7]) ? (arr_27 [i_7 - 3] [1] [i_5] [4] [i_5]) : (arr_27 [i_7 - 2] [i_6] [13] [20] [i_7])))) && (((arr_29 [i_5] [i_7 + 1] [18] [i_5] [i_7 - 3] [6] [i_6]) < -1))));
                    var_41 ^= (((((arr_12 [i_7 - 1]) - (arr_22 [i_7] [i_5] [i_7 - 2] [i_6]))) <= (8165 | 0)));
                }
            }
        }
    }
    #pragma endscop
}
