/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= (((((var_11 || ((min(var_2, var_13)))))) >> (min(((var_8 ? var_14 : var_13)), var_4))));
    var_19 = (var_5 & var_1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
                    {
                        var_20 = (((~((var_4 % (arr_11 [i_3] [21] [i_1] [10]))))));
                        var_21 -= (((min(37942, ((min(4, 1)))))) ? (arr_11 [i_0] [i_0] [i_0] [1]) : (min(((var_16 ? (arr_7 [i_3] [i_3] [i_3]) : var_6)), (0 & -27875))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                    {
                        var_22 = ((+((((arr_12 [i_0] [i_0] [i_0] [13] [i_0] [i_0]) != (arr_11 [i_1] [i_1] [i_1] [i_4]))))));
                        var_23 = (min(var_23, (((var_11 ? (arr_0 [i_4] [i_1]) : ((1 - (arr_2 [i_1]))))))));
                        var_24 = (arr_4 [i_2] [i_2]);
                        var_25 = (min(var_25, (!var_2)));
                        var_26 = (((((arr_10 [i_0] [i_1] [i_2] [i_2]) + 9223372036854775807)) >> (((arr_9 [i_0] [i_1] [i_2]) - 49247))));
                    }
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            var_27 = (min(((((arr_12 [i_2] [i_1] [19] [6] [i_6] [i_0]) | (-7741631658439602486 ^ var_8)))), (((arr_3 [16]) ? (min(var_7, (arr_4 [i_0] [i_1]))) : (~var_9)))));
                            var_28 = ((-(((arr_18 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) ? (arr_18 [i_0] [i_1] [i_2] [i_5] [i_6] [i_0]) : var_12))));
                        }
                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            var_29 = (arr_10 [i_0] [i_0] [i_0] [i_7 - 1]);
                            var_30 ^= ((~(((((arr_5 [i_0]) != (arr_11 [1] [i_2] [5] [1]))) ? var_9 : var_14))));
                        }
                        var_31 = (min((arr_6 [17] [2] [i_5]), (!var_1)));
                        var_32 = (min((arr_9 [i_1] [i_2] [i_5]), (arr_8 [i_5] [7] [3] [1])));
                    }
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        var_33 = (+((min((arr_20 [i_0] [i_0] [i_8] [21] [i_2] [i_1] [i_8]), var_1))));
                        var_34 = min(((((!31) ? var_3 : var_4))), (arr_22 [i_0] [i_1] [i_2] [i_8] [i_8]));
                        var_35 = (((arr_1 [i_0]) ? (arr_11 [i_0] [1] [i_2] [1]) : var_7));
                        var_36 *= (((((((((arr_7 [13] [10] [10]) || var_8))) << (var_5 - 2329535234132363054)))) < (min(var_10, var_15))));
                    }
                    var_37 = ((min((arr_20 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1] [i_1]), (arr_11 [i_0] [i_1] [i_2] [i_2]))));

                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        var_38 = ((var_16 << (((!(~var_1))))));
                        var_39 = ((((((var_3 ? var_7 : (arr_17 [i_0] [i_1] [4] [i_9] [i_1]))))) ^ ((((((var_11 + 9223372036854775807) >> (((arr_5 [i_0]) - 67))))) ? (arr_22 [i_0] [i_1] [i_2] [i_1] [i_9]) : (((var_14 & (arr_15 [i_0] [i_1] [i_2] [i_2]))))))));
                        var_40 = ((var_4 ? (min((min(var_2, var_5)), (arr_6 [i_0] [i_1] [9]))) : (((((var_14 >= (arr_20 [i_0] [i_0] [9] [i_1] [i_1] [i_2] [9]))))))));
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 4; i_10 < 22;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            {
                                var_41 = (max(var_41, (((+((((((arr_0 [i_10] [i_1]) ? var_0 : (arr_15 [15] [i_1] [15] [15])))) ? ((min(3146263559, var_3))) : 6842864317026641211)))))));
                                var_42 = 1;
                                var_43 = (min((var_7 / -var_14), -var_5));
                            }
                        }
                    }
                    var_44 = (!((min((arr_3 [i_0]), var_16))));
                }
            }
        }
    }
    #pragma endscop
}
