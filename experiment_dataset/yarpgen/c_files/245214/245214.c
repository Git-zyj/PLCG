/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((var_5 || var_8) ? (~23822) : ((23831 ? 0 : 1966384678))));

    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] [2] = min(((1 ? 1 : 17)), -var_4);
        var_16 |= max(((((arr_1 [i_0 + 1]) ^ (arr_1 [i_0 + 1])))), (min(2328582630, (var_14 ^ 2328582618))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 16;i_2 += 1) /* same iter space */
        {
            var_17 = var_6;
            var_18 = (~1966384678);
        }
        for (int i_3 = 2; i_3 < 16;i_3 += 1) /* same iter space */
        {
            var_19 = (((arr_7 [i_3]) / -1452897040246839255));
            var_20 = (((arr_4 [i_1 + 2] [i_1 - 1]) ? 224 : (arr_5 [i_3 + 2])));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_21 = var_12;
                            var_22 = 4294967295;
                            var_23 = ((var_11 ? (var_6 - 1966384678) : (((var_7 ? (arr_14 [i_6]) : (arr_12 [i_5] [i_5] [i_5]))))));
                            var_24 = -1966384672;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        var_25 = -302138494;
                        arr_28 [i_1 + 3] [i_1 - 1] [i_7] [i_1 + 4] = (!var_13);

                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            arr_32 [i_7] [i_8] [i_9] = ((((((arr_18 [i_1] [i_7] [i_8]) ? var_4 : (arr_20 [i_7])))) ? 41705 : (arr_5 [i_1])));
                            arr_33 [i_1 - 2] [0] [0] [18] [i_9] [i_8] [i_9] |= (((arr_17 [i_1 + 2]) + var_12));
                        }
                        for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
                        {
                            var_26 = (max(var_26, 26371));
                            var_27 = (arr_36 [i_10] [i_8] [i_7] [i_7] [i_1 - 2] [i_1]);
                            var_28 = var_12;
                            var_29 = ((!(((~(arr_35 [i_1] [18] [i_1] [i_1] [i_1] [i_1]))))));
                        }
                        for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
                        {
                            var_30 = (((41718 && (arr_38 [i_3 - 1] [i_3] [i_8] [i_3] [i_3]))));
                            arr_39 [i_7] [1] [i_7] [i_8] [i_11] = (!(arr_10 [i_1 + 3] [i_1 + 2] [i_1 + 3]));
                            arr_40 [i_1] [i_7] [i_1] [i_8] [i_11] = ((var_0 ? 16380 : (arr_31 [i_1 - 1] [i_3] [i_1 - 1] [i_3] [i_3 - 2])));
                            var_31 = (min(var_31, ((((arr_34 [i_1] [i_3] [i_7] [i_8] [i_11]) ? (arr_21 [i_3 - 2] [i_3 + 1] [i_3] [i_11] [i_11]) : ((((arr_6 [i_7]) ? var_1 : 74))))))));
                        }
                        for (int i_12 = 0; i_12 < 19;i_12 += 1) /* same iter space */
                        {
                            arr_45 [i_3] [10] [i_7] [i_8] [12] [i_1] [i_1 - 2] = ((!(arr_25 [i_3 - 2] [i_7] [i_3])));
                            var_32 = -31;
                        }
                        var_33 |= (((arr_16 [i_3 - 2] [i_8] [i_8] [i_8]) ? var_8 : (arr_16 [i_3 + 2] [i_8] [i_8] [i_8])));
                    }
                }
            }
        }
        for (int i_13 = 2; i_13 < 16;i_13 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 19;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 19;i_15 += 1)
                {
                    {
                        var_34 += ((!(arr_15 [i_1 + 3] [i_13] [i_14])));
                        arr_55 [i_1] [0] [i_14] [i_15] = (arr_36 [i_1] [i_1] [i_13] [i_13] [i_13] [16]);
                    }
                }
            }
            var_35 = (min(var_35, (((!(~4294967295))))));
        }
        for (int i_16 = 2; i_16 < 16;i_16 += 1) /* same iter space */
        {
            var_36 = var_10;
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 19;i_17 += 1)
            {
                for (int i_18 = 2; i_18 < 17;i_18 += 1)
                {
                    {
                        var_37 = (arr_12 [i_1 + 3] [i_16 - 1] [i_17]);
                        var_38 = ((9856205518274619036 << (((arr_58 [i_1 + 3]) + 7499))));
                        var_39 = (min(var_39, ((((arr_13 [i_1] [i_16 + 1] [i_18 - 2]) | (arr_34 [2] [i_16 + 3] [i_17] [5] [i_1]))))));
                        var_40 ^= ((~(var_4 >> 26)));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_19 = 0; i_19 < 1;i_19 += 1)
        {
            for (int i_20 = 2; i_20 < 18;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 1;i_21 += 1)
                {
                    {
                        var_41 ^= (((arr_22 [i_20 - 2] [6] [i_20 - 2]) <= (arr_22 [i_20 - 2] [0] [i_20 + 1])));
                        var_42 -= var_8;
                    }
                }
            }
        }
    }
    #pragma endscop
}
