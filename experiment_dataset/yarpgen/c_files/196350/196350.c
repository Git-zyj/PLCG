/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_18 = (min(var_18, (arr_10 [i_3] [i_1] [i_0])));
                        var_19 = ((((((~-53) ? (arr_7 [i_3] [i_2] [i_0] [i_0]) : (min((arr_12 [i_3] [i_2] [i_2] [i_0]), 9686))))) ? (((((var_6 * (arr_5 [i_0] [i_1] [i_2] [i_3])))) / (arr_12 [i_0] [i_1] [i_2] [i_2]))) : ((((arr_8 [i_1]) % (arr_9 [i_0] [i_1] [i_2] [i_3]))))));

                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            var_20 = ((!((max(-var_13, ((-1412035687540283861 ? 109 : 53)))))));
                            var_21 = max(((~(arr_13 [i_4 - 1] [i_4 - 1] [i_4] [i_4] [6]))), (-58 >= var_9));
                            var_22 |= (((max(var_13, (arr_3 [0] [i_4]))) == 132));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_23 = (max(var_23, 136));
                            arr_19 [i_2] [i_1] [i_1] [i_3] [i_3] [i_5] [i_2] = 37;
                            var_24 = ((-18928 ? 95 : -38));
                        }
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            arr_22 [i_0] [i_2] [i_2] [i_3] [i_6] = ((var_10 ? ((var_0 ? (arr_21 [i_0] [i_1] [i_1] [i_3]) : var_12)) : ((111 ? (arr_21 [i_0] [i_1] [i_2] [i_1]) : 55822))));
                            var_25 = (max(-109, (var_5 + 8946221107742932347)));
                        }
                    }
                    var_26 ^= (((!5541484326826734780) ? 2254505167 : ((((120 - -1621956334) / 230)))));

                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        var_27 &= (((arr_18 [i_0] [i_0] [i_0] [i_7]) || -35));
                        var_28 = ((-28 <= ((min(23, 0)))));
                        var_29 = var_16;
                    }
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        var_30 = (((((var_12 ? (arr_24 [i_0] [i_2] [i_1] [i_0]) : ((max((arr_0 [i_0] [i_0]), 28485)))))) ? (((1 + 8946221107742932351) & (var_12 / var_14))) : (((((((arr_24 [10] [i_1] [10] [i_1]) ? var_6 : var_15))) ? -var_3 : var_17)))));
                        arr_27 [i_2] [i_1] = ((-((min(43520, 19293)))));
                        var_31 = (arr_16 [i_8] [i_8] [6] [i_2] [i_1] [6] [i_0]);
                        var_32 = ((17 * (((0 / (arr_11 [i_8]))))));
                    }
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        var_33 = (max(var_33, ((((((1 / 2001514105) ? (arr_10 [i_0] [i_1] [i_0]) : (15639857318615764556 * -1010480890))) >> (-var_1 - 12241048597890418945))))));
                        var_34 = 57497;
                        var_35 *= (((min((((arr_24 [i_9] [i_1] [i_1] [2]) ? var_10 : var_12)), (6409 >= 63))) > ((max((arr_5 [i_0] [i_1] [i_0] [i_9]), 1)))));
                    }
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        var_36 = (max(var_36, (((-((-(arr_25 [i_10] [i_0] [i_1] [i_0] [i_0]))))))));
                        arr_33 [i_10] [i_0] [i_0] [i_0] &= (max(((max((var_13 > 1020476833047042374), var_12))), ((max(var_4, var_7)))));
                        var_37 *= ((~(((!((max((arr_13 [4] [i_1] [i_1] [i_1] [i_0]), var_16))))))));
                    }
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 11;i_11 += 1) /* same iter space */
                {
                    var_38 = var_1;
                    arr_37 [i_11] [i_0] [i_0] [i_0] = ((-4945488514301462223 ? 22336 : 0));
                }
                var_39 = ((46576 >= ((((arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]) <= var_2)))));
            }
        }
    }
    var_40 = (min(((var_1 * (((max(0, 232)))))), 93));
    /* LoopNest 2 */
    for (int i_12 = 2; i_12 < 11;i_12 += 1)
    {
        for (int i_13 = 3; i_13 < 14;i_13 += 1)
        {
            {
                var_41 = ((-(arr_41 [i_12] [i_12])));
                arr_45 [i_13] = ((235 ? ((max((max((arr_44 [1] [1]), (arr_42 [i_13] [i_13]))), (((!(arr_40 [i_12] [i_12]))))))) : (((var_4 != (arr_39 [i_12] [i_13]))))));
            }
        }
    }
    var_42 = (min(((~(~var_1))), var_11));
    #pragma endscop
}
