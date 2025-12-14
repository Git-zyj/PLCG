/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += ((-var_6 ? var_11 : var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (((max((arr_4 [i_0]), (min((arr_4 [i_0]), var_10)))) != ((min(var_7, var_5)))));
                var_18 -= (arr_0 [i_0]);
                var_19 = (((((arr_0 [i_0]) ? var_5 : ((max(var_12, var_12))))) != var_10));
                var_20 += (min((((-(max((arr_0 [i_1]), 28060))))), (min((arr_2 [i_0]), (arr_2 [i_1 - 1])))));

                for (int i_2 = 1; i_2 < 10;i_2 += 1) /* same iter space */
                {
                    var_21 = (min(((max(var_5, (arr_0 [i_1])))), ((min((arr_2 [i_0]), (arr_2 [i_0]))))));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_22 = ((((min(var_2, (!var_9)))) ? (min((min((arr_0 [i_1 + 1]), var_14)), (arr_5 [i_1 - 1] [i_3] [i_0]))) : (arr_7 [i_2 - 1] [i_0])));
                        var_23 = (((((12140490715408683822 ? 16874600445706982493 : -15310))) ? 313265560 : -94));
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        var_24 -= (arr_1 [2]);
                        var_25 = ((((((12140490715408683819 || (arr_15 [i_0]))) || ((((arr_5 [i_0] [i_1 - 2] [i_0]) ? (arr_10 [10] [10] [i_2 + 1] [i_4] [0] [i_1]) : (arr_10 [i_0] [i_1] [5] [1] [i_0] [i_4])))))) && (((((min(var_16, (arr_2 [8])))) ? (((arr_0 [1]) ? var_2 : var_3)) : ((min((arr_8 [4] [1] [i_2] [i_0]), var_6))))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_26 = (((arr_16 [i_0] [i_1] [i_1] [11] [i_0]) ? (arr_8 [i_0] [i_1] [i_2 + 1] [i_0]) : (arr_16 [i_0] [i_1] [i_1] [i_2 + 1] [i_0])));
                        var_27 += ((!(arr_10 [8] [i_1 + 1] [i_1 - 2] [i_5] [i_1 - 3] [i_5])));
                        var_28 = (((arr_13 [4] [4] [i_1 - 1] [i_2 - 1] [i_0]) + var_5));
                    }

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_29 = ((-(arr_2 [i_0])));
                        var_30 += (((arr_13 [i_2 + 2] [i_1 + 1] [i_2 + 2] [0] [0]) != (((((arr_1 [10]) != (((((arr_4 [10]) != (arr_15 [2])))))))))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_31 = (arr_14 [i_0] [i_0] [i_1 - 2] [i_2 - 1] [10]);
                        var_32 *= (!var_9);

                        for (int i_8 = 3; i_8 < 8;i_8 += 1)
                        {
                            var_33 = (arr_18 [i_1 + 1]);
                            var_34 = var_2;
                        }
                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            var_35 = ((~(((var_11 != (arr_21 [i_0] [i_1 - 1] [i_0] [i_1 - 1]))))));
                            arr_31 [i_0] [i_1] [i_2] [i_0] [1] = ((-22775 ? 6306253358300867807 : 5));
                            arr_32 [i_0] [i_0] [i_0] [i_7] [i_9] = (((arr_22 [i_0] [11] [i_2 - 1] [i_1 + 1]) ? (arr_19 [i_0] [i_0]) : 4194544908));
                        }
                        for (int i_10 = 2; i_10 < 9;i_10 += 1)
                        {
                            var_36 = var_0;
                            arr_35 [1] [i_0] [i_2] [i_7] [i_10 + 3] = var_10;
                            arr_36 [i_2] [i_0] = (((arr_20 [4] [i_0] [i_2 + 1]) != (arr_20 [5] [i_0] [i_2 + 2])));
                            var_37 = var_14;
                        }
                        var_38 -= var_10;
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 12;i_12 += 1)
                        {
                            {
                                arr_42 [1] [i_1 - 1] [i_2] [i_11] [i_0] [i_11] = ((((arr_2 [i_1 + 1]) + (((var_9 - (arr_5 [6] [4] [i_0])))))));
                                arr_43 [4] [i_0] [i_2] [i_11] [4] = ((((-1367160059803819028 != 3981701736) != (arr_33 [1] [i_1 - 2] [i_2 + 2] [6] [i_12] [i_11] [6]))) ? (--22774) : (!22775));
                                var_39 = (~var_6);
                            }
                        }
                    }
                }
                for (int i_13 = 1; i_13 < 10;i_13 += 1) /* same iter space */
                {
                    arr_46 [i_0] [i_1] [i_13] = ((-(arr_33 [i_13 + 2] [i_1] [i_1 - 1] [i_1] [0] [i_13] [0])));
                    var_40 = (((((!(arr_23 [i_0] [1] [i_13])))) != (arr_34 [2] [i_1] [2] [i_0])));
                }
            }
        }
    }
    var_41 += var_12;
    #pragma endscop
}
