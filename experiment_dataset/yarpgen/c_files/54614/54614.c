/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 = (min(var_12, var_5));
        var_13 = ((var_2 || (arr_2 [1] [i_0])));
        arr_3 [i_0] = ((0 && (arr_2 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_6 [i_1] = ((((-(arr_4 [i_1]))) + -255));

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_14 = ((var_8 ? (arr_4 [i_1]) : (arr_4 [i_1])));

            for (int i_3 = 1; i_3 < 20;i_3 += 1)
            {
                var_15 = (((arr_10 [i_2]) ^ 4294967294));
                var_16 = 0;
            }
            var_17 = (~94);
        }
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            var_18 ^= var_1;

            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                var_19 *= 4294967295;
                var_20 = (var_10 / 58109);
                var_21 = var_1;
            }
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                var_22 = (max(var_22, ((((arr_9 [i_1] [i_4] [i_4] [i_4]) * (arr_9 [i_1] [i_4] [i_6] [8]))))));
                var_23 = 26;
            }
            var_24 = (min(var_24, ((((arr_9 [i_4] [i_4] [9] [i_1]) ? ((1 ? var_11 : 0)) : var_3)))));
        }
        for (int i_7 = 1; i_7 < 19;i_7 += 1)
        {
            var_25 = ((!(arr_22 [i_1] [i_1])));

            for (int i_8 = 1; i_8 < 21;i_8 += 1)
            {
                var_26 &= (arr_25 [i_7 + 4] [i_8 - 1] [14] [18]);
                arr_26 [19] [i_1] [i_1] [i_1] = (((((~(arr_9 [i_1] [i_7] [2] [i_8])))) ? -63 : (var_7 && 1)));
            }
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                var_27 = var_1;
                var_28 = (max(var_28, (((var_10 <= (arr_22 [i_7 - 1] [i_7 - 1]))))));
                var_29 = (min(var_29, (((~(!0))))));
            }
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 11;i_10 += 1)
    {
        arr_35 [9] = (((arr_8 [i_10]) ? -var_0 : (arr_20 [i_10] [i_10] [i_10])));
        var_30 = (min(var_30, var_3));
    }

    /* vectorizable */
    for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
    {
        var_31 = var_10;
        var_32 = (min(var_32, var_0));
        arr_39 [i_11] = ((~(arr_16 [i_11] [i_11])));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 15;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 14;i_13 += 1)
            {
                {
                    arr_44 [i_11] [i_12] = (arr_25 [i_11] [i_11] [i_11] [i_12]);
                    var_33 = (max(var_33, (((var_8 ? ((var_5 ^ (arr_21 [4]))) : (var_7 > 1401868805854554047))))));
                    var_34 = (max(var_34, (((var_0 << (-var_7 - 12858257210978307697))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 15;i_14 += 1) /* same iter space */
    {

        for (int i_15 = 1; i_15 < 12;i_15 += 1)
        {
            var_35 = (max(var_35, ((((arr_27 [0]) & (~1))))));
            arr_49 [i_14] [i_14] = (arr_13 [i_14] [i_15]);
        }
        for (int i_16 = 0; i_16 < 15;i_16 += 1)
        {
            var_36 &= var_0;
            var_37 *= (((arr_16 [i_14] [i_16]) << (((arr_37 [i_14] [i_16]) - 210410794))));
            var_38 = (max(var_38, 63));
        }
        /* LoopNest 2 */
        for (int i_17 = 1; i_17 < 14;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 15;i_18 += 1)
            {
                {
                    var_39 = var_5;
                    var_40 = var_5;
                    arr_58 [i_14] [2] [i_18] &= (((((arr_40 [7] [i_18]) <= 15311)) && var_2));
                }
            }
        }
        var_41 = 1;
    }
    for (int i_19 = 0; i_19 < 15;i_19 += 1) /* same iter space */
    {
        var_42 = (max((arr_17 [i_19] [3] [i_19] [i_19]), ((min(4294967292, -2404518142122302873)))));
        var_43 |= ((-(min((arr_10 [i_19]), var_11))));
        var_44 &= (max(-3577, (min((3 * 1), (max(3, (arr_48 [14])))))));
    }
    for (int i_20 = 0; i_20 < 22;i_20 += 1)
    {
        var_45 += (arr_20 [i_20] [i_20] [i_20]);

        for (int i_21 = 0; i_21 < 22;i_21 += 1)
        {
            var_46 ^= ((~(((arr_24 [i_20] [i_20] [i_21]) ? (arr_24 [i_20] [i_20] [i_20]) : (arr_24 [i_20] [i_21] [i_21])))));
            /* LoopNest 3 */
            for (int i_22 = 0; i_22 < 22;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 22;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 22;i_24 += 1)
                    {
                        {
                            var_47 = (min(var_47, ((((((-87 * (((arr_9 [22] [10] [i_23] [i_24]) * 0))))) ? ((((min((arr_62 [i_21]), 1))))) : (arr_25 [i_20] [i_20] [i_20] [14]))))));
                            var_48 -= (arr_5 [8]);
                        }
                    }
                }
            }
        }
        var_49 = (min(var_49, (((var_2 >> (var_11 - 94))))));
        var_50 ^= 26;
    }
    var_51 *= var_5;
    #pragma endscop
}
