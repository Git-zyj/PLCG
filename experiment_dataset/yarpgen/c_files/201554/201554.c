/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_12 = (max(var_12, ((((var_4 > var_10) ? var_11 : 27584)))));
        arr_2 [10] |= ((((-27567 ? -27586 : var_2)) < ((~(arr_1 [i_0])))));
        var_13 = (max(var_13, (((((min((var_3 == var_6), var_9))) ? ((-24152 ? ((27594 ? var_0 : 99700597)) : (((arr_1 [i_0]) ? var_10 : var_0)))) : ((27564 % (arr_0 [i_0 - 2]))))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_14 |= ((-(arr_4 [i_1])));
        arr_5 [0] = (((arr_3 [6]) % (var_0 > 4195266699)));
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    var_15 = ((var_1 >> ((((-27574 ? var_7 : -15047)) / ((((arr_9 [i_2] [i_2] [i_4]) / var_5)))))));
                    var_16 = (max(var_16, ((var_7 ? (((((arr_6 [10]) ? 99700597 : var_5)) % (arr_7 [i_2] [23]))) : (arr_6 [i_2])))));
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                {
                    arr_22 [i_5] [i_5] [i_5] [i_7] = ((((((arr_10 [i_6 + 1] [i_6 - 1] [i_6 - 1]) / var_9))) ? (-27571 / -26431) : var_2));
                    var_17 = 3840;

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        var_18 |= ((var_9 / (arr_13 [i_5])));

                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            arr_28 [i_5] [1] [i_7] [i_8] [i_9] = (((arr_10 [i_6 + 1] [i_6 + 3] [i_6]) * var_0));
                            var_19 |= (arr_11 [i_6 - 1] [i_6 + 2] [i_6 - 1]);
                            var_20 |= (var_10 & 32752);
                            var_21 |= (var_5 ^ var_10);
                            var_22 = (min(var_22, (((var_0 + (((((arr_6 [i_5]) + 2147483647)) << (var_6 - 59254))))))));
                        }
                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            var_23 = (max(var_23, var_4));
                            arr_31 [i_7] [i_7] [i_7] [i_6 + 3] [i_5] |= ((32752 - ((var_10 ? (arr_8 [2] [23] [i_10]) : (arr_15 [i_5])))));
                            var_24 |= 2611048652;
                            var_25 = (max(var_25, (((~(arr_27 [i_10] [7] [i_6 + 1] [i_6 + 1] [i_6 + 1]))))));
                            arr_32 [17] [8] [8] = (((arr_20 [i_6 + 3] [i_6 + 3]) ? var_5 : var_4));
                        }
                        arr_33 [i_5] [i_5] [i_5] |= (((arr_14 [i_5] [i_6 - 1]) ? (arr_14 [i_5] [i_6 - 1]) : (arr_14 [i_8] [i_6 - 1])));
                    }
                }
            }
        }
        var_26 = (((((var_7 | ((((-1 + 2147483647) << (((-14182 + 14202) - 20)))))))) ? ((((-105 / var_6) | ((27578 ? var_11 : 636476686))))) : ((((((arr_25 [18] [9] [9] [9] [i_5]) % (arr_12 [i_5] [1] [1])))) ? (((var_6 ? 1 : 27574))) : (arr_21 [i_5] [i_5])))));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 19;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 15;i_12 += 1)
            {
                {
                    var_27 = (min(var_27, ((max(var_8, (27567 <= var_3))))));
                    arr_40 [i_5] [i_12] = 9365;
                }
            }
        }
        arr_41 [i_5] [i_5] = ((-27568 + (arr_18 [i_5] [i_5] [i_5])));
        var_28 |= var_8;
    }
    for (int i_13 = 0; i_13 < 19;i_13 += 1) /* same iter space */
    {
        var_29 = (min(var_29, (((((max((arr_39 [i_13] [i_13]), (arr_39 [i_13] [i_13])))) % ((~((-3815 ? var_0 : (arr_13 [i_13]))))))))));
        arr_45 [i_13] [i_13] |= var_8;
        arr_46 [9] [i_13] = (arr_12 [i_13] [i_13] [i_13]);
    }
    #pragma endscop
}
