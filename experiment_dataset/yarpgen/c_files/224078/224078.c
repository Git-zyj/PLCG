/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 1422506162;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
            {
                arr_8 [i_0] [i_1] [i_1] = 32766;
                var_17 -= (((((var_7 ? (arr_7 [14] [14] [i_2] [14]) : (((var_7 ? 2147483629 : var_12)))))) ? ((24 ? (arr_7 [6] [i_1] [i_1] [12]) : (~var_2))) : (arr_0 [i_0])));
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
            {
                var_18 = (max(var_18, (((((arr_4 [i_1] [4]) ? ((~(arr_5 [10] [12] [i_3]))) : var_12))))));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 13;i_5 += 1)
                    {
                        {
                            arr_17 [i_0] [i_1] [i_1] [i_1] [i_1] [i_5 - 2] = (arr_10 [i_1]);
                            arr_18 [i_0] [i_3] [i_1] = 1;
                            var_19 = -var_15;
                        }
                    }
                }
            }
            for (int i_6 = 3; i_6 < 14;i_6 += 1)
            {
                var_20 ^= (!1505281044);
                var_21 = (arr_21 [i_0] [i_0] [i_0]);
                var_22 += (((var_15 ? (((var_1 ? 24 : (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0])))) : ((18 ? 8 : 67)))));
            }
            arr_22 [i_1] = (((-(arr_7 [i_1] [i_1] [i_1] [i_1]))));
        }
        /* vectorizable */
        for (int i_7 = 2; i_7 < 14;i_7 += 1)
        {
            var_23 = var_11;
            var_24 += var_12;
            arr_25 [i_0] [i_7 - 2] [i_7] = var_3;
            var_25 = arr_3 [i_0];
        }
        arr_26 [i_0] = var_6;
        arr_27 [i_0] [i_0] = (((arr_24 [i_0] [i_0] [i_0]) ? (((-(arr_10 [0])))) : (((-(arr_9 [i_0]))))));
        var_26 ^= (32747 ? -var_1 : (((arr_20 [i_0] [i_0] [i_0]) ? (arr_2 [i_0]) : (arr_6 [i_0] [i_0] [10]))));

        for (int i_8 = 2; i_8 < 14;i_8 += 1)
        {
            var_27 = (((((((arr_4 [i_0] [i_8]) ? (arr_12 [i_0] [13] [i_8] [i_0]) : var_15))) ? var_8 : 24)));
            arr_30 [i_0] [i_8] [i_8] = (arr_19 [i_8] [i_0] [i_8 - 2] [i_8]);
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        var_28 = (max(var_28, var_3));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 0;i_11 += 1)
            {
                {
                    var_29 = var_0;
                    arr_40 [i_10] [i_11 + 1] = var_11;
                }
            }
        }
        arr_41 [i_9] [i_9] = var_11;
        var_30 = (max(var_30, var_12));
    }
    for (int i_12 = 2; i_12 < 21;i_12 += 1)
    {
        var_31 = (!16);
        var_32 = (arr_43 [i_12]);
        var_33 = ((((!((((arr_45 [i_12 + 2]) ? 255 : (arr_42 [i_12])))))) ? 72 : ((((~(arr_43 [i_12])))))));
    }
    #pragma endscop
}
