/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] = var_5;
                arr_7 [i_0] = ((+(min((arr_3 [i_0]), 10382757308288007947))));
                var_13 = 4503599627370495;
            }
        }
    }
    var_14 &= var_4;
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_15 = (((max((var_12 | var_9), 23637)) - ((-((8727373545472 ? (arr_11 [i_2] [i_2]) : var_3))))));

                for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                {
                    var_16 = (max((arr_16 [i_2] [i_2] [i_2] [i_2]), (arr_15 [i_3])));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        arr_21 [i_2] [i_5] = (((((arr_20 [i_2] [i_4] [i_4] [i_5]) < 1)) ? 4503599627370511 : (arr_17 [i_3] [i_4] [i_5])));

                        for (int i_6 = 1; i_6 < 18;i_6 += 1)
                        {
                            arr_24 [i_2] [i_3] [i_3] [i_2] [i_2] = ((~(arr_3 [i_2])));
                            arr_25 [i_2] [i_2] [i_4] [i_5] [i_4] = (((arr_23 [i_5] [i_5]) ? (arr_19 [9]) : 18442240474082181120));
                        }
                        var_17 = (max(var_17, (arr_0 [i_2 - 1])));
                        var_18 = (var_1 - 1);
                    }
                    for (int i_7 = 1; i_7 < 19;i_7 += 1)
                    {
                        var_19 = ((((((max((arr_12 [i_7 - 1] [i_2 - 1] [i_2 - 1]), (arr_12 [i_7 - 1] [i_2 - 1] [i_2])))) + 2147483647)) << (((min(var_5, 2824781254)) - 2824781254))));
                        var_20 *= var_1;
                        arr_28 [i_2] [i_3] [i_3] [i_3] = (max((arr_17 [i_2 - 1] [i_3] [i_4]), (arr_14 [i_2] [i_2 - 1] [i_2 - 1] [i_2])));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        arr_31 [1] [i_3] [i_2] = ((+((var_5 ? (arr_26 [1] [i_2 - 1] [i_2 - 1] [14] [2] [i_8]) : (arr_29 [i_2 - 1] [i_3] [i_3] [i_3] [i_4] [i_8])))));
                        arr_32 [i_2] [i_2] = ((((1 > (arr_19 [i_2])))) - (arr_12 [i_2 - 1] [i_8] [i_2 - 1]));
                        var_21 = (max(var_21, var_10));
                        var_22 = (arr_3 [i_2]);
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_23 = ((0 ? (arr_3 [i_2]) : (arr_3 [i_2])));
                        arr_35 [18] [i_2] [i_2] [i_2 - 1] = (arr_11 [i_2] [i_2 - 1]);
                        var_24 -= var_8;
                    }
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
                {

                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        var_25 ^= (arr_18 [i_10] [i_10] [i_10] [i_10]);
                        arr_43 [i_2] [i_2] [i_10] [i_2] = (11 <= -65524);

                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            var_26 = ((var_7 ? var_1 : (arr_15 [i_2 - 1])));
                            arr_46 [i_10] [i_3] [i_10] [i_10] [6] [i_12] |= -1194888603;
                            var_27 -= ((~(arr_26 [i_12] [i_2 - 1] [i_12] [i_2 - 1] [0] [i_2 - 1])));
                            var_28 = (((arr_20 [i_2] [i_3] [i_3] [i_2 - 1]) || (arr_20 [i_2] [i_10] [i_11] [i_12])));
                        }
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            var_29 = 4503599627370496;
                            var_30 = (((arr_37 [i_11] [i_2 - 1] [i_10]) ? ((~(arr_34 [i_2 - 1] [i_10] [i_11] [i_13]))) : var_9));
                            var_31 = (~(arr_45 [i_2] [i_2 - 1] [i_10] [i_11]));
                        }
                    }
                    var_32 = (((arr_27 [i_2] [i_2] [i_2 - 1] [i_2] [i_2]) <= ((233807339 ? 1 : (arr_12 [i_3] [i_3] [i_10])))));
                    arr_49 [i_10] [i_2] [i_2] [i_2] = (((arr_41 [i_2 - 1] [i_2] [i_2]) < 2233785415175766016));
                }
            }
        }
    }
    var_33 = ((var_12 == ((min(-1, (~1))))));
    #pragma endscop
}
