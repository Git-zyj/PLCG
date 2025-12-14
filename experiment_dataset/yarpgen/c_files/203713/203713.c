/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_14 -= ((-(arr_0 [i_0 + 1])));
        var_15 = (arr_1 [i_0 - 1] [i_0 + 1]);

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
            {
                var_16 = ((269332341 - (arr_5 [i_0 - 1] [i_0 - 2])));
                var_17 *= ((-(((arr_5 [i_1] [i_2]) ? 269332342 : (arr_5 [i_0] [i_0])))));
            }
            for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
            {
                arr_11 [i_3] [i_1] [i_0] [i_0] = (((~var_13) == (arr_8 [i_0 - 2] [i_0 - 3])));
                arr_12 [i_0 - 3] [i_0 - 3] [i_0] &= ((-(arr_8 [i_0 - 3] [i_0 - 2])));
                arr_13 [i_1] [14] = 153;
            }
            var_18 = (arr_10 [i_0 + 1] [i_0 - 3] [i_0 - 1]);
            var_19 = ((((194 ? (arr_10 [i_0 - 1] [16] [i_0 - 3]) : (arr_1 [i_0] [i_0]))) >= (((arr_2 [i_1]) / var_7))));
        }
        for (int i_4 = 1; i_4 < 16;i_4 += 1)
        {
            arr_18 [i_0 - 3] [11] = ((~(arr_14 [i_0 - 3] [i_0 - 3])));
            var_20 = ((+(((arr_1 [i_0 - 3] [i_0 - 2]) % var_5))));
            /* LoopNest 2 */
            for (int i_5 = 4; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 15;i_6 += 1)
                {
                    {
                        var_21 += ((arr_1 [i_0 - 1] [i_0 - 1]) ? ((((0 != (arr_5 [11] [i_5 - 4]))))) : 14637965253204727900);
                        var_22 = (min(var_22, ((!(arr_23 [i_6 - 1] [i_6 + 2] [i_6 - 1] [i_6 + 2] [i_6 + 2])))));
                    }
                }
            }
            var_23 = var_3;
        }
    }
    for (int i_7 = 3; i_7 < 16;i_7 += 1) /* same iter space */
    {
        arr_29 [i_7] = var_10;
        var_24 = (min(var_24, (((-((((1 / 153) || ((max((arr_25 [i_7] [i_7 - 1]), var_6)))))))))));
    }
    for (int i_8 = 3; i_8 < 16;i_8 += 1) /* same iter space */
    {
        arr_32 [i_8] [i_8] = ((-(arr_26 [i_8 - 3])));
        arr_33 [i_8] = (min(((((arr_22 [i_8 - 2] [i_8] [i_8 - 1]) ? (arr_4 [i_8 + 1] [i_8 + 1]) : (arr_4 [i_8 - 3] [i_8 - 1])))), 4294967295));

        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_25 = (max((((arr_27 [i_8] [i_8 - 1]) ? ((~(arr_6 [i_8] [i_8] [i_8]))) : ((0 ? (arr_17 [i_8] [i_9]) : var_10)))), ((-(arr_6 [i_8 + 1] [i_8 - 3] [i_8 + 1])))));
            arr_36 [i_8] [i_9] = (((((arr_21 [i_8]) <= (max((arr_0 [i_8]), -1)))) ? ((~(((arr_35 [i_8]) ^ (arr_3 [i_8] [i_8]))))) : (((1843403852 ? ((var_12 ? 55 : (arr_16 [i_8] [i_8] [i_8]))) : var_11)))));
        }
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            arr_40 [i_8] = (arr_22 [1] [i_8] [i_10]);
            var_26 = (min(var_26, (arr_37 [i_10])));
        }
        /* vectorizable */
        for (int i_11 = 3; i_11 < 14;i_11 += 1)
        {
            var_27 += ((964399099191047249 ? (arr_5 [i_8 + 1] [i_8 - 1]) : (arr_5 [i_8 + 1] [i_8 - 1])));
            var_28 &= (arr_25 [i_8 + 1] [i_8 - 3]);
        }
    }

    for (int i_12 = 1; i_12 < 7;i_12 += 1)
    {
        var_29 += 0;
        var_30 = (((((arr_3 [i_12 - 1] [i_12 + 3]) && (arr_3 [i_12 - 1] [i_12 + 3]))) ? (((arr_3 [i_12 - 1] [i_12 + 3]) ? (arr_3 [i_12 - 1] [i_12 + 3]) : (arr_3 [i_12 - 1] [i_12 + 3]))) : (max((arr_3 [i_12 - 1] [i_12 + 3]), 3069))));
    }
    /* vectorizable */
    for (int i_13 = 2; i_13 < 17;i_13 += 1)
    {
        arr_49 [i_13] [i_13] = ((-(arr_48 [i_13 - 2])));
        var_31 = (min(var_31, (((arr_47 [i_13 + 1]) << (((arr_47 [i_13 + 1]) - 57))))));
        arr_50 [i_13] = 1;
        var_32 = ((arr_48 [i_13 - 2]) ? (arr_48 [i_13 - 2]) : (arr_48 [i_13 - 2]));
        var_33 = (((arr_47 [i_13]) ? (arr_47 [i_13 + 1]) : (arr_47 [i_13 - 1])));
    }
    var_34 = var_11;
    var_35 = (min(var_35, (max(((((max(var_2, var_5))) ? (((min(var_12, var_1)))) : -var_5)), 4294967295))));
    var_36 = (max(var_6, ((((4294967290 ? var_13 : var_4)) + var_11))));
    #pragma endscop
}
