/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_10 = var_5;
                        var_11 = ((((min((((arr_5 [15] [15] [19]) & var_7)), ((min(-73, (arr_8 [i_0] [19]))))))) ? ((-var_1 ? (min(var_5, (arr_5 [11] [11] [15]))) : (arr_5 [14] [17] [13]))) : ((((((arr_6 [i_0]) ^ (arr_4 [i_0] [i_0] [i_0] [i_0])))) ? 421 : 1902049225))));
                    }
                }
            }
        }
        var_12 = (arr_1 [19]);

        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_13 &= (arr_3 [i_0]);
            arr_14 [i_0] = 1169321240;
            var_14 *= ((~(((arr_9 [i_0] [18] [i_0] [i_4]) ? (arr_9 [18] [8] [8] [i_4]) : -77))));
            var_15 = ((((min(((min(422, -77))), (((arr_12 [i_0]) ? var_2 : (arr_5 [4] [3] [12])))))) ? var_8 : (((max((arr_6 [21]), (arr_3 [20])))))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            var_16 = -73;
            var_17 -= ((-97 ? (arr_1 [i_0]) : (((arr_4 [i_0] [i_5] [8] [8]) / (arr_1 [21])))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            arr_22 [i_0] [0] = var_8;
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        {
                            var_18 ^= ((((var_5 > (arr_2 [i_8]))) ? (arr_17 [i_0] [1] [19]) : (((-77 ? var_6 : 65102)))));
                            arr_30 [i_0] [9] [i_7] [i_8] [i_9] = (((arr_26 [i_0] [i_6] [1] [15]) > (arr_18 [i_7] [i_0])));
                            var_19 = var_1;
                        }
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            var_20 = (min(((((arr_16 [i_0] [5] [i_0]) >= var_4))), 79));
            arr_34 [i_0] [i_0] [0] = (min((max(2800673102, ((var_3 ? (arr_25 [i_10] [1] [7] [i_0] [1] [1]) : var_1)))), var_7));
        }
    }
    var_21 = (((((min(var_5, var_5))) ? 4588209948152107810 : (var_9 * var_0))) - var_8);

    for (int i_11 = 0; i_11 < 14;i_11 += 1)
    {
        var_22 = ((max((arr_35 [i_11]), var_6)));

        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            /* LoopNest 2 */
            for (int i_13 = 2; i_13 < 12;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 14;i_14 += 1)
                {
                    {

                        for (int i_15 = 2; i_15 < 13;i_15 += 1)
                        {
                            var_23 = ((((min((arr_43 [i_13 - 2] [i_13 + 2]), (arr_15 [i_12])))) ? (-127 - 1) : (arr_29 [i_11] [i_11] [i_13] [i_14] [i_13] [i_13] [i_13])));
                            var_24 &= (min(((min((arr_7 [13] [i_13 + 2] [i_15 - 2] [i_15 - 2]), var_1))), -var_9));
                        }
                        for (int i_16 = 2; i_16 < 13;i_16 += 1)
                        {
                            var_25 ^= var_7;
                            var_26 ^= var_7;
                            arr_49 [1] [i_12] [6] [1] [10] = (((-(arr_38 [1] [3]))));
                        }
                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 14;i_17 += 1)
                        {
                            arr_52 [1] [1] [1] [1] [1] [0] = (((arr_29 [i_11] [18] [i_12] [10] [i_13 - 2] [i_13] [i_17]) ? (arr_29 [2] [i_12] [i_12] [i_11] [i_17] [i_12] [i_12]) : (arr_29 [14] [14] [14] [12] [i_17] [i_13] [2])));
                            arr_53 [i_13] [8] [8] [i_13] [i_13] = 65111;
                            var_27 = (arr_41 [i_11] [i_13 - 2] [i_13 - 2] [10]);
                        }
                        arr_54 [5] [i_12] [i_12] [8] = ((311060622 ? 11578619188115474624 : 65090));
                        var_28 = max(((1923411686 ? (arr_18 [i_13] [i_12]) : (arr_18 [i_12] [i_13]))), (arr_18 [14] [i_12]));
                        arr_55 [i_14] [10] [10] [1] = var_1;
                    }
                }
            }
            arr_56 [2] = (arr_44 [i_11] [i_11] [i_11] [i_12] [i_12] [i_11]);
        }
    }
    var_29 = (var_1 ? 65107 : var_2);
    #pragma endscop
}
