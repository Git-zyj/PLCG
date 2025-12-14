/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 1;
    var_17 |= var_15;
    var_18 = (min(var_18, var_6));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 ^= (((arr_1 [i_0]) <= (((!(!0))))));
                    arr_7 [i_0] [i_0] [i_2] = (arr_0 [i_0] [16]);
                    var_20 = ((((0 ? 2297975777290601999 : (arr_1 [i_1])))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
    {
        arr_10 [i_3] = (arr_8 [i_3]);
        var_21 = -123;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
    {
        var_22 = (min(var_22, (((var_4 ? (((-2241427115978357290 == (arr_8 [i_4])))) : (arr_12 [i_4] [i_4]))))));
        arr_14 [i_4] = ((!(2241427115978357290 && var_9)));
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
    {
        arr_18 [i_5] = -1;

        /* vectorizable */
        for (int i_6 = 2; i_6 < 19;i_6 += 1)
        {
            var_23 -= ((1 == (arr_21 [i_5] [i_6 + 1] [i_6 + 1])));
            var_24 = ((0 ? (arr_15 [i_6 + 2]) : 2241427115978357289));
            var_25 ^= 0;
            arr_22 [i_5] [i_5] [i_5] = -67108863;
        }
        /* vectorizable */
        for (int i_7 = 3; i_7 < 21;i_7 += 1)
        {
            arr_26 [i_7] [1] = (arr_9 [i_7 - 1] [i_7 - 1]);

            for (int i_8 = 2; i_8 < 22;i_8 += 1)
            {
                var_26 = ((((arr_15 [1]) ? 674889262 : (arr_17 [i_5]))));
                arr_29 [i_7] [13] [i_8] [i_8] = var_3;
                arr_30 [i_7] [i_7] [i_8] [i_7] = (((arr_16 [i_5]) < (18446744073709551615 <= -1786560884)));
                var_27 ^= (((arr_13 [i_5] [i_8]) ? (arr_27 [i_5] [i_5] [i_5] [i_8]) : 0));
            }
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {

                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    var_28 = (min(var_28, 82));
                    var_29 = (((arr_8 [1]) ? (arr_23 [i_7] [i_7] [i_7]) : var_5));
                    var_30 = ((-var_5 ? (arr_32 [i_7 + 1]) : (arr_17 [1])));
                    var_31 ^= (-127 - 1);
                    var_32 |= (((arr_25 [i_5] [i_7 + 1]) == (((var_15 << (var_4 - 2483322867))))));
                }
                var_33 += (~0);
                var_34 = -2072741363;
                var_35 = (arr_36 [i_7] [i_7] [i_7 - 1] [i_7 - 2]);
            }
            arr_37 [i_5] [i_7] = ((+(((arr_24 [i_5]) + 1))));
        }
        var_36 = (max((arr_33 [i_5] [i_5] [i_5] [i_5]), -366007165));
    }
    for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
    {
        arr_40 [i_11] = 15007162195189103921;
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 20;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 20;i_13 += 1)
            {
                {
                    var_37 ^= (((var_8 == var_12) ? ((~(arr_43 [i_12] [i_13 + 1]))) : (((arr_15 [i_11]) ? 15 : 127))));
                    var_38 = (arr_42 [i_11] [i_11] [i_11]);
                    var_39 = 1;
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            {
                                var_40 -= -674889259;
                                var_41 = (((arr_13 [i_11] [6]) + ((((-1414230468 ? var_15 : (arr_32 [i_11])))))));
                                var_42 = (((((arr_44 [i_12 + 3] [i_13 + 1]) ? (arr_42 [i_12 + 1] [i_13 - 1] [i_13]) : (arr_42 [i_12 - 1] [i_13 + 3] [i_13 + 1])))) == (((((4611686018427387904 ? 67108863 : var_1))) ? var_4 : (arr_25 [18] [i_14]))));
                                var_43 = var_7;
                            }
                        }
                    }
                    var_44 = 32;
                }
            }
        }
        var_45 = ((((max(var_0, (arr_15 [i_11])))) >> (((((!13835058055282163740) ? (min(16285238883326246005, (arr_52 [i_11] [i_11] [i_11] [i_11] [i_11] [1]))) : var_2)) - 14771))));
    }
    #pragma endscop
}
