/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 = ((var_5 != ((var_5 ? (~1179433191) : var_3))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_0] = (((arr_9 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3]) || (arr_7 [i_0] [i_1] [i_2] [i_3])));

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_13 = 49948;
                            var_14 = (max(var_14, var_0));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_15 += (((arr_16 [i_0] [i_1] [i_2] [i_2] [i_3] [i_5]) ? (arr_1 [4]) : (arr_1 [4])));
                            var_16 = (max(var_16, (~127)));
                            var_17 = (-1866 ? var_9 : (arr_15 [i_0] [i_2] [i_2] [i_3] [i_5]));
                            var_18 = ((1885 ? 2448 : (arr_2 [i_1] [i_2] [i_0])));
                        }
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            var_19 = ((var_4 & (arr_4 [i_3] [i_1])));
                            var_20 = var_8;
                            arr_20 [i_3] [i_0] [i_2] [i_2] [i_0] [i_1] [i_3] = -var_10;
                        }
                    }

                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        var_21 += ((((!(arr_1 [i_7]))) ? -12 : (arr_12 [i_0] [i_1] [i_0] [i_2] [i_2] [i_7] [5])));
                        var_22 = (min((~1), var_5));

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            var_23 = var_2;
                            var_24 -= ((-((((arr_24 [1] [i_1] [i_2] [i_7] [i_8]) <= var_3)))));
                            var_25 -= (!-51);
                        }
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            var_26 = (max(var_26, var_9));
                            arr_29 [i_0] [3] [i_0] = (((((max(var_10, (arr_3 [i_0] [i_2] [i_9]))) | (~var_0)))));
                        }
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            arr_33 [i_0] [i_1] [i_0] [i_7] [i_7] [i_10] = ((((((-1885 ? var_6 : -2448)))) ? (((((min(var_8, 40242))) == (((var_8 == (arr_8 [i_1]))))))) : ((((((~(arr_18 [i_0] [i_1] [i_0] [i_7] [i_10] [i_2] [i_2])))) && (8483577723362163584 < 4291262994))))));
                            var_27 = (~1);
                        }
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            var_28 = (max(var_28, var_5));
                            arr_37 [i_0] [i_0] = (min(((~(56073 || var_3))), var_4));
                            var_29 = (max(var_29, (((-(((((var_2 ? var_5 : (arr_9 [i_0] [i_1] [i_1] [i_1] [2] [i_1]))) != 0))))))));
                        }
                    }
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        arr_42 [i_0] [i_1] [i_2] [i_2] [i_12] [i_12] = var_3;
                        var_30 = ((~(arr_3 [i_0] [i_2] [i_12])));
                        arr_43 [i_0] [i_0] [i_0] [i_0] = -36;
                    }
                }
            }
        }
    }
    var_31 = ((~(((!((max(var_4, var_7))))))));
    var_32 = ((((var_7 && (!var_7)))));
    #pragma endscop
}
