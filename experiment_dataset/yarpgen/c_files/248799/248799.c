/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 ^= ((9817 ? 1 : 176));
        arr_3 [i_0] [i_0] = (((((1 ? var_15 : (arr_0 [i_0]))) + ((min(1, var_7))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_0] = ((var_6 <= (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_2 [i_0])))));
            var_18 = (max(var_18, ((max(((((min((arr_0 [i_0]), 1))) + (arr_5 [1] [i_1] [i_0]))), (arr_1 [8]))))));
            var_19 = (min(var_19, ((((var_14 + var_9) < (((min((arr_4 [i_0] [8]), (arr_5 [6] [i_1] [i_1]))))))))));
            var_20 ^= ((((((var_6 <= -30678) ^ (var_10 < var_9)))) ? (max((arr_5 [6] [i_1] [i_1]), (((arr_2 [i_1]) ? var_3 : (arr_4 [i_0] [0]))))) : var_4));
        }
    }
    for (int i_2 = 3; i_2 < 13;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 15;i_5 += 1)
                {
                    {
                        arr_18 [i_2] [i_3] [i_4] [i_5] = (arr_8 [i_2]);

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_21 = (min(var_21, (arr_14 [10] [i_2] [10])));
                            var_22 = 1;
                        }
                    }
                }
            }
        }
        arr_22 [i_2] [i_2] = (max((arr_13 [i_2 + 3] [i_2]), (min(1, -var_16))));
    }
    /* LoopNest 3 */
    for (int i_7 = 3; i_7 < 23;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 23;i_9 += 1)
            {
                {

                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        var_23 = (max((max((((arr_27 [i_8]) >> (((arr_25 [i_7]) + 1001352926)))), 1)), ((((((arr_25 [i_7]) ? (arr_27 [i_10]) : (arr_31 [i_9] [i_8] [i_9]))) == ((var_14 ? var_14 : (arr_27 [i_7]))))))));
                        var_24 = ((((min((~-8345734716382446512), -980379464))) ? (max((((61496 | (-32767 - 1)))), (min(1, 13527566707139261271)))) : (((min(var_16, 1))))));
                        var_25 ^= (((max((max(var_0, var_8)), ((min(1, var_1))))) << ((((((((19377 | (-9223372036854775807 - 1))) + 9223372036854775807)) << 1)) - 38750))));
                    }
                    for (int i_11 = 1; i_11 < 23;i_11 += 1)
                    {
                        arr_36 [i_7] [i_8] [i_9] = (((((~(((arr_26 [i_7]) ^ (arr_24 [i_7])))))) ? (((arr_28 [i_7 - 2] [i_11 - 1]) | (arr_27 [i_7]))) : ((max((arr_35 [i_7] [i_8] [i_9]), (arr_35 [i_7 - 1] [i_8] [i_11 + 1]))))));
                        var_26 = ((~(1 >> 0)));
                        var_27 = (min(var_27, (!var_1)));
                    }
                    for (int i_12 = 2; i_12 < 23;i_12 += 1)
                    {

                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            arr_42 [i_7] [i_8] [i_8] [i_9] [i_12] [i_13] [i_13] = (min(((max((((arr_31 [i_9] [i_9] [i_12]) >= (arr_27 [i_8]))), var_14))), (arr_38 [i_7])));
                            var_28 ^= ((((max((arr_33 [i_12] [i_8] [i_13]), (arr_33 [i_7] [i_7] [i_12])))) ? ((1 ? var_11 : (arr_33 [i_7] [i_7] [i_12]))) : var_12));
                        }
                        for (int i_14 = 4; i_14 < 20;i_14 += 1)
                        {
                            var_29 ^= (arr_37 [i_14]);
                            arr_46 [i_9] [i_8] [i_8] [i_8] [i_8] = (arr_25 [i_7]);
                            arr_47 [i_14] [i_9] [i_14] [i_14] [i_14] = (max(((((((var_16 ? var_8 : 1))) ? ((min((-32767 - 1), 55789))) : (arr_31 [i_9] [i_8] [i_8])))), ((((max(var_6, (arr_38 [i_7])))) ? (arr_44 [i_9] [i_8] [i_9] [i_12] [i_14]) : (6598704656628463104 - 18439)))));
                            var_30 ^= (min((max((arr_41 [i_14] [i_12] [i_12] [i_8] [i_7]), var_5)), (arr_39 [i_12] [i_8] [i_8] [i_8])));
                        }
                        arr_48 [i_7] [i_9] [i_9] [i_12] = ((((((arr_26 [i_7]) ? (arr_41 [i_7] [i_8] [i_9] [i_8] [i_7 - 1]) : ((var_5 ? (arr_31 [i_9] [i_9] [i_9]) : (arr_23 [i_7])))))) ? (arr_43 [i_9] [i_7] [i_7]) : 1));
                    }
                    arr_49 [i_7] [i_9] [i_9] = ((~(((((-20810 ? -18439 : 1))) ? 47203 : (1 ^ 1)))));
                    arr_50 [i_9] [i_9] [i_9] = ((~(~var_8)));
                    var_31 = ((-((((!var_11) || var_13)))));
                }
            }
        }
    }
    #pragma endscop
}
