/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 = ((((((((arr_2 [i_0]) + (arr_0 [i_0] [i_0])))) ? ((((arr_3 [i_0]) ? 20988 : 32763))) : (arr_1 [i_0]))) & (((~(max(32763, (arr_0 [i_0] [6]))))))));
        arr_4 [i_0] [i_0] = (max(((((arr_3 [i_0]) * (!1)))), ((798492818 ? (12358721638152438066 + var_8) : (arr_0 [i_0] [i_0])))));
    }
    for (int i_1 = 4; i_1 < 19;i_1 += 1)
    {
        var_13 = (min(var_13, ((max(((((arr_3 [i_1]) <= ((~(arr_1 [i_1 - 3])))))), ((var_10 ? (((((arr_0 [i_1] [i_1 + 1]) == (arr_7 [i_1]))))) : (min(var_9, (arr_0 [1] [i_1]))))))))));
        var_14 = ((~(((max((arr_0 [i_1 - 2] [i_1]), (arr_2 [i_1]))) & (~var_2)))));
        var_15 *= (var_4 - -2106);
        arr_8 [i_1] [i_1] = (((((!(arr_1 [i_1 - 1])))) >= ((10347 << (32766 - 32750)))));
    }
    var_16 = ((var_4 ? -32764 : -32761));
    var_17 = ((var_1 ? (var_4 >= var_9) : var_0));

    /* vectorizable */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = 10342;
        var_18 = (min(var_18, (arr_1 [i_2])));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 14;i_3 += 1)
    {
        arr_14 [i_3 - 1] [i_3 + 3] = (!55214);
        var_19 = 3496474491;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {

        for (int i_5 = 1; i_5 < 18;i_5 += 1)
        {
            arr_19 [i_5] [i_4] [i_4] = 0;
            arr_20 [i_4] [i_4] [i_4] = (~var_2);
            arr_21 [i_4] = ((798492812 ? 3496474484 : 14008));
        }
        for (int i_6 = 4; i_6 < 18;i_6 += 1)
        {
            arr_26 [i_4] [i_4] [i_6] = (((arr_16 [i_4] [i_6 - 4]) & -32755));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        {
                            var_20 = 32741;
                            arr_33 [i_4] [i_7] [i_4] [i_4] = (~32760);
                            var_21 = -var_7;
                            var_22 = (min(var_22, (((!(arr_24 [i_7] [i_7]))))));
                        }
                    }
                }
            }
        }
        for (int i_10 = 3; i_10 < 17;i_10 += 1)
        {

            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                var_23 -= (((var_4 ? (arr_15 [3]) : 10359)));
                var_24 = (max(var_24, ((var_9 || (!1)))));
            }
            arr_38 [13] [i_4] [i_10] = (arr_37 [i_10 - 3] [i_10 - 2]);
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 20;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 20;i_13 += 1)
                {
                    {
                        arr_44 [i_13] [i_4] [i_10] [i_4] [i_4] = ((((-32763 ? 2147483647 : 10750558604055594228))) && -9850);
                        var_25 = (max(var_25, (((-(arr_15 [i_10 - 2]))))));
                        var_26 = (min(var_26, (((-(arr_43 [i_10 - 2] [i_12] [i_13] [i_4] [i_4]))))));
                        var_27 -= ((-(arr_22 [i_10] [i_10 - 3] [i_12])));
                        var_28 *= (798492804 ? 1 : 798492838);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 20;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 20;i_15 += 1)
                {
                    {
                        arr_50 [i_4] = (arr_37 [i_4] [i_10 + 3]);
                        arr_51 [i_4] [i_4] [i_14] [i_15] [i_4] = var_1;
                    }
                }
            }
        }
        var_29 = ((-3305896016 * ((((!(arr_34 [i_4] [i_4])))))));
    }
    #pragma endscop
}
