/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (-(((!var_16) ? -49 : var_12)));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_10 [2] [6] [6] [i_3] [i_3] = ((!((var_14 == (arr_5 [i_0] [i_1] [4] [i_3 - 1])))));
                        var_18 -= 69;
                    }
                }
            }
            var_19 = (max(var_19, ((min((((~-120) ? (~var_6) : ((min(-49, var_4))))), (((0 ? (((arr_1 [1] [i_1 - 2]) ? var_10 : (arr_2 [i_0 + 2] [i_0] [i_1]))) : -var_4))))))));
        }
        arr_11 [i_0] = (((((!(arr_5 [i_0 + 1] [i_0] [i_0] [i_0 - 1])))) != (!var_9)));
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        var_20 = (max(var_20, (-49 == 25)));
        var_21 *= (((((arr_12 [i_4]) ? (~1257611454100257452) : (arr_12 [i_4]))) != (((+(((arr_12 [i_4]) ? 62 : (arr_12 [i_4]))))))));
        var_22 = (~((((max((arr_12 [5]), var_5))) ? (~var_5) : 3693786145)));
        var_23 -= 32;
        arr_14 [i_4] = ((~(arr_13 [0])));
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {

        for (int i_6 = 1; i_6 < 10;i_6 += 1)
        {
            var_24 = (max(var_24, (((~(((((arr_12 [i_5]) & 77)))))))));
            var_25 = (max(var_25, (((((!(arr_16 [i_6 - 1]))) ? (((~(arr_16 [i_6 - 1])))) : 7439242911356640662)))));
            var_26 = (min(var_26, (((2147418112 && ((((arr_15 [i_6 + 2] [i_6 - 1]) ? (arr_17 [i_6 - 1] [i_6 + 1]) : 24))))))));
        }
        var_27 = (min(var_27, ((((((-(~65535)))) ? ((((var_5 ? var_14 : (arr_18 [i_5] [i_5]))) * 39)) : (~9415))))));
    }
    for (int i_7 = 4; i_7 < 10;i_7 += 1)
    {

        /* vectorizable */
        for (int i_8 = 1; i_8 < 10;i_8 += 1) /* same iter space */
        {
            arr_25 [i_8] = (((arr_12 [i_8 - 1]) == (((arr_4 [i_7] [i_8] [i_8]) ? (arr_6 [i_8] [i_7 - 4] [i_7 - 4] [i_7]) : 1))));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    {
                        var_28 = -36;
                        var_29 = -var_4;
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_11 = 4; i_11 < 10;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        {
                            var_30 = (max(var_30, (0 + var_12)));
                            var_31 = (max(var_31, (((~(((var_0 > (arr_0 [i_7])))))))));
                            arr_39 [i_13] [i_8] [9] [i_8] [i_7] = (2130783099 << 1);
                            var_32 = (max(var_32, ((~(arr_24 [i_11] [i_11])))));
                        }
                    }
                }
            }
            var_33 = (arr_9 [i_7 - 2] [i_8 - 1] [i_7 - 2] [i_8 + 1]);
        }
        for (int i_14 = 1; i_14 < 10;i_14 += 1) /* same iter space */
        {
            arr_42 [i_14 + 1] = ((((!(((arr_9 [i_7] [i_7] [i_14] [i_14]) != 65522)))) ? (((!(((var_8 ? 124 : -90)))))) : ((((((arr_37 [i_7] [i_7] [i_7] [2] [i_7] [8]) || (arr_4 [i_7] [i_7] [i_7])))) >> ((((1632615780312015188 ? var_15 : 24)) + 2098670814))))));
            arr_43 [i_7] = (((arr_18 [i_7 + 1] [i_7 + 1]) ? ((var_4 ? 24047 : var_14)) : ((~(arr_12 [i_7 - 3])))));
            arr_44 [i_7] = (((((~(arr_21 [i_7 + 1] [i_7])))) & ((1188937653 ? 49728 : 4194304))));
        }
        for (int i_15 = 1; i_15 < 10;i_15 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_16 = 3; i_16 < 8;i_16 += 1)
            {
                var_34 = (min(var_34, var_16));
                /* LoopNest 2 */
                for (int i_17 = 2; i_17 < 10;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 11;i_18 += 1)
                    {
                        {
                            var_35 = (((arr_12 [i_16 + 3]) ? (arr_12 [i_16 + 2]) : 179));
                            arr_54 [i_15] = (~2592385578);
                            var_36 ^= (-4296739867447402127 != 1);
                        }
                    }
                }
            }
            var_37 = ((-(arr_5 [i_7 - 3] [i_15] [i_7 + 1] [i_15 - 1])));
        }
        var_38 = -var_2;
        /* LoopNest 3 */
        for (int i_19 = 0; i_19 < 11;i_19 += 1)
        {
            for (int i_20 = 1; i_20 < 9;i_20 += 1)
            {
                for (int i_21 = 4; i_21 < 9;i_21 += 1)
                {
                    {
                        arr_61 [5] = -var_16;
                        var_39 = (max(var_39, (((((arr_53 [i_7]) ? (arr_53 [i_7]) : var_16))))));
                        var_40 = ((~(arr_59 [i_7 - 2] [5] [i_7] [3] [i_20 + 1] [i_21])));
                    }
                }
            }
        }
    }
    var_41 -= (((2454628834639149984 / -5800429426444542705) >= 220));
    #pragma endscop
}
