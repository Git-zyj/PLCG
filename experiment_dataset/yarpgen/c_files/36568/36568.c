/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] = var_6;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_14 = (arr_10 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4] [i_2]);
                                var_15 = ((~(arr_10 [i_0] [i_1] [i_2] [i_2] [i_4] [i_2] [i_0])));
                            }
                        }
                    }
                    var_16 = (min(((((arr_3 [i_0] [i_1] [i_2]) != (arr_3 [i_2] [8] [i_2])))), (arr_0 [i_0])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            {
                arr_17 [i_5] [i_5] = 4510856695480512744;

                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
                    {
                        var_17 |= var_9;
                        var_18 = (min(var_18, var_9));
                        arr_24 [i_5] [1] [i_7] [i_8] = ((!(18446744073709551612 | var_10)));
                    }
                    for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
                    {
                        var_19 = (arr_1 [i_5]);
                        arr_27 [16] [i_6] [i_7] [i_7] = ((((((((-12034 ? 0 : (arr_21 [i_5] [i_6] [i_7] [i_7])))) ? (max((arr_0 [i_5]), -6848239904239166674)) : var_0))) ? (((((arr_22 [9] [0]) || var_13)))) : ((((max((arr_23 [i_5] [i_6] [i_7] [17] [i_5] [3]), var_1))) ? ((((var_11 || (arr_9 [i_5] [i_6] [i_7] [i_9] [i_9]))))) : var_8))));
                    }
                    var_20 -= ((-1822250709 != (~12034)));
                    var_21 *= (arr_7 [i_7] [i_6]);
                    var_22 = (((arr_9 [i_5] [i_5] [i_6] [i_6] [i_7]) - var_1));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 21;i_11 += 1)
                        {
                            {
                                arr_33 [i_5] [i_6] [i_7] [i_7] [i_5] [i_11] = ((var_5 ? (((arr_1 [i_10]) ? (arr_32 [i_11] [i_10] [i_6] [i_6] [6]) : ((var_12 ? -1 : 0)))) : (arr_4 [i_10] [i_5] [i_7])));
                                var_23 = 1;
                                var_24 = ((((((max((arr_15 [4] [i_6]), (arr_20 [i_7] [i_6] [i_7] [i_10] [i_7] [15])))) ? (arr_19 [i_5] [i_5] [i_7]) : (-58 / var_5)))) || (((((((arr_28 [i_5] [i_6] [i_5] [i_10]) / (arr_11 [i_10])))) ? -7 : (arr_16 [i_5] [11])))));
                            }
                        }
                    }
                }
                for (int i_12 = 0; i_12 < 21;i_12 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 21;i_14 += 1)
                        {
                            {
                                var_25 = (arr_26 [i_5] [i_6] [i_12] [i_13]);
                                var_26 = var_0;
                                var_27 = (arr_11 [19]);
                                var_28 += (max((arr_2 [i_12]), 12034));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 21;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 21;i_16 += 1)
                        {
                            {
                                var_29 = (max(var_29, (((12034 ? -var_8 : 1)))));
                                var_30 = (max(((var_5 - (arr_3 [13] [i_6] [i_6]))), (arr_23 [i_5] [i_6] [i_12] [i_15] [i_15] [i_16])));
                                arr_45 [i_5] [i_6] [i_12] [i_15] [i_16] = ((((var_12 ? 6848239904239166667 : 2116592711))) ^ (min((arr_16 [i_15] [i_5]), 5001406833086308287)));
                            }
                        }
                    }
                    var_31 = (max(((max(var_2, var_11))), ((((var_9 ? (arr_35 [14] [i_6]) : var_7)) ^ (((!(arr_37 [1] [i_6] [i_12] [i_12] [i_12]))))))));
                    var_32 = ((var_10 * (((min((arr_3 [17] [1] [1]), var_0)) / var_2))));
                }
                for (int i_17 = 0; i_17 < 21;i_17 += 1) /* same iter space */
                {
                    arr_50 [i_5] [1] [i_5] [i_17] = (46 < 268435455);
                    var_33 |= 12034;
                    var_34 = (max(var_34, ((((((-8394 ? 4294967295 : -14847))) ? (((arr_20 [i_6] [i_6] [i_17] [i_5] [i_5] [i_6]) ? 7314 : (arr_20 [15] [15] [i_6] [i_6] [i_17] [i_17]))) : (arr_20 [i_17] [i_6] [8] [1] [i_5] [i_6]))))));
                    var_35 = (max(var_35, ((((arr_1 [i_6]) - var_9)))));
                    var_36 |= var_10;
                }
            }
        }
    }
    var_37 = -118;
    var_38 = 15696;
    #pragma endscop
}
