/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_3, (min(-var_2, ((var_0 ? 163389678 : var_6))))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((((arr_2 [i_0 - 1] [i_0]) ? ((var_3 ? (arr_0 [i_0] [i_0 - 1]) : 24747)) : (arr_0 [i_0] [i_0])))) && ((!(arr_1 [i_0 - 1] [i_0])))));
        var_11 *= 188;
        var_12 = 5576761812683350739;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_13 = (arr_0 [i_0] [i_0 - 1]);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_10 [i_0 - 1] [i_0] [i_3] = ((+(((arr_6 [i_0] [i_1] [i_3]) ? var_0 : (arr_0 [i_0] [i_2])))));
                        var_14 = (max(var_14, (((~(arr_6 [i_3] [i_2] [i_0]))))));
                    }
                }
            }
            var_15 = (arr_2 [i_0 - 1] [i_0]);
            var_16 = (min(var_16, (((var_0 ? (arr_8 [16]) : var_7)))));
        }
        for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
        {
            arr_15 [i_0] [i_4] [i_0] = ((+(((arr_14 [i_0] [i_0 - 1]) ? -24747 : (arr_9 [i_0 - 1] [i_0])))));
            var_17 = (max(var_17, (((var_6 ? (arr_4 [i_4] [i_0 - 1]) : 15)))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
        {

            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        var_18 *= (arr_5 [i_0 - 1] [16] [i_7]);
                        var_19 = ((var_0 != (arr_2 [i_0] [i_0])));
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        arr_29 [12] [12] [i_5] [12] [i_7] [i_6] &= ((((var_3 ? var_5 : (arr_12 [i_7]))) + (arr_8 [i_7])));
                        var_20 = ((-(arr_2 [i_0] [i_0])));
                        var_21 *= (((arr_20 [i_0] [i_7] [i_0 - 1] [i_0 - 1]) || (arr_20 [i_0 - 1] [i_7] [i_0 - 1] [i_0 - 1])));
                        var_22 = var_2;
                        var_23 &= ((-92 ? -63 : 0));
                    }
                    for (int i_10 = 1; i_10 < 19;i_10 += 1)
                    {
                        var_24 = -63;
                        var_25 = (arr_8 [i_0]);
                        var_26 *= var_5;
                    }
                    arr_33 [i_0] [i_6] [1] [i_0] = var_0;
                    arr_34 [i_0 - 1] [i_0] [14] [i_6] [14] = 32640;
                    var_27 = (min(var_27, ((((arr_17 [i_0] [i_0]) ? (arr_14 [i_0] [i_7]) : ((((arr_14 [i_7] [i_6]) < 69))))))));

                    for (int i_11 = 0; i_11 < 20;i_11 += 1) /* same iter space */
                    {
                        var_28 = (arr_4 [i_0] [i_0]);
                        var_29 |= ((+((-1 ? (arr_12 [i_5]) : var_1))));
                        arr_38 [i_7] [9] [i_0] [0] [i_11] [9] = ((var_7 ? (arr_22 [i_0] [i_0] [i_0 - 1] [i_7] [i_7] [i_7]) : var_1));
                    }
                    for (int i_12 = 0; i_12 < 20;i_12 += 1) /* same iter space */
                    {
                        arr_42 [i_0] [i_0] [i_5] [i_0] [i_12] [i_7] = (arr_17 [i_0 - 1] [i_5]);
                        var_30 = (~var_5);
                    }
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        arr_46 [10] [10] [i_0] [1] [i_13] [12] [i_13] = ((((((arr_43 [i_13] [i_13] [i_7] [17] [i_6] [i_0] [i_0]) ? (arr_39 [i_5] [i_5]) : (arr_6 [i_13] [i_13] [i_13])))) + (~-7852251990956664239)));
                        var_31 = (arr_31 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_13] [i_0 - 1]);
                    }
                }
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    var_32 |= (!0);

                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        var_33 = ((~(var_9 <= 1026386142)));
                        var_34 += ((var_8 ? (arr_19 [i_0 - 1] [i_0 - 1]) : (arr_27 [i_0 - 1] [i_0] [i_0] [i_0])));
                        var_35 = (min(var_35, (((((var_9 && (arr_36 [i_0] [i_0] [i_0] [i_0] [1] [i_0] [17])))) ^ (2065798888 < var_0)))));
                        var_36 = (!(((var_4 ? var_9 : (arr_44 [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0] [i_0])))));
                        var_37 -= (!121);
                    }
                    for (int i_16 = 1; i_16 < 19;i_16 += 1)
                    {
                        arr_53 [i_0] [i_0] [i_0] [i_0] [i_0] = ((var_8 ? (arr_20 [i_0] [i_0] [i_16 - 1] [i_14]) : var_8));
                        var_38 = (max(var_38, ((((arr_17 [i_0 - 1] [i_16 + 1]) ? var_3 : var_1)))));
                        var_39 = 2065798888;
                        arr_54 [i_14] [i_5] [i_6] [i_6] [i_0] [i_5] = ((((var_2 ? var_3 : (arr_20 [i_16 + 1] [i_0] [i_0] [3]))) + (arr_21 [i_5] [i_16 + 1])));
                    }
                    for (int i_17 = 0; i_17 < 20;i_17 += 1)
                    {
                        arr_58 [i_0] [i_14] [i_6] [0] [i_0] = (((arr_20 [i_0] [i_0] [i_0 - 1] [i_0 - 1]) ? (arr_20 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1]) : (arr_20 [i_0] [i_0] [i_0 - 1] [i_0 - 1])));
                        arr_59 [i_0] [i_0] [i_0] [i_0] [12] [i_17] [i_6] |= arr_4 [i_5] [i_5];
                    }
                    for (int i_18 = 0; i_18 < 20;i_18 += 1)
                    {
                        arr_64 [i_0] [i_14] [i_5] [i_5] [i_0] = (arr_0 [i_0] [i_14]);
                        arr_65 [i_0] [i_14] [i_0] [i_0] [i_0] = ((-43 ? 163389678 : (arr_5 [i_0] [i_6] [i_0])));
                    }
                }
                var_40 ^= 50178;
                var_41 = (((arr_30 [i_0 - 1] [i_0 - 1] [i_6] [17] [i_5]) + var_0));
                var_42 = (arr_43 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [19] [i_5]);
                var_43 -= (!var_8);
            }
            arr_66 [i_0] [i_0] [i_5] = (((arr_41 [i_0] [i_0 - 1] [i_0] [i_0 - 1]) ? (arr_57 [i_0] [i_0 - 1] [i_0] [18] [i_5] [i_5] [18]) : ((992670348 ? var_7 : 0))));
        }
        var_44 = ((106 ? (((var_4 ? -61 : 2147483647))) : -2));
    }
    #pragma endscop
}
