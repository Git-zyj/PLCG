/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_16;
    var_21 = ((var_17 ? (max(1, 2040834499)) : var_17));
    var_22 = var_13;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_23 = (min(var_23, (!var_14)));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_4 [i_0] [i_1] [i_1] = 1;
            var_24 += ((((arr_2 [1] [i_1]) ? (arr_1 [i_1]) : 0)));
            var_25 = ((~(arr_3 [i_0] [i_1] [8])));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        {
                            var_26 = ((1 ? var_9 : ((((108 <= (arr_13 [i_0] [i_0] [3] [i_0] [i_0])))))));
                            var_27 += ((-(arr_10 [i_4] [i_3] [i_2] [i_1] [i_0])));
                            var_28 &= 116;
                        }
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
        {

            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                var_29 = 4294967295;

                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    var_30 = (var_2 ? var_3 : 2697155012);
                    arr_24 [i_7] = (((arr_22 [i_7] [i_5] [i_6] [i_5]) ? 9205535128534808154 : var_6));
                    var_31 = (min(var_31, (((~(((arr_5 [i_6]) ? 1 : var_6)))))));
                }
            }
            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                var_32 &= -49;
                var_33 = ((((((arr_0 [i_0] [i_5]) * 87))) + (arr_22 [i_8] [i_8 - 1] [i_8 - 1] [i_8])));
                var_34 *= var_15;
            }
            var_35 = (!var_16);
        }
        for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
        {
            var_36 = (((arr_12 [i_0] [i_0] [18] [i_0] [19]) && var_17));
            var_37 |= ((var_1 ? var_17 : var_5));
            var_38 = (max(var_38, (~var_10)));
        }
    }
    for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
    {
        arr_33 [i_10] [i_10] &= (((((-(max(var_7, 131071))))) ? ((((-127 - 1) || var_0))) : ((var_0 ? (arr_29 [i_10] [i_10]) : 65535))));

        /* vectorizable */
        for (int i_11 = 0; i_11 < 25;i_11 += 1)
        {
            /* LoopNest 3 */
            for (int i_12 = 2; i_12 < 22;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        {
                            var_39 = var_9;
                            var_40 = ((((arr_3 [i_10] [i_10] [i_14]) & 8388607)));
                            var_41 += ((0 ? (arr_43 [i_10] [i_11] [i_10] [i_13] [i_12 - 1]) : 870559718));
                            var_42 = -26;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 25;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 0;i_16 += 1)
                {
                    {
                        arr_53 [0] [i_11] [i_15] [i_16] = ((var_4 ? (((arr_32 [i_10] [i_15]) * var_11)) : var_4));
                        var_43 = ((~(arr_9 [i_10] [i_11] [i_15] [i_16])));
                    }
                }
            }
            var_44 *= (((((((arr_5 [18]) + 2147483647)) >> (870559718 - 870559709))) | 65535));
            var_45 = (((((arr_45 [i_10] [i_11] [4] [16] [5]) > var_14)) ? (((arr_18 [i_11]) + var_14)) : (arr_46 [i_10] [i_11] [i_10])));
            var_46 = ((!(((var_3 ? (-127 - 1) : (arr_51 [i_10] [2] [2] [2] [i_10]))))));
        }
        for (int i_17 = 0; i_17 < 25;i_17 += 1)
        {
            var_47 = (max((!var_19), (((((var_13 <= (arr_51 [i_17] [i_17] [22] [i_17] [i_10])))) + 1))));
            var_48 *= ((((min(((max((arr_5 [i_17]), 65535))), (max(-1, (arr_12 [i_10] [i_10] [i_10] [i_10] [i_17])))))) ? (~4286578684) : (min(402671612, (arr_21 [i_10] [i_17] [i_10] [i_17])))));
        }
        var_49 = ((3541067379 ? 29 : 0));
    }
    for (int i_18 = 0; i_18 < 25;i_18 += 1) /* same iter space */
    {

        for (int i_19 = 0; i_19 < 25;i_19 += 1) /* same iter space */
        {
            var_50 ^= ((((1 >= (~var_1))) || ((((var_6 ? 1 : var_15))))));
            var_51 = (((-var_4 ? ((~(arr_52 [i_18] [i_19] [i_19] [19]))) : -var_0)));
            var_52 *= max((var_5 & 3424407577), ((max(var_1, (arr_36 [i_18])))));
        }
        for (int i_20 = 0; i_20 < 25;i_20 += 1) /* same iter space */
        {
            arr_65 [i_18] = 101447234;
            var_53 |= (((max(var_16, (arr_54 [i_20] [i_20]))) <= ((max(var_2, -var_0)))));
            var_54 = max(((1 ? 36218 : 4193520061)), (max(var_0, (((0 | (arr_41 [19] [15] [20])))))));
        }
        for (int i_21 = 0; i_21 < 25;i_21 += 1)
        {
            arr_70 [i_18] [i_21] = (((~((min(var_1, (arr_3 [i_18] [1] [1])))))));
            var_55 = ((100 ? (-32767 - 1) : 31));
            var_56 *= (0 / ((max(32767, -29309))));
        }
        var_57 = (~13553);
    }
    var_58 = ((((((max(3735048080, 366936317))) ? (3692413552 / 100) : 4294967168)) & var_14));
    #pragma endscop
}
