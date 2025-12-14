/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_3));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        var_14 = (min(var_14, (arr_7 [i_0] [i_0] [i_1 + 2] [i_0])));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
                        {
                            arr_14 [i_0] [0] [i_1] [i_2] [i_2] [i_4] = var_6;
                            var_15 -= (~(arr_12 [i_4] [i_0]));
                            var_16 = (min(var_16, (arr_7 [i_1 + 2] [i_3 - 1] [i_3 + 1] [i_4])));
                        }
                        for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                        {
                            var_17 = ((!(arr_16 [i_1 + 2] [i_1 + 3] [i_1 - 1] [i_1 + 2] [i_3 + 1])));
                            var_18 = (max(var_18, (((((((arr_1 [3]) % 9588808341443791591)) < var_4))))));
                            arr_18 [i_0] [9] [i_2] [i_2] [i_5] = (arr_0 [i_0]);
                            var_19 = (min(var_19, var_3));
                        }
                        arr_19 [i_0] [i_3 - 1] [i_1 - 1] [5] [i_2] = (min(28667, ((-1361071897 ? (arr_6 [i_1] [i_1 + 2] [8]) : -29055))));
                        var_20 ^= (((arr_8 [i_1 + 1] [i_1 + 1] [i_1 + 3] [i_3 - 1]) / (arr_13 [i_0] [0] [i_0] [i_2] [i_0])));
                    }
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {

                        for (int i_7 = 2; i_7 < 10;i_7 += 1)
                        {
                            arr_25 [i_6] [i_6] [4] [i_2] [i_1] = var_2;
                            var_21 = ((((min(809, 3204282431))) >> (var_7 - 2989707137013800313)));
                            var_22 = (arr_21 [i_0] [i_2] [i_0] [i_0] [i_0]);
                        }
                        for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                        {
                            var_23 &= (arr_7 [9] [i_1 - 1] [4] [i_6]);
                            var_24 = (max((((var_6 == (arr_10 [9] [i_1 - 1] [8] [9] [i_1 + 2])))), (min(-117, ((var_7 ? var_2 : (arr_22 [i_0] [i_0] [i_2] [i_0] [i_8])))))));
                            arr_28 [i_0] [0] [i_2] [i_6] [i_2] [i_6] [i_8] = (((min((!var_5), ((var_1 ? -117 : 17083630321403418758)))) != (((((arr_23 [i_0] [i_8] [i_0] [i_6] [i_8] [i_2]) < (arr_23 [i_0] [i_8] [i_8] [i_6] [2] [i_8])))))));
                            arr_29 [i_0] [i_2] [i_2] [1] = -8464330430891811934;
                        }
                        for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
                        {
                            var_25 = 33913582;
                            var_26 = 1010271265073246473;
                        }
                        for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
                        {
                            var_27 = (min(var_27, (((49 >> (7424384781623629593 - 7424384781623629577))))));
                            var_28 = (!-24);
                        }

                        for (int i_11 = 0; i_11 < 11;i_11 += 1) /* same iter space */
                        {
                            var_29 = (min((((7353568965047705816 | var_6) ^ (arr_26 [i_0] [i_0] [1] [i_0] [i_1 + 1]))), (((!(((arr_16 [i_0] [i_1] [i_2] [9] [i_0]) != 44305)))))));
                            var_30 = (min(var_30, -95));
                            arr_38 [i_0] [i_1] [i_2] [i_6] [i_6] [i_2] [i_0] = var_3;
                            var_31 = (min(var_31, 9006279691403924919));
                            var_32 |= (((arr_35 [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_11]) << (((((arr_35 [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_11]) ? (arr_17 [i_1 + 3] [i_0]) : (arr_17 [i_0] [i_0]))) - 1512101428))));
                        }
                        for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
                        {
                            var_33 += (((((var_6 << (((arr_7 [i_0] [i_0] [i_6] [6]) - 55686))))) ? (((var_9 ? (arr_33 [i_0] [i_0] [i_2] [i_2] [i_0] [i_0] [i_6]) : (((arr_24 [i_0] [i_6] [i_2] [i_2] [i_12] [i_12] [i_0]) ? (arr_10 [i_0] [i_1] [i_1] [i_1 + 2] [i_12]) : (arr_31 [i_0] [i_12] [i_0] [i_0])))))) : var_0));
                            var_34 ^= ((((((arr_5 [i_1 + 1]) | 8464330430891811933))) ? (((arr_39 [i_0] [i_1 - 1] [i_1 - 1] [i_1 + 2] [i_1 - 1] [i_1 + 2]) + (min(var_9, var_0)))) : -2097151));
                            var_35 = ((((~((-(arr_31 [10] [i_1 + 1] [i_2] [7]))))) & (-4048 || 1090684865)));
                            arr_41 [10] [i_1 + 3] [3] [i_2] [i_12] = (-(2097125 / 8464330430891811933));
                        }
                    }
                    arr_42 [3] [3] [i_1 + 2] [i_2] = var_5;
                }
            }
        }
        arr_43 [7] = var_4;

        for (int i_13 = 0; i_13 < 11;i_13 += 1)
        {
            arr_46 [i_0] [i_13] = (min((~var_5), (((arr_0 [i_13]) & (arr_0 [i_13])))));
            var_36 = (arr_33 [i_13] [i_13] [i_13] [i_0] [8] [i_13] [i_0]);
            var_37 ^= (max((22641 / 48650), (arr_0 [i_0])));
            var_38 = (((~-0) * (arr_15 [i_13])));
        }
        arr_47 [i_0] [i_0] = (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]);
        var_39 = 0;
    }
    for (int i_14 = 2; i_14 < 18;i_14 += 1)
    {
        arr_50 [i_14] [i_14 + 2] = 4011550407124280560;
        var_40 ^= (~4080);
    }
    var_41 = (max(var_41, var_1));
    #pragma endscop
}
