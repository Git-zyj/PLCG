/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] = var_11;
                var_19 = 268435456;
                var_20 = 4026531843;
                var_21 = (min(var_21, (arr_0 [i_1])));
            }
        }
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_7 [i_2] = ((-(arr_3 [6] [i_2])));
        var_22 = (arr_2 [1] [i_2]);
        var_23 -= ((~(arr_2 [18] [18])));
        var_24 |= ((var_12 ? ((min(23439, (arr_1 [i_2])))) : (max((arr_6 [i_2]), var_3))));
        var_25 = (arr_5 [i_2]);
    }
    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            arr_13 [i_3 + 1] [i_4] [i_3] = ((-(((-7881366888059113329 <= (arr_11 [i_4] [i_4]))))));

            for (int i_5 = 1; i_5 < 13;i_5 += 1)
            {
                arr_16 [i_5] = (arr_9 [i_3]);

                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    var_26 = 2;

                    for (int i_7 = 2; i_7 < 13;i_7 += 1)
                    {
                        var_27 = ((~(arr_15 [i_5])));
                        var_28 = ((29904 ? var_0 : (arr_1 [i_7 - 2])));
                        var_29 = (~((1 ? (arr_0 [i_6]) : var_10)));
                        arr_23 [i_5] [1] = (((arr_0 [i_3 - 1]) ? ((268435456 ? (arr_17 [2]) : 4026531849)) : (arr_17 [i_7])));
                    }
                    for (int i_8 = 1; i_8 < 12;i_8 += 1)
                    {
                        var_30 = (min(var_30, ((((((881437429 ? 35614 : 1725258061))) ? (arr_2 [i_3] [i_8]) : -var_5)))));
                        arr_26 [i_5] [i_6] [i_6] [i_6] = 1023;
                    }
                    arr_27 [1] [i_3] [i_3] [i_5] [i_3] [i_5] = 5971448987193813542;
                    arr_28 [i_5] [10] [6] [i_5] [10] = 1;
                }
                var_31 = 1;
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        {
                            var_32 = (((((-(arr_32 [i_3] [i_4] [i_4] [i_4] [i_9 - 1] [i_10])))) ? 35632 : ((268435428 >> (var_12 - 14746659557565940912)))));
                            arr_34 [11] [i_5] = (((arr_9 [i_3 + 1]) ? (arr_20 [i_3 + 1] [i_3] [i_9 - 1] [i_10] [i_10] [i_5]) : (arr_33 [i_3 + 1] [i_4])));
                            var_33 -= -29897;
                        }
                    }
                }
            }
            var_34 = (((arr_22 [i_3 + 3] [i_4] [i_4] [i_4] [i_3 - 1]) == (arr_30 [i_4])));
            var_35 ^= ((arr_8 [i_3 + 3]) % (arr_8 [i_3 + 1]));
            arr_35 [i_3] [i_3] = 1;
        }
        arr_36 [11] = (((arr_10 [i_3 + 2] [11]) ? (((((arr_10 [i_3 + 2] [i_3]) >= (arr_10 [i_3 + 2] [7]))))) : (arr_10 [i_3 + 2] [0])));
        arr_37 [11] = ((!((!(arr_17 [i_3 + 1])))));
    }
    var_36 = ((+(((var_15 || var_18) & var_9))));
    var_37 = 4026531854;
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 24;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 24;i_12 += 1)
        {
            {
                arr_46 [i_11] [i_12] = ((+((((((arr_38 [i_11]) < var_15))) << (2139430986 - 2139430961)))));
                var_38 = var_15;
                var_39 = 9582365410868833691;
            }
        }
    }
    #pragma endscop
}
