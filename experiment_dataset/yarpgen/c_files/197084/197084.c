/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_17 = ((((((arr_0 [i_0]) - var_10))) & (min((min(63, 10716282989274310463)), ((min(-64, (-127 - 1))))))));
        arr_2 [18] = var_7;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_6 [i_1] = ((((!(arr_3 [i_1] [i_1]))) || (((~(((arr_3 [i_1] [i_1]) ? (arr_1 [i_1] [i_1]) : var_4)))))));
        var_18 = (max(var_18, ((min((((arr_0 [i_1]) ^ var_3)), (((arr_0 [i_1]) ^ (arr_0 [i_1]))))))));
        arr_7 [i_1] = ((((((((((arr_1 [i_1] [i_1]) && (arr_5 [i_1]))))) - (((arr_4 [10] [i_1]) ? var_8 : var_0))))) ? (((max(var_5, (arr_4 [i_1] [i_1]))))) : (((((arr_0 [i_1]) + 2147483647)) >> (((min(-64, var_10)) + 347033831))))));
        var_19 ^= -2147483633;
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_20 = var_10;
        arr_10 [i_2] = -17463;
        var_21 = ((((arr_9 [i_2]) && (arr_8 [i_2]))) && (((-(arr_9 [i_2])))));
        arr_11 [2] &= (((((var_4 ? var_0 : var_0)))) ? (max((max(1610612736, var_15)), (((arr_3 [i_2] [i_2]) + (arr_4 [i_2] [i_2]))))) : (((!((((-9223372036854775807 - 1) ? var_15 : var_4)))))));
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_14 [i_3] = (((((arr_1 [i_3] [i_3]) >> 1))) || var_13);
        var_22 = (63 & 29378);
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        arr_19 [i_4] = ((+(((((arr_15 [i_4]) & var_10)) & (~32768)))));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
        {
            var_23 = (arr_16 [i_4]);
            var_24 = (max(var_24, ((((arr_20 [i_5]) ? (arr_20 [i_5]) : 1844150939)))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    {

                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            var_25 += (!var_4);
                            var_26 = (max(var_26, (((-(arr_22 [i_8]))))));
                        }

                        for (int i_9 = 4; i_9 < 20;i_9 += 1)
                        {
                            var_27 = (max(var_27, (((((!(arr_15 [i_4]))) ? (arr_28 [i_9 + 1] [i_9 - 4] [i_9 + 1] [i_9 - 4] [i_9 - 4]) : -var_13)))));
                            arr_33 [i_4] [i_5] [1] [i_7] [1] = ((arr_29 [i_4] [i_5] [i_6] [i_9] [i_9 - 3]) ? (~32776) : ((~(arr_15 [i_4]))));
                            arr_34 [i_4] [i_4] [i_4] [i_7] [6] [6] = (((arr_32 [i_4] [i_5] [12] [i_4] [i_9 - 1]) ? var_4 : (~31744)));
                            var_28 = ((256 ? (var_2 - 0) : var_0));
                        }

                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            arr_38 [i_4] [i_4] [i_4] [i_4] [i_4] = (~-var_2);
                            arr_39 [8] [i_6] = ((-(arr_35 [i_4] [i_5] [2] [i_7] [18])));
                            var_29 |= ((var_6 ? ((~(arr_25 [19]))) : (1 * -32765)));
                        }
                    }
                }
            }
            arr_40 [i_5] [i_4] = 1;
        }
        for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
        {

            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                var_30 += (((((arr_18 [12]) + 2147483647)) >> (var_7 + 117)));
                arr_45 [i_4] [2] = -416570356;
                var_31 = var_7;
            }
            var_32 = var_14;

            for (int i_13 = 0; i_13 < 21;i_13 += 1)
            {
                var_33 = (max((min(var_2, (min(var_4, (arr_48 [2] [19] [i_13] [i_13]))))), -1));
                var_34 = ((((((!(arr_18 [i_4]))))) && ((min(-1, (-32767 - 1))))));
            }
            for (int i_14 = 0; i_14 < 21;i_14 += 1)
            {
                var_35 -= (min((min((((var_0 ? var_10 : (arr_28 [i_4] [i_4] [i_4] [i_4] [i_4])))), ((72 ? var_5 : 1)))), ((((arr_43 [2] [i_11] [i_11] [2]) ? (arr_43 [i_14] [i_11] [i_11] [i_4]) : 16)))));
                var_36 = ((((arr_49 [i_4] [i_4]) + var_3)));
            }
            arr_52 [1] = ((((((arr_37 [i_11] [i_11] [i_11] [i_11] [i_11]) & (max(var_1, (arr_37 [i_4] [i_4] [i_4] [20] [i_4])))))) ? (((-1311276718 != 3174) ? ((min(55, var_4))) : (arr_48 [i_4] [i_4] [i_4] [4]))) : ((-((min(32, 32768)))))));
            arr_53 [3] &= (min((arr_35 [9] [i_11] [i_11] [i_11] [i_11]), (min(((max(9433, (arr_48 [i_4] [i_11] [20] [i_4])))), ((24 ? (arr_21 [3] [3]) : (arr_29 [i_4] [i_11] [i_4] [2] [i_4])))))));
        }
        var_37 = (min((((arr_43 [i_4] [i_4] [i_4] [i_4]) ? 0 : (arr_43 [i_4] [i_4] [i_4] [i_4]))), (((arr_43 [i_4] [i_4] [i_4] [i_4]) ? (arr_43 [11] [7] [i_4] [i_4]) : (arr_43 [i_4] [i_4] [i_4] [i_4])))));
        arr_54 [15] = arr_46 [i_4] [i_4] [i_4];
    }
    #pragma endscop
}
