/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_14 + ((var_6 << (var_11 - 7711762076082744445)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (arr_1 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
                    {
                        arr_13 [i_3] [i_3] = ((var_13 << (119 - 119)));
                        arr_14 [i_3] = ((((3408787181366321266 ? 6 : 1)) << (118 - 116)));
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                    {
                        var_16 = (1594965901446753961 | 1551024557);
                        var_17 = (var_10 ? (arr_11 [i_0] [i_0] [i_2] [i_4]) : (((-6348701786462955229 + 9223372036854775807) << (((var_3 + 1384056397229585605) - 27)))));
                    }
                    for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                    {
                        arr_21 [i_0] [7] [i_0] = -2377396329670439373;
                        arr_22 [i_0] [13] [13] [i_5] = (((arr_4 [i_2]) ? 504 : 0));
                        arr_23 [7] [13] [i_2] [i_1] [5] = (((arr_2 [i_2]) << (arr_2 [i_0])));

                        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            arr_26 [i_0] [i_6] [i_0] = 33717;
                            var_18 = ((var_5 ? var_7 : (arr_0 [i_2])));
                            arr_27 [i_0] [i_0] [i_0] [i_6] [1] = (((arr_17 [i_0]) ? (arr_17 [i_2]) : 10));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                        {
                            arr_30 [i_0] [i_0] [i_0] [i_0] [i_7] = (arr_10 [8] [i_0] [i_0]);
                            arr_31 [i_0] [i_1] [i_2] [1] [i_7] = (((arr_5 [i_1] [i_1] [i_7]) < var_1));
                            var_19 = (min(var_19, var_4));
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                        {
                            arr_34 [1] = (arr_1 [7] [i_0]);
                            arr_35 [10] = ((0 ? (((arr_20 [i_0] [i_1] [i_2] [i_5] [i_8] [i_1]) * var_7)) : var_4));
                            arr_36 [i_8] [1] [i_2] [i_2] [i_8] = ((+(((arr_5 [i_0] [i_1] [i_2]) | var_10))));
                            arr_37 [13] [13] [i_1] [i_5] [i_8] = ((~(arr_24 [i_0] [i_0] [i_1] [i_2] [i_5] [i_8] [i_2])));
                            arr_38 [i_5] [i_5] = ((~(arr_20 [i_0] [i_1] [i_1] [i_2] [1] [1])));
                        }
                    }
                    arr_39 [i_2] [i_0] [i_0] = (48 ? (arr_28 [i_0] [i_0] [i_1] [i_1] [i_2] [i_2]) : ((218 << (arr_28 [i_0] [10] [8] [i_2] [i_2] [i_2]))));
                    arr_40 [i_0] [i_0] [6] [i_0] |= ((~var_9) ? (arr_4 [i_2]) : (!var_1));
                    var_20 = (max(var_20, ((!(arr_32 [i_0] [i_1] [i_2] [i_1] [1] [i_0])))));
                }
            }
        }
        arr_41 [i_0] = ((0 ? 250 : (!1)));
    }
    var_21 += -1;
    #pragma endscop
}
