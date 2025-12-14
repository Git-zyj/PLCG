/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = (min(var_11, (((!((54649 || (arr_0 [14]))))))));
        arr_2 [i_0] = (max(((min((arr_0 [i_0]), (arr_1 [11])))), ((((35 ? 10886 : 10881)) ^ (arr_1 [i_0])))));
        var_12 = ((~(((arr_0 [i_0]) ? var_10 : (arr_1 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_13 &= ((var_9 ? (arr_4 [i_1]) : (arr_4 [i_1])));
        arr_6 [i_1] = (arr_1 [i_1]);
        var_14 &= var_7;
        var_15 = (((var_4 >= (arr_3 [i_1]))) ? (arr_5 [i_1]) : (((-(arr_0 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = (max(((((arr_8 [1]) > (arr_8 [i_2])))), ((-(arr_8 [i_2])))));

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_16 = (max(54643, (((~67108863) ^ (min((arr_11 [12]), 127))))));

            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {

                for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    arr_18 [i_4] &= ((((min((~var_3), var_7))) ? (arr_7 [i_2] [i_3]) : 4227858434));
                    var_17 -= 4227858432;
                }
                for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
                {
                    var_18 = (min(var_18, (arr_15 [5] [i_2] [5] [i_2])));
                    var_19 = (arr_15 [13] [i_6 - 1] [i_3] [i_6 - 1]);
                    var_20 = (max(var_20, (~127)));
                    var_21 -= ((((max((arr_15 [i_2] [i_3] [i_6 - 1] [i_6]), (arr_15 [i_2] [i_2] [i_6 - 1] [13])))) * ((-(arr_15 [i_6] [i_3] [i_6 - 1] [i_4])))));
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_22 ^= 4227858432;
                    var_23 = var_6;
                }
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    var_24 ^= 61554;
                    var_25 ^= 67108865;
                    arr_28 [0] [i_2] [0] = arr_16 [i_4];
                }
                arr_29 [i_3] [i_3] [i_3] = ((((-127 - 1) ? 0 : 3026229077)));
            }
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                arr_34 [i_2] [5] [i_2] [5] = (min((arr_23 [i_2] [3] [i_2] [i_2] [11]), (((((arr_14 [i_2] [i_2] [i_2]) && (arr_8 [i_3]))) ? (arr_15 [i_2] [i_3] [13] [i_3]) : ((10892 ? 3183328758 : var_0))))));
                var_26 = ((((arr_11 [i_2]) << (((arr_11 [i_2]) - 726589808)))) | (((((arr_16 [i_2]) && -8857)))));
            }
        }
        for (int i_10 = 1; i_10 < 13;i_10 += 1)
        {
            arr_37 [i_2] = ((10893 ? (arr_32 [i_10] [i_2]) : (arr_8 [i_2])));
            var_27 = (max(var_27, var_3));
            var_28 = ((!((((((var_10 ? 4227858413 : -1229357764))) ? 688739457 : (-1545048104 && 2857382567))))));
            var_29 ^= (min((((arr_30 [i_10 - 1] [i_10 - 1]) ? (arr_7 [i_10 + 1] [i_10 + 1]) : (arr_7 [i_10 - 1] [i_10 - 1]))), (((((54 ? (arr_20 [i_2] [i_2] [i_10]) : (arr_30 [i_10] [i_10]))) != (((arr_36 [i_2]) << (((arr_23 [i_2] [i_10] [12] [8] [4]) - 2499442711)))))))));
        }
        for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
        {
            var_30 = (max(var_30, -1229357782));
            var_31 = (min(var_31, (((((arr_10 [i_2]) | -1))))));
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 14;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 14;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        {
                            arr_51 [i_13] [i_11] [i_12] [1] [i_14] [i_11] = (~(((arr_19 [i_11] [i_11] [i_13]) ? (arr_19 [i_2] [i_11] [i_2]) : (arr_19 [i_2] [i_11] [i_2]))));
                            var_32 -= (min((min(3251905366, (arr_33 [i_2] [i_12] [7]))), ((((arr_42 [i_12] [i_12] [8]) ? -1229357744 : (arr_42 [i_12] [2] [i_12]))))));
                            arr_52 [i_2] [i_2] [i_12] [i_11] [12] = (((((arr_4 [i_13]) ? (arr_4 [i_13]) : (arr_4 [i_13])))) + var_4);
                            var_33 = (max(var_33, ((max((min((((213 ? (arr_0 [i_12]) : (arr_22 [i_13] [i_13] [i_12] [i_14] [i_14] [i_2])))), (((arr_49 [12] [i_2]) ? var_0 : (arr_38 [i_13] [i_13] [i_13]))))), (arr_47 [i_2] [12] [i_13] [12] [i_14]))))));
                        }
                    }
                }
            }
            arr_53 [i_11] [3] = (min(((-1890985956222668498 * (arr_20 [i_2] [i_11] [i_11]))), (arr_27 [i_2] [i_2] [i_11] [4] [9] [i_11])));
        }
        for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
        {
            arr_56 [i_2] [i_15] [6] = (arr_13 [i_2]);
            var_34 = (-1 * var_0);
        }
        var_35 *= (arr_15 [i_2] [i_2] [i_2] [i_2]);

        /* vectorizable */
        for (int i_16 = 0; i_16 < 14;i_16 += 1)
        {
            arr_61 [i_2] [8] [i_2] = ((10092493819836408263 % (arr_25 [i_2] [i_16] [i_16] [i_16])));
            var_36 = 49152;
            var_37 = (min(var_37, (((arr_20 [i_2] [i_2] [5]) < -var_3))));
        }
        arr_62 [7] = (((arr_38 [i_2] [i_2] [i_2]) || (arr_43 [i_2] [i_2])));
    }
    for (int i_17 = 0; i_17 < 14;i_17 += 1) /* same iter space */
    {
        var_38 |= ((-((2000456500 | (1 / var_4)))));
        arr_65 [10] [7] &= ((!(arr_64 [1])));
        var_39 = 67108861;
    }
    var_40 = var_1;
    var_41 = (max(var_41, var_10));
    #pragma endscop
}
