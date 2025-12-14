/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((~(((!(~105))))));

    for (int i_0 = 1; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((~(((~(arr_1 [i_0]))))));
        arr_3 [2] |= ((-(+-10604)));
        var_11 *= ((!(!14035459060398462134)));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_12 = ((-(!14035459060398462134)));
                                var_13 &= ((!((!(((~(arr_10 [i_1 + 1] [i_1 - 1] [i_1] [i_1]))))))));
                            }
                        }
                    }
                    var_14 = (-(arr_11 [i_1] [i_2] [i_3] [i_3]));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 16;i_7 += 1)
                        {
                            {
                                arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] |= ((!(--57)));
                                var_15 = ((~(((!(!var_5))))));
                                arr_23 [i_6] = ((-((-(!30)))));
                                var_16 |= -var_6;
                            }
                        }
                    }
                    var_17 = ((-((-(arr_11 [i_1 + 1] [9] [i_1 + 1] [i_3])))));
                    var_18 += (-(!2086020471));
                }
            }
        }
        var_19 = ((~(~-8)));
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 16;i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                {
                    arr_33 [i_9] = ((((!(arr_18 [i_8] [i_9] [i_9] [i_10] [i_10])))));
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 13;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 17;i_12 += 1)
                        {
                            {
                                arr_39 [i_8] [i_8] [i_10] [i_11] [i_9] = (arr_5 [i_12]);
                                var_20 = ((!((!(arr_17 [i_8] [i_8] [i_8] [10] [i_8])))));
                            }
                        }
                    }
                }
            }
        }
        arr_40 [i_8] = ((~(((!(arr_35 [i_8] [i_8]))))));
        var_21 -= -var_1;
        var_22 = (max(var_22, (~8600965546338293676)));
    }
    for (int i_13 = 1; i_13 < 16;i_13 += 1) /* same iter space */
    {
        var_23 = (((-(((!(arr_29 [i_13 - 1])))))));
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 17;i_14 += 1)
        {
            for (int i_15 = 3; i_15 < 13;i_15 += 1)
            {
                for (int i_16 = 2; i_16 < 16;i_16 += 1)
                {
                    {
                        arr_55 [i_14] [i_13] [i_15] [i_14] [i_13] [i_13] = ((~(((!(arr_49 [i_13] [i_14] [i_15] [i_16]))))));
                        var_24 *= (--27320);
                        var_25 = (max(var_25, (((~((~(!var_2))))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 17;i_17 += 1)
        {
            for (int i_18 = 4; i_18 < 15;i_18 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_19 = 1; i_19 < 1;i_19 += 1)
                    {
                        var_26 = (min(var_26, (~-4)));
                        var_27 = (min(var_27, (((-(arr_51 [i_19] [i_19] [i_18] [i_19 - 1]))))));
                        var_28 = ((~(!-10609)));
                    }
                    var_29 = ((!(~4005251339794938655)));
                    var_30 |= ((!(((~(((!(arr_37 [i_13] [i_13] [9] [i_13] [i_17])))))))));
                }
            }
        }
    }
    #pragma endscop
}
