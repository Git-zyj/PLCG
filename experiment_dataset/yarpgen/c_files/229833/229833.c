/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_18 = (arr_4 [i_2] [i_1] [i_0]);
                    arr_8 [i_0] [i_1] [1] = (((((((min(var_15, 1))) ? (((arr_2 [i_0]) % var_10)) : (arr_6 [i_0] [i_1] [i_1] [i_2])))) ? ((((arr_1 [i_0 - 1]) != 1))) : 0));
                }
            }
        }
    }
    var_19 = -115;

    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        arr_11 [i_3] = ((var_10 % ((((!(arr_9 [i_3])))))));

        for (int i_4 = 2; i_4 < 15;i_4 += 1)
        {
            var_20 = (min(var_20, var_9));
            arr_14 [i_4] [i_4] [i_4] = ((!((min((arr_13 [i_4]), (arr_13 [i_4]))))));
        }
    }
    var_21 = var_8;

    /* vectorizable */
    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 10;i_7 += 1)
            {
                {
                    arr_22 [i_7] [i_6] [i_7] = ((arr_20 [i_6 - 2] [i_7 + 3] [10] [i_7 + 3]) <= (((arr_21 [i_5] [i_6] [i_7] [i_5]) ? (arr_20 [i_5] [i_6] [i_6] [i_7]) : (arr_15 [i_6] [i_7 - 1]))));
                    var_22 -= ((-120 ? 1524172408 : -20325));
                    var_23 = ((((arr_10 [i_5]) | -125)));
                }
            }
        }
        var_24 = ((((((arr_9 [i_5]) % (arr_18 [i_5])))) ? var_13 : 1));
        arr_23 [i_5] = (((arr_13 [16]) ? -var_15 : (arr_13 [1])));
        arr_24 [i_5] [i_5] = (arr_15 [i_5] [i_5]);
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 12;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        arr_33 [i_5] [i_8] [i_9] [8] [i_10] = (((arr_17 [i_9 - 1] [i_8 - 1]) & 476876437));
                        var_25 = ((-((((-9223372036854775807 - 1) || 1)))));
                    }
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 13;i_11 += 1) /* same iter space */
    {
        var_26 = (max(var_26, (arr_17 [i_11] [i_11])));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                {
                    var_27 = (max(var_27, 1));
                    arr_40 [i_11] = ((((((((arr_28 [i_11] [i_11]) ? var_15 : (arr_16 [i_13])))) ^ ((var_10 ? var_13 : var_14))))) ? var_17 : ((((arr_37 [i_11] [i_11] [i_11]) != 1))));
                    var_28 = 1;
                    arr_41 [i_11] [i_13] = var_12;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 13;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 1;i_15 += 1)
            {
                {
                    var_29 = (arr_21 [i_11] [i_14] [i_11] [i_11]);
                    arr_49 [i_11] [i_11] = (((((((((arr_43 [i_11] [i_11]) ? var_17 : var_13))) ? var_4 : var_9))) ? ((((!(!var_10))))) : (arr_32 [i_15] [i_15] [i_15] [i_15 - 1] [i_15] [i_15])));
                    arr_50 [i_11] = (((arr_30 [i_15] [1]) ? -476876437 : var_3));
                    arr_51 [i_11] [i_14] [i_15] [i_15] = ((-(min((arr_29 [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_15 - 1]), var_16))));
                    arr_52 [i_15 - 1] [i_11] [i_11] = 1;
                }
            }
        }
        var_30 = (max(var_30, ((min((!var_2), (max((arr_13 [8]), (max((arr_39 [i_11] [6] [6] [i_11]), var_14)))))))));
    }
    #pragma endscop
}
