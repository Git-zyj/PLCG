/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 17;i_4 += 1)
                    {
                        {
                            arr_12 [i_2] = (((arr_10 [i_4 - 1] [i_4 - 2] [i_4 - 1] [i_4 - 1] [i_4 + 1]) + 29));
                            arr_13 [i_2] [i_1] [i_2] [i_3] [i_4 + 1] = (arr_2 [i_0] [i_0]);
                            arr_14 [i_0] [i_1] [i_2] [i_2] [i_4] = (((arr_9 [i_2] [i_1] [i_2]) && (-77 || var_1)));
                        }
                    }
                }
            }
            var_14 *= -77;
            arr_15 [i_0] [i_1] [i_1] = ((((78 > (arr_7 [4] [i_1] [i_1] [4]))) ? (arr_9 [1] [i_0] [i_0]) : (!113)));
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 1; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        {
                            var_15 -= (-18 + var_4);
                            arr_27 [i_0] [i_0] [i_0] [0] [0] [i_0] = (247 || -91);
                            var_16 -= (((arr_25 [i_6 - 1] [i_6] [i_6 + 1] [i_6] [i_6 + 1] [i_8]) ? -0 : -74));
                            arr_28 [i_7] [i_7] [i_6] [i_0] [i_0] [i_0] = (((!1) && (arr_4 [i_6] [i_6] [i_6 - 1])));
                        }
                    }
                }
            }

            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                arr_31 [5] [i_5] [i_9] [i_0] = (((arr_11 [i_0] [i_5]) == (arr_11 [i_0] [i_9])));
                var_17 = (max(var_17, (arr_24 [i_0] [i_5] [i_0] [i_0])));
                arr_32 [i_0] [i_5] [i_9] = ((87 ? (arr_3 [i_0]) : (arr_3 [i_9])));
                arr_33 [i_0] [i_5] [i_9] = (101 ^ -8);
                arr_34 [i_0] &= -2;
            }
            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                arr_39 [i_10] [i_0] = (((arr_18 [i_0] [i_0] [i_5] [i_10]) ? 14 : (arr_35 [i_0] [13] [i_10])));
                arr_40 [i_0] [1] [i_0] = ((-1 ? var_11 : (((arr_1 [i_0]) ? 99 : -91))));
            }
            for (int i_11 = 0; i_11 < 0;i_11 += 1) /* same iter space */
            {
                arr_44 [i_0] [i_0] [i_0] [i_0] = (((-15 + 58) ? (((arr_9 [i_5] [4] [4]) ^ 29)) : 127));
                var_18 = ((1 + ((((arr_16 [i_0] [i_0]) < 1)))));
                arr_45 [i_11] = 3;
            }
            for (int i_12 = 0; i_12 < 0;i_12 += 1) /* same iter space */
            {
                arr_49 [i_0] [i_5] [i_12] = (arr_3 [i_12]);
                arr_50 [i_0] [i_0] [i_0] = ((((1 ? var_6 : (arr_8 [i_0] [i_5] [i_5] [i_12]))) ^ (arr_0 [i_12 + 1])));
                var_19 += arr_29 [i_0] [i_5] [i_12 + 1];
            }
        }
        for (int i_13 = 1; i_13 < 16;i_13 += 1)
        {
            /* LoopNest 3 */
            for (int i_14 = 0; i_14 < 18;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 18;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 18;i_16 += 1)
                    {
                        {
                            arr_61 [14] [i_15] [i_0] = (!var_13);
                            arr_62 [i_13] [i_13 - 1] [i_13] [i_13 - 1] [i_13] [1] = 114;
                            arr_63 [i_13] [i_14] [i_16] = (arr_23 [i_16] [i_13] [i_14] [i_15]);
                        }
                    }
                }
            }
            arr_64 [i_0] [i_0] = ((83 ? 1 : (arr_2 [i_13 - 1] [i_13 + 2])));
            var_20 += arr_5 [i_0] [i_13] [i_0];
        }
        var_21 = (arr_16 [i_0] [i_0]);
        /* LoopNest 3 */
        for (int i_17 = 1; i_17 < 15;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 18;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 1;i_19 += 1)
                {
                    {
                        arr_74 [i_0] = ((+((((arr_57 [i_0]) || (arr_43 [i_0] [i_0] [i_0]))))));
                        arr_75 [i_0] [i_17] [i_18] [i_19] = (((arr_20 [i_0] [i_0] [i_17 + 2] [i_17 + 3]) != (arr_20 [i_17] [i_17] [i_17 + 3] [i_17 + 2])));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_20 = 1; i_20 < 14;i_20 += 1)
        {
            for (int i_21 = 1; i_21 < 16;i_21 += 1)
            {
                {
                    arr_81 [i_21 + 2] [i_21 + 2] [i_20] [i_0] = (((arr_5 [i_0] [i_21 + 1] [i_0]) ? (arr_80 [i_0] [i_21 + 1] [i_21 - 1]) : -119));
                    arr_82 [i_20] = (((arr_16 [i_21 + 1] [i_20 + 2]) ? (arr_57 [i_20 + 3]) : ((((arr_21 [i_0] [i_0] [i_0] [i_0]) || var_2)))));
                    arr_83 [i_0] [i_20 + 4] [i_21] [i_21] = 87;
                    arr_84 [i_0] [i_0] [i_21] [i_0] = arr_8 [i_0] [i_0] [i_21] [i_21];
                }
            }
        }
    }
    var_22 ^= ((((((var_3 < -41) == var_11))) % var_13));
    var_23 = (var_11 % 17);
    #pragma endscop
}
