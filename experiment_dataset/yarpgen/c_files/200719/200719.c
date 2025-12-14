/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= (min((max((var_12 + var_11), var_5)), -var_5));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_15 |= var_2;
        arr_4 [i_0] = (~var_3);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            var_16 -= (243606102752511869 ? 128 : 112);
                            arr_18 [i_0] [i_1] [i_2] [i_4] [16] [i_4] = ((21 <= (arr_8 [i_0] [i_2] [i_3] [i_4])));
                            var_17 ^= (arr_3 [i_3]);
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_22 [13] [i_2] [i_2] [19] [i_5] &= 1033815248;
                            var_18 += -11115;
                        }
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            arr_25 [i_0] [i_1] [i_2] [i_3] [i_6] = (((arr_20 [i_0] [i_1] [i_2] [i_1] [i_3] [i_6]) % (arr_20 [i_0] [i_1] [i_2] [i_2] [i_6] [i_2])));
                            arr_26 [i_0] |= (((arr_23 [i_0] [i_1] [i_2] [i_3] [i_6] [i_0]) >= (arr_5 [i_0] [i_6])));
                            var_19 |= (arr_1 [i_0]);
                        }
                        var_20 = ((var_1 >= (~26667)));
                        var_21 = ((((((arr_17 [i_3] [i_2] [i_2] [i_2] [i_1] [i_0]) ? var_10 : 1674746081))) ? (arr_24 [i_3] [12] [i_0] [15] [i_0]) : (!-26677)));
                        var_22 = (var_13 - -var_9);
                        var_23 = ((5646792828351352946 ? var_0 : var_8));
                    }
                    var_24 |= ((~((((min(var_11, (arr_11 [i_0]))) < -1607802478)))));
                    var_25 = (min(var_25, (((((min((arr_0 [i_0]), (max(114, (arr_6 [i_0])))))) % (min((arr_21 [i_2] [i_2] [i_2] [i_1] [i_1] [17] [i_0]), 1700703734)))))));
                    var_26 = (((((26667 ? 43 : -4)) - (((arr_5 [i_0] [i_1]) % (arr_17 [i_0] [i_1] [i_2] [i_0] [i_0] [i_2]))))));
                }
            }
        }
        arr_27 [i_0] |= (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]);
        var_27 = (arr_3 [i_0]);
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {

        for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 15;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        {
                            var_28 = min(-2129191900, ((~(~73))));
                            arr_44 [i_11] [i_10] [i_9] [i_8] = (((min(var_8, 1717475090))) ? (((var_0 || (arr_20 [i_7] [i_8] [i_9] [i_10 - 1] [13] [i_9])))) : (arr_39 [i_10 - 2]));
                        }
                    }
                }
            }
            arr_45 [10] [i_7] [11] = ((((max(127, var_7))) != (arr_8 [i_7] [i_7] [i_8] [i_8])));
        }
        for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
        {
            var_29 -= arr_5 [i_7] [16];
            var_30 ^= ((~(((arr_37 [i_12] [0] [0] [0]) ? (arr_31 [i_7]) : (-127 - 1)))));
            var_31 |= arr_15 [i_12] [i_12] [i_7] [i_7];
            arr_48 [17] [i_7] = (var_12 ? (((((arr_13 [i_7] [i_12] [7] [7] [i_12] [i_7]) ? -44 : -1221311256)) | (arr_31 [i_7]))) : (max(((~(arr_42 [i_7] [0] [i_7] [i_7] [i_7]))), (~-127))));
        }
        arr_49 [i_7] = var_13;
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 18;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 18;i_14 += 1)
            {
                {
                    var_32 = 59;
                    arr_56 [i_13] [i_13] [i_14] [i_13] = (-(((((var_5 ^ (arr_2 [i_14]))) != var_9))));
                    arr_57 [i_13] [i_13] [i_13] = (arr_0 [i_7]);
                }
            }
        }
    }
    for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
    {
        arr_61 [i_15] = (arr_10 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]);
        arr_62 [i_15] = ((((107 || ((((arr_14 [i_15] [i_15] [i_15] [i_15] [i_15]) & (arr_20 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]))))))) | (min(((128 % (arr_36 [i_15] [i_15]))), (arr_53 [i_15] [i_15] [i_15]))));
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 18;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 18;i_17 += 1)
            {
                {
                    var_33 = (arr_43 [i_15] [i_16]);
                    var_34 *= (min((min((1 || 4), (((-127 - 1) && -109)))), (1697252831 || 0)));

                    for (int i_18 = 0; i_18 < 18;i_18 += 1)
                    {

                        for (int i_19 = 2; i_19 < 17;i_19 += 1) /* same iter space */
                        {
                            var_35 |= (((-89 != (min(50392720, (arr_58 [i_15] [i_15]))))));
                            var_36 &= (+(((((var_9 ? (arr_65 [17] [17] [i_17]) : var_1)) != (((70 ? (arr_42 [i_16] [i_18] [i_17] [i_16] [i_15]) : (arr_8 [i_15] [i_16] [i_15] [i_16]))))))));
                        }
                        for (int i_20 = 2; i_20 < 17;i_20 += 1) /* same iter space */
                        {
                            var_37 = (max(var_37, ((max(((var_2 ? 0 : var_8)), ((4294967294 ? (arr_47 [i_15] [i_15] [i_15]) : 1)))))));
                            var_38 |= (arr_17 [i_15] [i_16] [i_17] [i_18] [i_15] [i_18]);
                        }
                        var_39 = (min(((max((arr_46 [3] [i_18] [i_18]), var_10))), 1));

                        for (int i_21 = 3; i_21 < 17;i_21 += 1)
                        {
                            var_40 = -1353559004;
                            arr_80 [i_16] [i_16] [i_15] [i_18] [i_16] [i_16] [i_21 - 2] = var_13;
                        }
                        var_41 = -2129191900;
                        var_42 = ((((((arr_31 [i_16]) ? (arr_24 [i_15] [i_16] [i_17] [i_18] [i_18]) : (arr_9 [i_15] [i_16] [i_17] [i_18])))) ? (((((arr_31 [i_15]) < var_6)))) : (((arr_31 [i_16]) | 3812177514))));
                    }
                }
            }
        }
    }
    for (int i_22 = 0; i_22 < 1;i_22 += 1) /* same iter space */
    {
        var_43 = ((~((~(arr_63 [i_22] [12] [i_22])))));
        arr_83 [i_22] [i_22] = arr_39 [14];
    }
    #pragma endscop
}
