/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((min((((var_13 ? var_11 : var_4))), (1503234386 - var_12))) - (((min(var_13, (min(var_13, var_11))))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_16 = ((((((arr_9 [i_2 + 2] [i_1 + 2] [5] [i_1 + 2]) / var_8))) ? (min(var_7, 5837648392167624526)) : (18446744073709551615 > var_0)));
                    var_17 = (min((((((arr_3 [i_2 + 2]) + 9223372036854775807)) << (((((arr_3 [i_2 + 1]) + 3119842198288295698)) - 36)))), ((max((((arr_6 [i_0] [0]) ? (arr_2 [i_0] [7]) : (arr_4 [12] [i_0]))), var_6)))));
                }
            }
        }
        var_18 = (((((min((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_0]))))) < (max((23 < 4227858432), (((arr_8 [i_0] [i_0] [i_0] [i_0]) ? -4173769654800639665 : (arr_1 [i_0] [i_0])))))));
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        arr_13 [i_3] = ((((67108850 ? var_1 : (arr_10 [i_3]))) | (max(4227858451, (arr_10 [i_3])))));
        var_19 = ((~((49 ? var_3 : (arr_11 [i_3])))));
    }
    /* vectorizable */
    for (int i_4 = 4; i_4 < 8;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
            {
                var_20 = (min(var_20, (arr_3 [i_4 - 3])));
                var_21 = (arr_2 [i_4 - 4] [i_4 + 1]);
            }
            for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
            {
                var_22 = (!9223372036854775807);
                arr_22 [i_7] [i_7] = (((arr_17 [5] [i_7] [i_4 - 2]) ? ((((!(arr_18 [i_4] [i_5] [i_7]))))) : (arr_19 [i_4] [i_4] [i_4 + 2])));
            }
            var_23 = (~var_6);
        }
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            arr_25 [5] = (((arr_19 [i_4 - 1] [i_4 - 2] [i_4 - 2]) / (((arr_2 [i_4 - 4] [i_4 - 4]) ? var_9 : var_3))));
            var_24 = (min(var_24, ((((arr_0 [i_8]) ? 2458440185956811474 : ((2241129602 - (arr_14 [i_4]))))))));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    {

                        for (int i_11 = 2; i_11 < 9;i_11 += 1)
                        {
                            arr_33 [i_8] [i_8] [i_8] [i_8] &= var_14;
                            var_25 = ((~(arr_17 [i_11 - 1] [i_11] [i_11 + 1])));
                            arr_34 [i_9] [i_9] [i_9] = (~4227858445);
                            arr_35 [i_4] [i_9] [i_9] = ((arr_0 [i_4]) | (arr_0 [i_9]));
                        }
                        for (int i_12 = 1; i_12 < 9;i_12 += 1)
                        {
                            arr_38 [i_4 + 2] [i_8] [i_9] [i_10] [i_10] = (((arr_8 [i_4] [i_4 + 2] [i_10] [i_12]) ? (arr_8 [i_4] [i_4 - 2] [i_12] [i_12]) : (arr_8 [i_4] [i_4 - 1] [i_8] [i_12])));
                            var_26 = -9223372036854775786;
                            arr_39 [i_4 - 3] [i_8] [i_9] [i_9] [i_10] [i_12 + 1] = 67108866;
                        }

                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            arr_43 [i_8] &= (((arr_12 [i_4 - 2]) != 6700883305901052468));
                            var_27 = 0;
                        }
                        for (int i_14 = 2; i_14 < 8;i_14 += 1)
                        {
                            var_28 = (arr_36 [9] [i_9]);
                            var_29 = ((+((1 ? (arr_6 [i_4] [i_8]) : (arr_42 [i_9])))));
                        }
                        for (int i_15 = 0; i_15 < 10;i_15 += 1)
                        {
                            var_30 = (min(var_30, (((((((arr_12 [i_10]) - (arr_42 [i_8])))) ? (((arr_24 [i_4] [i_4] [i_9]) % var_5)) : -41)))));
                            arr_50 [1] [i_8] [i_15] |= 4294967295;
                            var_31 = (((arr_9 [i_8] [i_9] [i_10] [i_15]) << 1));
                            var_32 = 1740941847;
                            var_33 &= (!4294967295);
                        }
                        var_34 |= (18 && -1);
                    }
                }
            }
            arr_51 [i_4] [i_8] = (((arr_12 [i_4]) & (arr_10 [i_4 - 2])));
        }
        for (int i_16 = 2; i_16 < 6;i_16 += 1) /* same iter space */
        {
            var_35 = (((arr_1 [i_4 - 4] [i_16 - 1]) ? (((arr_20 [6] [i_16 + 4] [i_16]) ? (arr_3 [i_4]) : 67108850)) : -9223372036854775786));
            arr_56 [i_16] = -1;
        }
        for (int i_17 = 2; i_17 < 6;i_17 += 1) /* same iter space */
        {
            var_36 = ((var_3 ^ (arr_36 [i_17] [i_17])));
            var_37 += (((arr_5 [i_4] [i_4]) ? (771121616 / var_2) : var_0));
            arr_61 [i_4] [i_17] = ((-(arr_5 [i_4 + 2] [i_17 - 1])));
        }
        var_38 |= ((((var_4 / (arr_45 [i_4] [1] [i_4] [i_4] [i_4]))) % (arr_12 [i_4 + 2])));
    }
    /* LoopNest 2 */
    for (int i_18 = 0; i_18 < 21;i_18 += 1)
    {
        for (int i_19 = 0; i_19 < 1;i_19 += 1)
        {
            {
                var_39 = 9223372036854775807;
                arr_66 [i_19] = (max((((var_5 ? var_1 : var_2))), (((arr_62 [i_19]) + (arr_5 [i_18] [i_19])))));
            }
        }
    }
    var_40 = (max(var_40, (~var_4)));
    var_41 = 255;
    #pragma endscop
}
