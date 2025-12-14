/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -var_3;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_11 += (((!(arr_1 [i_0 - 1]))));
        arr_2 [i_0] [i_0] = 117;
        var_12 = (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 16;i_1 += 1)
    {
        arr_6 [i_1] |= ((-(arr_4 [i_1 - 1] [i_1])));

        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            arr_9 [i_1] |= (((97 - (arr_3 [i_2]))));
            var_13 = (max(var_13, (arr_4 [i_1] [i_1])));
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_14 = (97 & 158);
                        var_15 = var_1;
                    }
                }
            }
        }
        var_16 = (max(var_16, 97));
        arr_14 [i_1] = -126;
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 15;i_6 += 1)
            {
                {

                    for (int i_7 = 1; i_7 < 16;i_7 += 1)
                    {
                        arr_24 [i_1] [i_1 - 3] [i_5] [i_5] [i_7] = var_5;
                        var_17 = ((-51 ? (arr_4 [i_5 + 2] [i_7 + 1]) : ((1 ? var_6 : var_1))));
                    }
                    for (int i_8 = 1; i_8 < 13;i_8 += 1)
                    {
                        var_18 ^= (((125 <= var_6) || ((((arr_26 [i_1] [12] [i_6] [i_8]) ? var_2 : var_1)))));

                        for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
                        {
                            var_19 = (max(var_19, ((((((var_1 ? var_2 : (arr_16 [i_9])))) ? -130 : -73)))));
                            var_20 = (min(var_20, (((((113 ? 0 : 158)) >> ((var_1 ? (arr_12 [i_1] [i_1] [12] [i_8]) : 153)))))));
                            var_21 = var_7;
                        }
                        for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
                        {
                            var_22 = arr_19 [i_10] [i_1 - 2];
                            var_23 ^= ((~(arr_12 [i_1] [i_5] [i_6 - 4] [i_6])));
                        }
                    }
                    var_24 = -var_2;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 0;i_11 += 1)
    {

        for (int i_12 = 0; i_12 < 11;i_12 += 1)
        {
            arr_42 [i_11 + 1] [i_12] = -var_6;
            var_25 = (min(var_25, (arr_18 [i_11] [i_12] [2])));
            var_26 = ((~((-(arr_41 [i_11] [i_11])))));
            arr_43 [i_11 + 1] = (((~-4087036794325784265) - (arr_20 [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11 + 1])));
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 11;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    {
                        var_27 = (max(var_27, ((((arr_5 [i_14]) % -126)))));
                        var_28 = (((arr_11 [i_11] [i_11 + 1] [i_13] [i_14]) ? (arr_11 [i_11] [i_11 + 1] [i_13] [i_14]) : (arr_11 [i_11] [i_11 + 1] [i_13] [i_14])));
                        var_29 = (min(var_29, ((((arr_39 [i_11 + 1] [i_11 + 1] [i_11]) ? var_5 : (arr_33 [5] [i_12] [i_13] [2] [i_12]))))));
                    }
                }
            }
        }
        for (int i_15 = 0; i_15 < 11;i_15 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 11;i_16 += 1)
            {
                for (int i_17 = 4; i_17 < 9;i_17 += 1)
                {
                    {
                        var_30 = (arr_36 [i_15]);
                        var_31 = var_1;
                        var_32 &= ((125 + ((17798877466205903298 << (-49 + 93)))));
                    }
                }
            }
            var_33 = (min(var_33, ((var_2 ? var_3 : ((((arr_32 [i_11] [i_11] [i_11] [i_11] [i_11 + 1]) ? 227 : 255)))))));
        }
        for (int i_18 = 0; i_18 < 11;i_18 += 1) /* same iter space */
        {
            arr_59 [i_18] [i_18] = (((((var_6 ? (arr_11 [i_18] [i_18] [i_11] [i_18]) : var_7))) ? -1 : (((-(arr_26 [i_11] [i_18] [i_11] [i_18]))))));
            arr_60 [i_11] [5] [5] = (!var_0);

            for (int i_19 = 0; i_19 < 11;i_19 += 1)
            {
                arr_63 [i_19] = ((!(arr_35 [i_18] [i_19])));
                var_34 *= ((!(~17855457511575244049)));
            }
            for (int i_20 = 0; i_20 < 11;i_20 += 1) /* same iter space */
            {
                arr_67 [i_11] [i_11] [i_11] [i_20] = (208 & var_6);
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 11;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 11;i_22 += 1)
                    {
                        {
                            var_35 = (97 > -7519537735871191850);
                            var_36 *= ((~(((arr_32 [i_11 + 1] [i_11] [i_11] [i_11] [i_11 + 1]) ? var_1 : var_1))));
                        }
                    }
                }
            }
            for (int i_23 = 0; i_23 < 11;i_23 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_24 = 2; i_24 < 7;i_24 += 1)
                {
                    for (int i_25 = 0; i_25 < 11;i_25 += 1)
                    {
                        {
                            arr_81 [i_24] [i_18] [i_24] [i_18] [i_24] = ((2976473262214502802 ? 0 : (5 > var_9)));
                            arr_82 [i_11] [4] [i_11] [i_24] [i_11] &= 4181342916222317222;
                        }
                    }
                }
                arr_83 [i_11] [i_11] [i_18] [i_11] = (~523807484861196823);
                arr_84 [i_11 + 1] = (arr_1 [i_11]);
                var_37 &= 126;
            }
        }
        arr_85 [i_11] [i_11 + 1] = arr_70 [0] [i_11];
    }
    /* LoopNest 2 */
    for (int i_26 = 0; i_26 < 19;i_26 += 1)
    {
        for (int i_27 = 0; i_27 < 19;i_27 += 1)
        {
            {
                var_38 = arr_91 [i_26] [14] [17];
                var_39 = (min(var_39, (var_3 + 2464236175)));
                arr_92 [i_27] |= ((!((((arr_90 [i_26]) ? var_9 : (arr_90 [i_26]))))));
            }
        }
    }
    var_40 = (max(var_40, ((((((max(var_5, (max(var_7, var_4)))))) != var_9)))));
    #pragma endscop
}
