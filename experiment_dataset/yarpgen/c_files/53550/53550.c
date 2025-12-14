/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= ((-((var_1 ? (99 + var_10) : (var_1 + var_3)))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_13 [i_2] [i_2] [i_1 + 3] [i_2] = (arr_7 [i_2] [i_3]);

                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            arr_16 [i_0] [i_2] [i_3] [i_1] = -var_1;
                            arr_17 [i_2] = -var_7;
                        }
                        arr_18 [i_0] [i_1] [i_1] [i_1] [i_2 + 1] = ((var_10 ? var_5 : var_12));
                    }
                }
            }
        }
        arr_19 [i_0 + 1] [i_0 - 2] &= var_2;
        arr_20 [i_0] = ((((arr_11 [i_0] [i_0] [i_0]) ? var_2 : var_13)));
    }

    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        arr_25 [1] |= ((min(((var_6 ? (arr_7 [i_5] [i_5]) : var_4)), -486927376)) & var_8);
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 8;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                {

                    for (int i_8 = 1; i_8 < 8;i_8 += 1)
                    {
                        arr_33 [i_5] [i_5] [i_5] [i_8] [i_5] [4] = ((((((!(var_6 + var_9))))) & (-486927376 + var_6)));
                        arr_34 [i_5] [i_5] [i_6] [i_7] [i_8] = (-var_12 + var_10);
                    }
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        arr_37 [i_5] [i_5] [i_9] [6] = (arr_7 [i_9] [i_6 + 2]);

                        for (int i_10 = 1; i_10 < 9;i_10 += 1)
                        {
                            arr_40 [i_5] = (-(486927375 & var_11));
                            arr_41 [i_5] [i_5] [3] [i_9] [i_10] = -var_10;
                            arr_42 [i_9] [i_9] [i_7] [i_5] [i_9] = ((+(((arr_29 [i_6 + 3] [1] [i_6 + 2]) ? (arr_29 [i_6 - 1] [i_6] [10]) : (arr_29 [i_6 + 3] [i_10 - 1] [9])))));
                        }
                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            arr_46 [i_11] [i_11] [i_9] [i_7] [i_7] [i_11] [i_5] = var_8;
                            arr_47 [i_5] [i_11] &= var_3;
                            arr_48 [6] [i_11] [i_11] |= -1904983946957197996;
                        }
                        arr_49 [i_9] [10] [i_9] = -486927401;
                        arr_50 [i_9] [i_6] [9] [i_9] [i_9] = var_0;
                        arr_51 [i_5] [i_6 + 1] [i_7] [i_7] [i_7] [4] = (((((486927375 & var_4) + (((min(var_10, var_10)))))) & var_1));
                    }
                    arr_52 [i_6] = var_13;
                    arr_53 [i_5] [i_5] [i_5] [i_7] = var_12;
                }
            }
        }
        arr_54 [i_5] = ((-var_12 ? ((-1214955301 ? 1191875720 : 2305842734335787008)) : (0 & 1)));
        arr_55 [i_5] = (max(((((arr_28 [i_5] [i_5] [i_5]) + var_6))), (((var_7 + var_9) ? var_13 : (min(var_9, 1))))));
    }
    for (int i_12 = 1; i_12 < 7;i_12 += 1)
    {
        arr_60 [i_12] = (max(((268431360 ? (((34205 ? (arr_7 [0] [0]) : var_8))) : ((var_1 ? var_4 : var_13)))), ((((arr_22 [i_12 + 2]) + (arr_22 [i_12 + 1]))))));
        arr_61 [8] = -1;
        /* LoopNest 3 */
        for (int i_13 = 2; i_13 < 7;i_13 += 1)
        {
            for (int i_14 = 4; i_14 < 9;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    {
                        arr_69 [i_15] [i_14] [i_12 + 1] [i_14] [i_12 + 1] = (!1);
                        arr_70 [i_13] [i_13] [i_13] [i_14 - 3] [i_14 - 3] [i_15] = (max(var_2, -430029080));
                        arr_71 [i_13] = ((((min((arr_31 [i_12] [i_13 + 1] [i_14 + 1] [i_12 - 1] [i_13]), var_3))) ? ((2739381266 ? 6398971468010345041 : 17200)) : (((-(arr_31 [i_12 + 2] [i_13] [i_14] [i_15] [5]))))));
                    }
                }
            }
        }
        arr_72 [1] [6] = -1;
    }
    #pragma endscop
}
