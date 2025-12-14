/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_13 = (min(var_13, (arr_3 [15])));
                arr_7 [i_1] [i_0] [i_0] = (arr_4 [i_0] [i_0] [i_0]);
            }
        }
    }

    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_12 [i_2] |= arr_6 [i_2] [i_2];

        /* vectorizable */
        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            var_14 = (min(var_14, (arr_6 [14] [i_2])));
            var_15 = (min(var_15, (((1 ? 3171793192 : -105)))));

            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            var_16 = (arr_2 [i_4]);
                            arr_24 [10] [i_5] [i_4] [i_5] [10] = (arr_6 [i_2] [i_2]);
                            var_17 = (min(var_17, ((((arr_3 [i_2]) ? var_6 : 4294967290)))));
                            var_18 |= (arr_20 [i_4 - 1] [i_3 - 2]);
                        }
                    }
                }
                arr_25 [i_2] [i_2] &= var_11;
                arr_26 [i_3] [i_3] [i_2] [i_2] = (((arr_20 [8] [i_2]) ? var_11 : var_2));
            }
        }
        var_19 = (-89 + 183);
        var_20 = (max((min(((((arr_1 [17]) ? (arr_20 [i_2] [i_2]) : var_9))), (((arr_18 [i_2]) ? (arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [2]) : var_5)))), (arr_21 [i_2] [i_2] [0] [i_2] [10])));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
    {
        arr_31 [i_7] = (((arr_29 [i_7]) ? var_12 : ((var_5 ? var_8 : (arr_30 [i_7])))));
        arr_32 [i_7] = ((((var_4 % (arr_27 [i_7])))) ? (arr_30 [3]) : ((((arr_30 [i_7]) >= (arr_27 [i_7])))));
    }
    for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
    {
        arr_36 [i_8] [i_8] = var_8;
        var_21 = (arr_29 [i_8]);
        var_22 = (min((89 + 76), ((((arr_29 [i_8]) >= ((var_1 ? var_1 : (arr_29 [1]))))))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
    {
        var_23 = (max(var_23, (((var_10 ? (arr_30 [i_9]) : (arr_37 [i_9]))))));
        arr_39 [i_9] = (((arr_28 [i_9]) ? (arr_28 [i_9]) : var_6));
        var_24 += (((var_9 != var_0) ? ((var_4 ? (arr_34 [i_9]) : (arr_37 [20]))) : var_3));
        var_25 += ((-90 ? -18925 : 18925));
        var_26 -= (arr_38 [i_9]);
    }
    #pragma endscop
}
