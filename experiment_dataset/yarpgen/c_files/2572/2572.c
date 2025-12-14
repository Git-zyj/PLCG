/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= var_8;
    var_11 ^= var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 15;i_3 += 1)
                {
                    {
                        var_12 += ((~(((arr_9 [i_0] [i_1] [i_2 + 1] [i_1] [i_1] [i_2]) ? var_4 : var_5))));
                        arr_11 [i_0] [i_2] [i_0] [i_0] = ((var_3 ? -5958576279243830503 : (arr_7 [i_2])));
                    }
                }
            }
        }
        arr_12 [i_0] = (arr_6 [10] [i_0] [14] [i_0]);
        arr_13 [i_0] = ((var_4 ? (arr_10 [10] [10] [i_0] [10] [i_0] [i_0]) : ((var_1 ? var_6 : var_9))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_13 = (((max((arr_15 [i_4]), (arr_15 [i_4])))) || 1271519957);
        var_14 = (max(var_14, (((!((min(-1271519958, -1271519957))))))));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 10;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            var_15 = 1271519957;
            arr_24 [i_5 + 1] [i_6] [i_5] = (arr_23 [i_5] [i_6] [i_6]);
            arr_25 [i_6] [i_6] = ((!(arr_3 [i_5 - 1])));
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_28 [i_7] = -var_1;
            arr_29 [i_5] [i_5] = (((((!(arr_3 [i_5 + 1])))) + var_2));
        }
        var_16 = ((-(arr_5 [i_5])));
    }
    for (int i_8 = 1; i_8 < 10;i_8 += 1) /* same iter space */
    {
        var_17 *= ((!(max((arr_10 [0] [1] [i_8 + 1] [i_8] [i_8] [0]), (arr_10 [6] [14] [i_8 + 1] [6] [i_8 + 1] [i_8 - 1])))));
        var_18 = arr_26 [i_8] [i_8] [i_8];
    }

    /* vectorizable */
    for (int i_9 = 0; i_9 < 18;i_9 += 1)
    {
        var_19 = (arr_32 [i_9]);
        arr_35 [1] = (arr_33 [i_9]);
    }
    /* vectorizable */
    for (int i_10 = 1; i_10 < 21;i_10 += 1) /* same iter space */
    {

        for (int i_11 = 2; i_11 < 21;i_11 += 1)
        {
            arr_42 [i_10] [i_11] = ((~(arr_41 [i_10] [i_11 - 2] [i_10 - 1])));
            arr_43 [i_10] [i_11] = 11;
        }
        var_20 *= ((((-(arr_41 [22] [i_10] [1]))) | (arr_36 [i_10 + 2] [1])));
        var_21 = (((arr_37 [i_10]) ^ (arr_37 [i_10])));

        for (int i_12 = 2; i_12 < 21;i_12 += 1) /* same iter space */
        {
            var_22 = (max(var_22, ((((arr_40 [i_12] [i_12]) ? (arr_40 [i_12] [i_12]) : (arr_40 [i_12] [i_12]))))));
            var_23 -= ((~(arr_39 [i_10 + 1])));
            var_24 = (~(arr_39 [i_10 + 1]));
            var_25 = (max(var_25, (((~(arr_38 [i_12 + 1] [i_10 - 1]))))));
            arr_46 [i_10] [i_10] = (var_7 == var_3);
        }
        for (int i_13 = 2; i_13 < 21;i_13 += 1) /* same iter space */
        {
            var_26 ^= (arr_45 [1] [i_10 + 2] [i_10 + 1]);
            arr_49 [i_10] [i_13 + 2] [i_10] = (arr_48 [i_10]);

            for (int i_14 = 0; i_14 < 23;i_14 += 1) /* same iter space */
            {
                var_27 = (max(var_27, (arr_47 [i_10] [i_10 - 1] [i_13 - 1])));
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 23;i_15 += 1)
                {
                    for (int i_16 = 3; i_16 < 20;i_16 += 1)
                    {
                        {
                            var_28 += var_0;
                            var_29 -= var_3;
                        }
                    }
                }
            }
            for (int i_17 = 0; i_17 < 23;i_17 += 1) /* same iter space */
            {
                var_30 ^= (((arr_51 [i_10] [i_10 + 2] [i_17] [i_13 - 2]) ? (arr_36 [i_13] [i_13]) : (arr_39 [i_10 + 1])));
                var_31 = (max(var_31, ((((arr_47 [8] [i_13 + 1] [1]) >> (((arr_47 [i_13 - 1] [i_13 + 1] [i_17]) - 2838)))))));
                arr_60 [i_10] [i_10] [i_10] [i_10] = 48676;
                var_32 = ((var_3 ? (arr_54 [i_10] [i_13 - 2]) : (((arr_58 [i_10 + 2] [i_10]) ? (arr_38 [i_10] [i_10]) : (arr_47 [i_10] [i_10] [i_10])))));
            }
            var_33 = (min(var_33, (arr_55 [i_13 + 2] [i_13 - 2] [i_10 - 1] [i_10 + 2])));
        }
    }
    for (int i_18 = 1; i_18 < 21;i_18 += 1) /* same iter space */
    {
        arr_63 [i_18] = (arr_58 [15] [i_18]);
        var_34 &= (arr_59 [i_18 + 2] [i_18 + 1] [i_18 + 1] [10]);
    }
    for (int i_19 = 1; i_19 < 21;i_19 += 1) /* same iter space */
    {
        var_35 += min(165, (!-1271519982));
        var_36 ^= (((((-1271519958 ? (arr_37 [18]) : (arr_56 [i_19] [9] [i_19 + 2] [i_19 + 1] [i_19])))) ? (((((arr_62 [i_19] [0]) ? 4919721675784061161 : var_9)) - 1271519988)) : ((min((arr_41 [i_19] [i_19] [i_19]), ((var_2 ? (arr_47 [i_19 - 1] [i_19 - 1] [4]) : (arr_50 [i_19] [i_19 + 2] [i_19 - 1]))))))));
        var_37 = (max(var_37, (((arr_64 [i_19 - 1] [i_19 - 1]) ? (((arr_64 [i_19 + 1] [i_19 + 2]) ? (arr_64 [i_19 - 1] [i_19 - 1]) : (arr_64 [i_19 + 2] [i_19 + 2]))) : (((arr_64 [i_19 + 1] [i_19 + 2]) ? (arr_64 [i_19 + 2] [i_19 - 1]) : (arr_64 [i_19 - 1] [i_19 - 1])))))));
    }
    var_38 = (max(var_38, var_7));
    #pragma endscop
}
