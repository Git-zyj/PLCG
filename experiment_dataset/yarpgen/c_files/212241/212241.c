/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_14 [6] [9] = (arr_13 [1] [11] [0] [1] [0]);
                                var_17 = ((arr_10 [i_3 + 2] [5]) / var_15);
                            }
                        }
                    }
                    var_18 = ((((arr_5 [1] [2] [4]) ? 7558 : var_6)) == (((arr_10 [0] [1]) | (arr_11 [3] [1] [1] [11] [10]))));
                    var_19 = var_13;
                }
                for (int i_5 = 3; i_5 < 11;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 3; i_7 < 11;i_7 += 1)
                        {
                            var_20 = (min(var_20, (arr_22 [10] [1])));
                            var_21 = -992;
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
                        {
                            var_22 = (((arr_17 [i_5 - 3] [1] [1]) ? var_8 : 1));
                            var_23 = (!1);
                            var_24 = (arr_11 [i_5 + 1] [3] [10] [i_5 - 3] [i_5 - 3]);
                        }
                        for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
                        {
                            arr_32 [0] [1] [11] [1] [i_5] [6] [6] = (min(((((arr_20 [1] [i_5 - 1] [0] [0]) != (arr_20 [3] [i_5 - 3] [4] [1])))), 3508454044));
                            var_25 = ((var_4 ? ((((((!(arr_5 [8] [9] [3]))) && 2672114428)))) : (min((arr_3 [5]), (arr_29 [10] [i_1] [1] [3] [1])))));
                            var_26 = (arr_3 [1]);
                        }
                        for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
                        {
                            var_27 = (((max((min(var_8, 1)), (arr_17 [3] [i_5 - 3] [1]))) & ((min((3906851783 * var_6), 2672114428)))));
                            arr_35 [0] [6] [1] [10] [i_5] = (arr_21 [i_5 - 3] [5] [11]);
                            var_28 = (~var_15);
                        }
                        var_29 = ((((arr_2 [i_0]) >= (arr_34 [5] [i_6] [i_5 + 1] [5] [4] [2]))));
                        var_30 = (((((-(((arr_5 [11] [11] [11]) * var_1))))) ? 1 : (((((var_6 && (arr_21 [10] [1] [7]))) || (((-112 ? 57335 : 108))))))));
                    }
                    for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
                    {

                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            arr_43 [8] [1] [0] [0] [11] [i_5] [5] = ((((min((arr_31 [3] [i_5] [2] [i_5] [7]), 2672114430))) ? ((-(arr_31 [1] [i_5] [2] [i_5] [1]))) : (((arr_31 [0] [i_5] [7] [i_5] [11]) ^ (arr_31 [0] [i_5] [10] [i_5] [3])))));
                            var_31 = (min(var_31, (max(-1, var_3))));
                        }
                        var_32 *= ((((((((arr_0 [2]) ? 54235 : var_9)) >> (((arr_1 [3]) >> (var_11 - 13232606460903681684)))))) ? ((((((arr_39 [7] [0] [5]) <= var_16))))) : ((-(11287 + 1622852865)))));
                    }
                    var_33 = ((((max(23121, (arr_7 [1] [0] [1]))))) ? ((-(arr_11 [i_5 - 2] [i_5 - 2] [4] [i_5 - 1] [1]))) : (((min(1, var_9)) >> (var_10 - 825810097))));
                }
                for (int i_13 = 0; i_13 < 12;i_13 += 1)
                {
                    var_34 ^= (((max((arr_11 [i_0] [7] [i_1] [i_1] [4]), 568345300)) / 4238562230));
                    var_35 = ((((((arr_31 [0] [10] [2] [4] [1]) ? (arr_31 [8] [0] [i_13] [8] [i_1]) : (arr_0 [i_0])))) ? ((((((arr_40 [3] [0] [1] [1] [2]) ? var_11 : (arr_4 [6] [6] [1])))) ? -1622852888 : (((min((arr_9 [0]), var_6)))))) : var_7));
                    /* LoopNest 2 */
                    for (int i_14 = 2; i_14 < 9;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 12;i_15 += 1)
                        {
                            {
                                var_36 = 1;
                                var_37 = (max(54244, 1));
                                var_38 = 3013804595;
                                arr_52 [i_15] [1] = var_11;
                            }
                        }
                    }
                    arr_53 [5] [3] [0] [5] = 1;
                }
                var_39 = ((-(((arr_10 [i_0] [i_1]) ? ((5543703725554123343 / (arr_25 [1] [1] [5] [6] [11] [8] [9]))) : var_7))));
                arr_54 [4] [11] [1] = (1622852869 && 182689522);
                var_40 = (min((((arr_9 [i_1]) ? (arr_27 [8] [1] [8]) : (arr_9 [i_1]))), (arr_27 [8] [6] [2])));
            }
        }
    }
    var_41 = (var_0 >= var_9);
    var_42 = var_5;
    #pragma endscop
}
