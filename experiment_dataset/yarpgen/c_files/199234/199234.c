/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_17 = (min((min(var_6, var_2)), (((-(arr_1 [i_0] [i_0]))))));
                                arr_12 [i_1] [i_4] [i_3] [i_2] [i_1] [i_1] |= ((-(!var_14)));
                            }
                        }
                    }
                    arr_13 [i_0] [i_0] = var_14;
                }
            }
        }
        arr_14 [i_0] = ((!((min((~var_7), -var_11)))));
        arr_15 [14] [14] |= (-(var_4 && var_8));
        var_18 = ((~(min((arr_9 [i_0] [i_0]), 1))));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            arr_18 [i_0] [i_5] [i_5] = var_11;
            arr_19 [i_0] [i_0] [i_0] = ((!(arr_16 [i_0] [i_5] [i_0])));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    {
                        var_19 = (max(var_19, (var_12 == var_10)));
                        arr_24 [i_7] [i_0] [i_0] [i_0] = (arr_21 [i_7]);
                    }
                }
            }
        }
    }
    var_20 = (!var_13);

    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {

        /* vectorizable */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_21 &= ((var_2 << (((arr_28 [i_9]) - 5))));
            arr_30 [i_8] [i_9] = var_8;
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    {
                        var_22 = (min(var_22, (arr_31 [i_8] [i_11])));
                        var_23 -= ((~(arr_36 [i_8] [i_8] [i_8] [i_8] [i_8])));
                    }
                }
            }
        }
        arr_37 [i_8] [i_8] = (((~1) >= (max(var_11, var_2))));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 24;i_12 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 24;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 24;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 24;i_15 += 1)
                {
                    {
                        var_24 = ((-(~var_2)));
                        arr_48 [i_12] [i_13] [i_14] [i_15] = var_2;
                    }
                }
            }
        }
        var_25 = 3042756654;
        var_26 &= (((((var_5 >= (arr_45 [i_12] [i_12] [i_12])))) - -61));
    }
    for (int i_16 = 0; i_16 < 24;i_16 += 1) /* same iter space */
    {
        arr_52 [i_16] = var_12;
        var_27 = (min((min((var_0 != var_11), -var_15)), ((-(~var_1)))));
    }
    for (int i_17 = 0; i_17 < 24;i_17 += 1) /* same iter space */
    {
        var_28 = (max(var_28, (((min((var_5 || var_6), var_14)) || (~var_6)))));
        arr_55 [i_17] = (min(166, 534773760));
        var_29 |= ((!(~var_2)));
    }
    var_30 = min(((var_2 ^ (182148911 | var_4))), var_14);
    #pragma endscop
}
