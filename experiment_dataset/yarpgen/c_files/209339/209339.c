/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_10 = (arr_1 [i_0 - 1]);

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                arr_8 [i_2 + 1] [i_0] [i_0] = (((((-1 && (arr_7 [i_0] [i_1] [i_2])))) & (arr_7 [i_0 + 1] [i_2 + 1] [i_2 + 1])));
                var_11 = var_5;
            }
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                arr_12 [i_0] [i_1] [i_3] [9] = (((((arr_0 [i_0 - 1]) - 36)) != (var_7 > var_2)));
                arr_13 [i_1] = 4941319350727524615;
                arr_14 [6] [i_1] [9] [i_3] |= (((arr_6 [i_0] [i_1] [i_0 - 1]) <= ((((arr_6 [5] [1] [i_0 - 1]) <= (arr_6 [i_0 - 1] [i_0 - 1] [i_0 + 1]))))));
            }
            var_12 = ((1 % (arr_11 [i_0] [i_0 - 1] [i_0] [i_0 - 1])));
        }
        for (int i_4 = 1; i_4 < 8;i_4 += 1) /* same iter space */
        {
            var_13 = (min(var_13, (((((((arr_11 [i_0 - 1] [i_4] [i_4 - 1] [i_4 + 1]) >= var_5))) < (((arr_11 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_4 + 2]) % (arr_11 [i_0 - 1] [i_4] [i_0] [i_4 + 1]))))))));
            var_14 = (arr_2 [i_0]);
        }
        for (int i_5 = 1; i_5 < 8;i_5 += 1) /* same iter space */
        {
            var_15 = (min(var_15, var_9));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        {
                            arr_31 [i_6] [i_6] = ((((((var_0 <= (arr_29 [i_0 + 1] [i_5 - 1] [i_5 - 1]))))) & (((arr_15 [i_6]) + (var_9 ^ 2494837109)))));
                            arr_32 [i_5] [1] [i_6] [i_5] [i_0] = (1 * 1800130195);
                            var_16 = (arr_1 [i_0]);
                        }
                    }
                }
            }
            arr_33 [i_0] [i_0] [i_0] = (((3367321945 >= -1673330505) < (arr_5 [i_0 - 1] [i_0 + 1] [i_0 - 1])));
        }
        /* vectorizable */
        for (int i_9 = 1; i_9 < 8;i_9 += 1) /* same iter space */
        {
            var_17 *= (((arr_0 [i_0]) && -12418));
            var_18 = (min(var_18, ((((arr_0 [i_0 + 1]) ^ 147)))));
        }
        var_19 *= (((arr_10 [i_0] [i_0 - 1] [i_0 - 1]) | ((((arr_10 [i_0] [i_0] [i_0 - 1]) > var_5)))));
        var_20 *= ((((((arr_0 [i_0 + 1]) <= 16))) >> (113 - 94)));
        arr_37 [i_0] &= var_6;
    }
    /* vectorizable */
    for (int i_10 = 1; i_10 < 10;i_10 += 1) /* same iter space */
    {
        arr_41 [i_10] [i_10] = ((2494837100 - (arr_18 [10])));
        arr_42 [i_10 - 1] [i_10 - 1] = (((((arr_27 [i_10] [2] [i_10] [1]) + 2147483647)) >> (-2090574448 + 2090574461)));
    }
    /* vectorizable */
    for (int i_11 = 1; i_11 < 10;i_11 += 1) /* same iter space */
    {
        arr_45 [i_11 + 1] = ((var_6 | (arr_16 [2] [i_11] [i_11])));
        var_21 = (((arr_43 [i_11]) < (var_4 == var_3)));
        arr_46 [i_11] [i_11] = (((((arr_43 [5]) >= -39)) || (arr_9 [i_11] [i_11 + 1] [i_11 - 1])));
    }
    /* vectorizable */
    for (int i_12 = 1; i_12 < 10;i_12 += 1) /* same iter space */
    {
        var_22 = ((arr_34 [0] [i_12 + 1] [i_12 + 1]) | 2);
        arr_50 [i_12] = (var_4 < 4294967284);
        arr_51 [i_12 - 1] = (arr_16 [10] [i_12 + 1] [i_12 + 1]);
    }
    var_23 += (12288548194794906334 | 91);

    for (int i_13 = 4; i_13 < 8;i_13 += 1)
    {
        arr_56 [i_13] [i_13] = (var_9 - 2046490203);
        var_24 = var_6;
        var_25 += ((((((0 == (arr_55 [i_13 + 2]))))) + (arr_55 [i_13 - 2])));
        arr_57 [i_13] = (arr_25 [i_13 - 4] [i_13] [i_13]);
    }
    /* LoopNest 2 */
    for (int i_14 = 4; i_14 < 18;i_14 += 1)
    {
        for (int i_15 = 3; i_15 < 18;i_15 += 1)
        {
            {
                var_26 = (((228 & 97) + (arr_58 [i_14 + 1])));
                arr_62 [i_15] = (arr_60 [i_14] [i_15]);
                arr_63 [i_15] = 243;
                var_27 = (arr_61 [i_14 + 1] [i_14] [i_14]);
            }
        }
    }
    var_28 = (min(var_28, var_8));
    #pragma endscop
}
