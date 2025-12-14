/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= var_8;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (arr_0 [i_0]);

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_5 [0] [0] [i_1] = ((((min(((9223372036854775807 ? 17 : 4294967295)), ((((arr_4 [i_0]) << (((arr_1 [i_0]) - 28261)))))))) ? ((max((min((arr_3 [i_0] [i_0]), var_11)), -93))) : (min(2327405371777633474, 0))));
            var_14 = var_5;
        }
        var_15 = (((((-(arr_1 [i_0])))) ? (arr_1 [i_0]) : (arr_1 [i_0])));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_16 ^= ((-(arr_15 [i_3 - 1] [i_5])));
                        var_17 -= (min(15551, 65532));
                    }

                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        arr_19 [i_2] [i_2] [i_4] [i_2] = 34786;
                        arr_20 [i_2] [i_2] [i_4] [i_4] [i_4] = ((4754743790440559025 >> (32768 - 32722)));
                    }
                    for (int i_7 = 1; i_7 < 11;i_7 += 1) /* same iter space */
                    {
                        var_18 = -1;
                        var_19 = (max(var_19, ((min((((arr_10 [4] [i_7 + 3] [i_3 + 1]) == (arr_21 [i_3] [i_3] [i_3 - 1]))), (((arr_8 [i_2] [i_3] [i_4]) < (arr_18 [i_2] [i_2] [9]))))))));
                        arr_23 [i_2] [i_3] [9] [i_4] = (((((var_2 ? var_7 : (arr_3 [i_3 - 1] [i_3])))) ? (((arr_17 [i_3 - 1] [i_4] [i_3 - 1] [i_3 - 1]) - (arr_3 [i_3 - 1] [i_3]))) : (arr_17 [i_3 - 1] [i_4] [i_3 - 1] [i_3 - 1])));
                        var_20 = ((((((arr_9 [i_3] [i_2]) ? (arr_12 [i_7 - 1] [i_3 - 1] [i_3] [i_3]) : (arr_12 [i_7 - 1] [i_3 - 1] [1] [i_2])))) ? (arr_12 [i_7 - 1] [i_3 - 1] [10] [i_3]) : (arr_9 [i_2] [6])));
                        arr_24 [i_4] [i_3] [i_3] [i_4] [i_3] = (((-(~1))));
                    }
                    for (int i_8 = 1; i_8 < 11;i_8 += 1) /* same iter space */
                    {
                        var_21 += ((+(((arr_21 [i_3 - 1] [i_3] [i_8 - 1]) ? var_9 : (arr_8 [i_3 - 1] [i_4] [i_8 - 1])))));
                        var_22 = ((!(((min(var_7, var_8))))));
                    }
                    for (int i_9 = 1; i_9 < 11;i_9 += 1) /* same iter space */
                    {
                        arr_32 [i_3 - 1] [i_4] = (arr_10 [i_4] [i_4] [i_4]);
                        var_23 |= (((((~((min((arr_18 [i_2] [i_2] [i_2]), (arr_10 [6] [i_3] [10]))))))) ? ((~(arr_9 [i_2] [i_3 - 1]))) : -var_11));
                    }
                    var_24 = (max((((arr_13 [i_2] [i_3] [i_4] [i_2]) ? (2922700670 / -32758) : (arr_10 [i_4] [i_3 - 1] [i_3 + 1]))), (1 | var_2)));
                    arr_33 [i_2] [i_4] [i_4] = ((+((min((arr_16 [i_3 + 1] [i_3 + 1]), var_12)))));
                    var_25 = (max(var_25, -59));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                {
                    var_26 = var_10;
                    var_27 -= (min((var_11 << 0), ((min((arr_18 [i_2] [i_10] [i_11]), (arr_18 [i_2] [i_10 - 1] [i_11]))))));
                    var_28 += (min((((7783 ? var_0 : var_6))), ((min(var_3, (arr_3 [11] [i_11]))))));
                    var_29 += (((((var_0 % (arr_38 [i_2] [i_2] [i_10 - 1] [i_10 - 1])))) ? (~4294967289) : ((((!(arr_4 [7])))))));
                    var_30 = (max((((-(~var_1)))), 559865946));
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        arr_42 [i_12] = 0;
        arr_43 [i_12] = ((-(arr_25 [i_12] [i_12] [i_12] [i_12])));
        var_31 = ((~(28978 & 2249151589)));
    }
    /* LoopNest 2 */
    for (int i_13 = 2; i_13 < 11;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 13;i_14 += 1)
        {
            {
                var_32 = -4583;
                var_33 = (arr_0 [i_13 - 2]);
                arr_51 [i_14] = (min(-407741222514105174, (18446744073709551615 + 5850)));
            }
        }
    }
    #pragma endscop
}
