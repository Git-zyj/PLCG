/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, ((((max((var_7 * var_11), ((var_1 ? var_4 : -30741)))) <= ((var_0 ? ((max(var_1, 30740))) : -var_5)))))));
    var_13 = var_2;

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_2] [i_0] = (((arr_10 [i_2] [i_2] [i_2]) ? (arr_8 [i_2 - 1]) : (min((((arr_0 [i_0] [i_1]) * 30741)), (arr_8 [i_0 - 1])))));
                        var_14 = ((-(max((arr_1 [i_2]), (5626 + -30741)))));
                    }
                }
            }

            for (int i_4 = 2; i_4 < 10;i_4 += 1)
            {
                var_15 = ((((((arr_8 [i_4]) ? (-30741 * var_5) : ((min(32767, (arr_13 [i_0] [i_4] [i_4]))))))) ? var_10 : ((var_8 ? (arr_16 [i_4] [i_0] [i_0] [i_4]) : (((arr_3 [12] [i_1]) & (arr_0 [i_0] [0])))))));
                var_16 = (min(var_16, 9515));

                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4] = ((((((arr_18 [i_4] [i_1] [i_4]) ? ((32767 ? 4240 : (arr_2 [2]))) : 30740))) ? (arr_7 [i_4]) : ((32767 ? (arr_9 [i_0] [i_0 + 1] [i_4] [i_4 + 2] [i_4 + 3]) : (arr_9 [i_0 + 2] [i_0 + 2] [i_4] [i_4 - 2] [i_4 + 3])))));
                    arr_22 [i_4] = (!18680);
                    var_17 = ((-(arr_14 [i_0] [i_4] [i_0 + 1] [i_4])));
                }

                for (int i_6 = 2; i_6 < 11;i_6 += 1)
                {
                    var_18 = (max(var_18, (((!((!(arr_1 [i_4 + 3]))))))));
                    var_19 = ((~((var_11 ? (arr_3 [i_6 - 1] [i_0 + 1]) : -16679))));
                    var_20 = arr_9 [i_0] [i_1] [i_4] [i_6 - 2] [i_0];
                    var_21 = ((((~(arr_11 [i_4] [i_4 + 3]))) ^ (min((~-4240), 30754))));
                    var_22 = arr_9 [i_0] [i_0 - 1] [i_4] [i_0] [i_0];
                }
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    var_23 = (((arr_13 [i_4 + 2] [i_4] [i_0 - 2]) + ((((arr_26 [i_0 - 1] [i_1] [i_4 + 3] [i_0 - 1]) <= (arr_13 [i_4 + 1] [i_4] [i_0 - 1]))))));

                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        var_24 &= (((((arr_29 [i_0] [i_0 + 1] [i_0] [i_4 - 1] [i_8]) < ((((-32767 - 1) <= (arr_23 [i_7] [i_1])))))) ? (max((arr_6 [i_8] [i_7] [i_4 - 1] [i_0 + 2]), ((var_3 ? 32767 : var_1)))) : (arr_19 [i_0 + 2])));
                        var_25 = (((((-32767 + (arr_11 [i_4] [i_0])))) ? ((max((arr_1 [i_0 + 2]), -15131))) : (((0 && 4096) ? ((min(-12987, var_7))) : var_6))));
                    }
                }
            }
            var_26 ^= -29514;
        }
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 10;i_11 += 1)
                {
                    {
                        var_27 *= -17164;
                        arr_41 [i_11] = arr_1 [10];
                        var_28 = ((~((max(4240, 32767)))));
                        var_29 = (min(-var_3, (((arr_1 [i_11 - 1]) + (arr_28 [i_11] [i_11] [i_11] [i_9] [i_11])))));
                    }
                }
            }
        }
    }

    for (int i_12 = 1; i_12 < 16;i_12 += 1) /* same iter space */
    {
        var_30 = arr_43 [i_12] [i_12];
        /* LoopNest 3 */
        for (int i_13 = 4; i_13 < 16;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 17;i_14 += 1)
            {
                for (int i_15 = 3; i_15 < 15;i_15 += 1)
                {
                    {
                        var_31 ^= (((((8192 ? -30740 : (arr_42 [i_12])))) ? (arr_51 [i_12 + 1]) : ((-(((arr_45 [i_14]) ? -8766 : var_3))))));
                        arr_53 [i_15 + 2] [i_15] [i_12] [i_12] [15] [i_12] = (((arr_44 [i_12]) ? (((arr_50 [i_12 - 1]) ? var_4 : 6554)) : var_2));
                    }
                }
            }
        }
        var_32 = (max(var_32, ((((!var_4) ? (((!(arr_50 [i_12 + 1])))) : (arr_45 [i_12]))))));
    }
    for (int i_16 = 1; i_16 < 16;i_16 += 1) /* same iter space */
    {
        arr_58 [i_16] [3] = (arr_46 [i_16] [i_16 + 1] [i_16 + 1]);
        var_33 = (((((((arr_54 [12]) + (arr_48 [12] [i_16 + 1]))) <= (((arr_49 [i_16] [i_16 - 1] [i_16] [i_16]) ? var_2 : 24311)))) ? (((((!(arr_49 [i_16] [i_16] [i_16] [i_16]))) || (((var_2 ? var_11 : (arr_45 [i_16]))))))) : var_1));
        arr_59 [i_16] [i_16 - 1] = ((((((-32767 - 1) | (~0)))) ? (arr_44 [14]) : (((!0) ? 32767 : (arr_47 [i_16 - 1])))));
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 12;i_17 += 1)
    {
        arr_64 [11] = ((((var_0 ? (arr_6 [i_17] [i_17] [i_17] [i_17]) : var_7)) + 26049));
        var_34 = (!var_11);
        var_35 = (min(var_35, (((((var_1 ? var_10 : var_1)) < (arr_30 [i_17] [i_17]))))));
        arr_65 [i_17] [i_17] = (((arr_6 [i_17] [i_17] [i_17] [i_17]) ? (var_5 ^ var_0) : (arr_49 [i_17] [i_17] [i_17] [0])));
    }
    #pragma endscop
}
