/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_10 = (arr_1 [i_0]);
        var_11 = ((((arr_0 [i_0]) ^ var_4)));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_12 = ((((~(((-127 - 1) ? var_6 : 158)))) != 1));
        var_13 = (max(var_13, -121));

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_14 = ((-(((arr_7 [i_1] [i_2]) ? (arr_7 [i_1] [i_2]) : var_3))));
            var_15 = (min(var_15, ((((((var_8 != (((var_5 ? var_7 : var_6)))))) != (((!(arr_7 [i_1] [i_1])))))))));
            var_16 = (-28034 ? (~var_4) : (arr_6 [10]));
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            var_17 ^= var_1;
                            arr_16 [i_1] [i_1] [i_1] [i_3] [i_3] [i_4] [i_5] = (((((arr_10 [i_1]) <= -1))));
                            arr_17 [i_5] [i_5] [i_1] [i_4] [i_1] [i_2] [9] = ((min(var_2, ((var_9 ? var_2 : (arr_4 [i_1] [i_1]))))));
                        }
                        for (int i_6 = 2; i_6 < 12;i_6 += 1) /* same iter space */
                        {
                            var_18 = (max(var_18, (arr_7 [i_1] [i_1])));
                            var_19 -= 3328351125;
                            var_20 &= ((+(max((arr_2 [i_1]), ((max(110, (arr_10 [i_4]))))))));
                            var_21 = (max(((((!(arr_8 [i_3]))) ? var_3 : (arr_1 [i_2]))), (((1020 ? -1007179567 : 1)))));
                            var_22 = var_7;
                        }
                        /* vectorizable */
                        for (int i_7 = 2; i_7 < 12;i_7 += 1) /* same iter space */
                        {
                            var_23 = -6787819098819267673;
                            var_24 = var_0;
                        }
                        var_25 = (max(var_25, (arr_22 [i_3] [i_4] [i_3] [i_4] [i_3 - 3])));
                    }
                }
            }
            var_26 = -6787819098819267673;
        }
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            arr_27 [i_1] [i_1] [i_1] = (((-(arr_25 [i_1]))));
            arr_28 [i_1] [i_1] = ((+(((arr_13 [i_1] [i_8] [i_1] [i_8] [i_1]) << (((arr_13 [i_1] [i_8] [i_1] [i_8] [i_8]) - 48261))))));
            var_27 = (arr_4 [i_1] [i_1]);
            var_28 += ((((!var_9) >= ((((arr_12 [i_8] [i_1]) <= var_4))))));
        }
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            var_29 = ((((min(35363, 156))) ? ((max(2147483622, 3312851862))) : ((((((arr_19 [i_1] [6] [6] [i_9] [i_9] [i_9] [i_9]) ? var_7 : (arr_18 [i_1] [i_1] [i_1] [i_1] [i_1]))))))));
            var_30 = (min(var_30, ((((((var_5 ? var_6 : (arr_24 [i_1] [i_9] [i_1] [i_1] [i_9])) | 110)))))));
        }
        var_31 *= var_8;
    }
    for (int i_10 = 0; i_10 < 17;i_10 += 1)
    {
        arr_35 [i_10] = (arr_33 [i_10]);
        var_32 = var_2;
        arr_36 [1] &= (((((var_8 && ((((arr_33 [i_10]) ? (arr_33 [i_10]) : var_4)))))) << ((((-((var_9 & (arr_33 [i_10]))))) + 3227312258))));
    }
    var_33 = 679384096;
    #pragma endscop
}
