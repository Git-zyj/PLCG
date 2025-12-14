/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((~((-((var_12 ? var_4 : var_13))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 = ((+((~(((arr_0 [i_0]) ? var_7 : var_8))))));
        var_16 = (arr_0 [i_0]);
        var_17 = var_12;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_6 [i_1] [i_2] |= var_6;
            arr_7 [1] = var_13;
            var_18 = (arr_5 [i_1] [i_2] [i_2]);
            var_19 = (arr_5 [i_1] [i_1] [i_2]);

            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                var_20 = ((-var_1 ? (arr_4 [i_3] [i_2] [i_1]) : var_6));
                arr_10 [i_1] [i_2] [6] [i_3] = (min((arr_9 [i_1] [i_2] [4]), (!var_8)));
            }
            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {
                var_21 = (~-var_6);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_22 = var_2;
                            var_23 ^= (arr_13 [i_5] [i_5] [i_2]);
                            arr_18 [i_1] [i_1] [i_6] [i_5] [i_4] = ((((max(((var_8 ? var_13 : var_5)), ((max((arr_3 [i_6] [i_6]), (arr_11 [i_1] [i_4 + 1] [13] [8]))))))) ? (((((-(arr_9 [7] [6] [i_4])))) ? (arr_13 [i_1] [1] [i_5]) : (min((arr_9 [i_1] [i_1] [i_1]), (arr_8 [i_1] [i_2] [i_5]))))) : ((min((((var_9 ? (arr_3 [i_1] [i_1]) : var_7))), ((var_11 ? var_13 : var_4)))))));
                            var_24 = (((min(var_11, var_8))));
                        }
                    }
                }
                arr_19 [i_4] [i_1] [i_1] [0] &= ((!((!(arr_9 [i_1] [i_2] [i_4])))));
            }
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                arr_23 [i_1] [8] [6] = ((+((max(var_9, (max((arr_20 [1]), var_8)))))));
                arr_24 [i_7] [i_7] [i_2] [12] = var_13;
                arr_25 [i_1] [i_1] [i_1] [i_1] = (((((-(max(var_4, var_13))))) ? ((((arr_5 [i_1] [i_2] [i_7]) ? (arr_20 [i_1]) : 49156))) : (arr_17 [i_1] [i_1] [i_1] [i_1] [1])));
                var_25 = var_7;
            }
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        {
                            arr_35 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [9] |= (arr_17 [i_1] [i_8] [i_9] [i_1] [0]);
                            var_26 -= (~var_3);
                            arr_36 [i_1] [i_1] [5] [i_1] [i_11] [1] [i_1] = ((var_7 ? (~var_4) : var_7));
                        }
                    }
                }
            }
            var_27 = var_6;
            var_28 = (arr_21 [i_1] [i_1] [i_8] [i_8]);
        }
        var_29 += (((((~((var_2 ? (arr_16 [i_1] [7] [i_1] [i_1] [i_1] [14]) : (arr_16 [i_1] [1] [i_1] [i_1] [12] [i_1])))))) ? var_6 : (arr_14 [i_1] [i_1] [i_1])));
    }
    for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
    {
        var_30 = (max(((!((min(var_12, var_8))))), ((!((max(var_13, var_1)))))));
        var_31 = (arr_30 [1]);
        arr_39 [i_12] = var_12;
        var_32 = (max(var_32, (((+(max(((var_9 ? (arr_4 [i_12] [i_12] [i_12]) : (arr_30 [i_12]))), (arr_29 [i_12]))))))));
    }
    var_33 = (min(((((var_10 ? var_10 : var_5)))), ((var_3 ? var_8 : var_11))));
    #pragma endscop
}
