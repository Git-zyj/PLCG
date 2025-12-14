/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 = (((((~var_9) + 2147483647)) << (((((((var_12 ? var_17 : (arr_8 [i_0] [16] [15] [i_2])))) ? (~var_14) : (arr_2 [i_0]))) - 18446744071799821633))));

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        var_20 += -5119087500226605737;
                        arr_13 [1] [i_3] [i_3] = (arr_10 [i_0] [i_1] [i_1] [i_0] [i_3] [i_1]);
                        var_21 = (max(var_21, var_4));
                        var_22 = (arr_6 [i_3]);
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_23 += (max(((((arr_0 [i_2]) >= (arr_15 [i_0] [i_1] [i_2] [i_0 + 2])))), ((-((min(-21356, (arr_7 [i_1] [i_2] [i_1]))))))));
                        var_24 = ((+((var_0 ? (arr_6 [5]) : (var_5 | 0)))));
                        var_25 = (((arr_4 [21] [i_1]) ? (max(var_6, (arr_8 [i_1] [i_1] [i_0] [i_4]))) : var_16));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    {
                        var_26 = min((((arr_9 [4] [i_5] [i_6] [i_7] [i_6] [i_6]) | (((arr_20 [i_7]) ? var_18 : var_3)))), (((!(arr_6 [i_7])))));
                        arr_24 [i_0 - 1] [i_5] [i_6] [1] [12] [i_5] = (arr_10 [i_0] [6] [i_5] [i_6] [i_7] [i_7]);
                        arr_25 [i_0] [i_5] [i_6] [i_7] = var_15;
                        var_27 = ((((min(var_7, -21356))) ? (arr_10 [i_0] [i_0] [i_5] [i_5] [1] [1]) : ((((min(var_6, var_9))) ? var_8 : ((((!(arr_6 [i_0])))))))));
                    }
                }
            }
        }
        var_28 += (((12 ? (max((arr_19 [i_0] [18]), -3031099789546773363)) : (min(9223372036854775807, (arr_1 [i_0]))))));
        var_29 -= max(var_2, var_3);
        var_30 += (max(var_1, (arr_15 [i_0] [i_0] [i_0] [i_0])));
    }
    for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
    {
        var_31 = (((arr_15 [i_8] [i_8] [i_8] [i_8]) ? (var_15 | var_14) : (((!((max(var_18, var_7))))))));
        var_32 ^= var_13;
    }
    for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                {
                    arr_37 [i_9] [i_9] [i_11] = (!12);

                    for (int i_12 = 2; i_12 < 8;i_12 += 1)
                    {
                        var_33 = ((~((((min((arr_23 [i_9]), var_12))) ? (((var_13 ? 244 : (arr_34 [i_9] [i_9] [i_11])))) : (min((arr_6 [i_9]), var_16))))));
                        var_34 -= (((~(max((arr_35 [i_9] [i_11] [i_9]), -1862362435)))));
                        var_35 &= (arr_38 [i_10]);
                        var_36 = (!var_0);
                    }
                    for (int i_13 = 0; i_13 < 10;i_13 += 1)
                    {
                        var_37 = (max(var_37, ((min(2147483647, var_10)))));
                        arr_44 [i_9] [i_11] [i_11] [i_10] [i_9] [i_9] = (var_17 ? (arr_6 [i_13]) : (max((max(var_0, (-2147483647 - 1))), 14331)));

                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 10;i_14 += 1)
                        {
                            var_38 += var_2;
                            var_39 = var_4;
                            arr_47 [i_9] [i_9] [i_10] [i_13] [7] [i_13] [i_9] = (((var_8 || var_9) || ((!(arr_6 [i_9])))));
                        }
                        var_40 &= ((((arr_43 [4] [i_13]) ? var_3 : (~var_11))) + ((((arr_16 [i_9] [i_10] [i_9]) | 6332))));

                        /* vectorizable */
                        for (int i_15 = 2; i_15 < 9;i_15 += 1)
                        {
                            arr_51 [i_9] [i_10] [i_11] [i_13] [i_15] = ((-(arr_41 [i_9] [i_10] [i_9] [i_13] [i_11])));
                            var_41 = (arr_17 [i_15] [i_9] [i_11] [i_9] [i_9] [i_9]);
                            var_42 ^= var_11;
                            var_43 = var_0;
                        }
                        for (int i_16 = 0; i_16 < 10;i_16 += 1)
                        {
                            var_44 ^= ((min((arr_26 [i_9] [i_9]), (~var_16))) ^ 197);
                            var_45 = 136;
                            var_46 = (max(var_46, (((((((min((arr_39 [i_11] [i_10] [i_11] [i_13]), var_15))) && (arr_18 [i_9] [i_11]))) ? (arr_15 [i_9] [i_9] [i_11] [i_9]) : (min((arr_54 [i_16]), ((28 ? (arr_50 [i_10] [i_10] [i_9] [1] [i_16] [i_9]) : (arr_17 [i_9] [i_9] [i_10] [i_11] [i_11] [i_16]))))))))));
                            var_47 ^= ((~(arr_38 [i_9])));
                            arr_56 [1] [i_9] [i_11] [i_13] [i_16] = (arr_54 [i_9]);
                        }
                    }
                    for (int i_17 = 0; i_17 < 10;i_17 += 1)
                    {
                        var_48 += ((((((~var_17) ? (arr_1 [i_10]) : (((-(arr_39 [i_9] [i_9] [i_11] [i_17]))))))) ? (arr_36 [i_17] [i_10]) : (((max((arr_1 [i_9]), var_10)) | (((var_11 ? (arr_32 [2] [2] [i_11]) : 127)))))));
                        var_49 -= ((0 ^ (max((arr_48 [i_11] [i_11] [i_10] [i_11]), ((var_15 << (arr_12 [i_9] [i_10] [i_11] [2] [i_10] [8])))))));
                        var_50 = -21356;

                        for (int i_18 = 1; i_18 < 8;i_18 += 1)
                        {
                            var_51 = ((-(((!(arr_26 [i_9] [i_17]))))));
                            var_52 = ((((((-1 ? (arr_50 [i_9] [i_10] [i_11] [i_11] [i_17] [i_11]) : 65))) ? var_12 : 190)));
                            var_53 = (var_1 ? 54916 : var_10);
                            var_54 = (min(((-((16015726554171084813 ^ (arr_61 [i_18] [i_17] [i_9] [i_9] [i_10] [i_9]))))), (max((arr_48 [i_9] [i_9] [i_9] [i_9]), -21356))));
                        }
                    }
                    var_55 = (max(((min(-2147483647, (((!(arr_12 [i_11] [3] [i_9] [i_9] [i_9] [i_9]))))))), (((arr_49 [i_9]) | -88))));
                }
            }
        }
        var_56 = (min(var_56, ((max(((((arr_35 [i_9] [i_9] [i_9]) ? (arr_54 [0]) : -27261))), (max(14328516092789738161, ((min(var_17, 21355))))))))));
    }
    var_57 = (!var_7);
    #pragma endscop
}
