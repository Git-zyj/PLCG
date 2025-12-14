/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= var_10;

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_0] [i_2 + 1] [i_2 + 1] = ((!(((((!(arr_6 [i_0] [i_0] [i_0 - 1])))) >= ((((arr_2 [i_0] [i_0] [i_0 + 1]) == (arr_2 [i_2 + 1] [i_2 + 1] [i_2 + 1]))))))));
                        var_14 += (((((~(arr_0 [i_0])))) ? (((((var_3 ? (arr_0 [i_0 + 1]) : var_4))))) : (arr_3 [i_0] [i_0])));

                        /* vectorizable */
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            arr_13 [i_0] [i_1] = (((arr_9 [i_0 + 2] [i_0 - 2] [i_0 + 1] [i_0 + 2]) ? (arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (arr_7 [i_0 - 2] [i_0 - 3] [i_0 + 1] [i_0 + 1] [i_0 - 2])));
                            var_15 = (min(var_15, (((var_2 ? (((arr_6 [i_1] [i_1] [i_1]) ? (arr_9 [i_0 + 1] [i_0 - 1] [i_0] [i_0 - 1]) : (arr_9 [i_3] [i_3] [i_3] [i_3]))) : (arr_1 [i_0]))))));
                            var_16 = 7;
                            var_17 = (min(var_17, (arr_7 [i_2 + 2] [i_2 + 2] [i_2] [i_2] [i_2])));
                        }
                        arr_14 [i_0 + 2] [i_1] [i_0] [i_0] |= (max((((-(arr_4 [i_0] [i_0 - 2] [i_0])))), (max((max((arr_3 [i_1] [i_1]), (arr_7 [i_1] [i_1] [i_1] [i_1] [i_1]))), (arr_8 [i_3] [i_3] [i_3] [i_3] [i_3] [i_1])))));

                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            arr_17 [i_0] [i_1] [i_1] [i_1] [i_1] = ((((-2147483647 - 1) ? (arr_15 [i_0] [i_0 - 1] [i_0 - 2] [i_0 + 1] [i_0 + 2] [i_0]) : 4634477500498327317)) == (arr_9 [i_3] [i_3] [i_3] [i_3]));
                            arr_18 [i_0 - 1] [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 3] [i_0] = var_9;
                        }
                    }
                }
            }
        }
        arr_19 [i_0 - 1] [i_0] = (((((((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 2]) ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_4 [i_0] [i_0] [i_0])))) ? (((((arr_8 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0]) == (arr_0 [i_0]))))) : (((arr_5 [i_0 + 2] [i_0]) ? (arr_7 [i_0] [i_0] [i_0 + 2] [i_0 + 1] [i_0 - 3]) : var_7)))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
    {
        var_18 += var_8;
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                {
                    arr_26 [i_6] [i_6] = ((var_0 ? (arr_20 [i_6]) : (arr_22 [i_6])));
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 22;i_9 += 1)
                    {
                        for (int i_10 = 4; i_10 < 22;i_10 += 1)
                        {
                            {
                                arr_33 [i_6] = (arr_24 [i_8]);
                                var_19 = (max(var_19, ((((arr_27 [i_10 - 4] [i_10 - 3] [i_10 - 2] [i_10 - 3]) - (arr_31 [i_10 - 4] [i_10 - 1] [i_10 - 1] [i_10 - 4] [i_10 + 1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 21;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 23;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 23;i_15 += 1)
                        {
                            {
                                arr_45 [i_11] [i_11] [i_11] [i_12] = (((arr_23 [i_11] [i_11]) ? (arr_37 [i_14]) : (min((arr_25 [i_11]), (arr_29 [i_12] [i_12 + 1] [i_12 + 2] [i_12 + 1] [i_12 - 1])))));
                                var_20 = ((((max((arr_44 [i_12] [i_12 + 2] [i_12 + 2] [i_12 + 2] [i_12 + 1] [i_12]), -1507114142))) ? (arr_44 [i_12] [i_12 + 2] [i_12 + 1] [i_12 + 1] [i_12] [i_12]) : (((arr_44 [i_12] [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12 - 1] [i_12 - 1]) ? var_9 : (arr_34 [i_12 + 1] [i_12 + 1])))));
                            }
                        }
                    }
                    arr_46 [i_12 + 1] [i_12 - 1] [i_12] [i_12 - 1] = (arr_38 [i_11] [i_11] [i_11]);
                    var_21 -= (arr_24 [i_11]);
                }
            }
        }
        arr_47 [i_11] = ((((!((((arr_25 [i_11]) ? (arr_27 [i_11] [i_11] [i_11] [i_11]) : (arr_28 [i_11] [i_11] [i_11] [i_11] [i_11])))))) ? (min((arr_37 [i_11]), (arr_39 [i_11] [i_11] [i_11]))) : (arr_24 [i_11])));
    }
    #pragma endscop
}
