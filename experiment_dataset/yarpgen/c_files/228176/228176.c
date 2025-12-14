/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += (var_6 | -var_13);
    var_15 = var_13;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_16 = (((arr_3 [i_0] [i_0 - 1]) ? (arr_3 [i_0] [i_0 + 1]) : var_9));
            var_17 = var_4;
            arr_4 [i_0] &= (((((var_11 ? var_10 : (arr_0 [i_0])))) && (~735849188)));
            var_18 &= (arr_0 [i_0]);
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            arr_7 [i_2] = (((arr_6 [i_0] [i_0 - 1]) ? (arr_6 [i_0] [i_0 + 1]) : (arr_6 [i_0] [i_0 - 2])));
            arr_8 [i_2] [i_0] = (arr_3 [i_0] [i_0]);
            var_19 = var_12;
        }

        for (int i_3 = 1; i_3 < 11;i_3 += 1) /* same iter space */
        {
            arr_12 [i_3] [i_3] = (((arr_2 [i_0 - 1] [i_0]) ? (arr_2 [i_0 - 1] [i_0]) : (arr_2 [i_0 - 1] [i_0])));
            var_20 = (((arr_6 [i_0 + 1] [i_0]) ? (arr_10 [i_3 + 3] [i_3 + 2] [i_3 + 2]) : (arr_6 [i_0 - 1] [i_0])));
        }
        for (int i_4 = 1; i_4 < 11;i_4 += 1) /* same iter space */
        {
            var_21 = (min(var_21, (arr_3 [i_4 - 1] [i_0 - 2])));
            arr_15 [i_4] = (((var_12 % var_10) < (arr_1 [i_0 - 2] [i_0 - 1])));
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    {
                        arr_20 [i_4] [i_4] = (arr_0 [i_0]);
                        arr_21 [i_4] = (arr_1 [i_0 - 1] [i_4 + 3]);
                        var_22 = ((var_6 ? var_1 : (arr_18 [i_4] [i_4])));
                        arr_22 [i_0] [i_4] [i_5] [i_0] |= var_0;
                        arr_23 [i_0] [i_4] [i_5] [i_6] [i_4] = (((arr_5 [i_0] [i_4] [i_4 + 1]) ? (arr_5 [i_0] [i_4] [i_4 + 2]) : (arr_5 [i_0] [i_4] [i_4 + 2])));
                    }
                }
            }
            arr_24 [i_4] [i_4] = ((var_1 / (arr_1 [i_0 - 2] [i_0 + 1])));
        }
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 12;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            {
                                var_23 = ((var_6 && (((var_4 ? var_10 : var_5)))));
                                var_24 ^= (((arr_6 [i_0 + 1] [i_0 + 1]) ? (arr_6 [i_0 + 1] [i_0 - 2]) : (arr_6 [i_0 - 1] [i_0 + 1])));
                            }
                        }
                    }
                    var_25 |= var_12;
                }
            }
        }
    }
    for (int i_11 = 2; i_11 < 13;i_11 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 14;i_13 += 1)
            {
                for (int i_14 = 2; i_14 < 12;i_14 += 1)
                {
                    {
                        var_26 = ((((((arr_40 [i_11] [i_12] [i_13] [i_14]) & 21120)))) ? (arr_35 [i_11 - 1]) : (((min(var_3, ((((arr_5 [i_11] [i_13] [i_14]) < (arr_19 [i_13] [i_12])))))))));
                        var_27 = (min(var_27, (arr_18 [i_11] [i_14])));
                        arr_46 [i_14] = (min((min(46, -819)), (((min((arr_33 [i_14] [i_12] [i_12] [i_12] [i_12]), var_6))))));
                        arr_47 [i_11] [i_11] [i_11] = (arr_43 [i_14] [i_14 + 1] [i_11 - 2]);
                    }
                }
            }
        }
        var_28 = (min((min((arr_33 [i_11] [i_11] [i_11] [i_11 - 2] [i_11 + 1]), (arr_33 [i_11] [i_11] [i_11] [i_11 - 1] [i_11 - 1]))), (((var_7 || (arr_11 [i_11 + 1]))))));
        arr_48 [i_11] = (min(((min(var_2, (((!(arr_26 [i_11]))))))), var_13));
    }
    var_29 = ((-(((((var_2 << (var_6 - 7627121027867317948)))) ? (min(var_9, var_0)) : var_1))));
    #pragma endscop
}
