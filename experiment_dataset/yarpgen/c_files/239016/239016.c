/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_16 = (min(0, 65507));
        var_17 += (((max((((arr_1 [i_0 + 3]) ? var_2 : 65507)), (((var_8 ? (arr_1 [i_0]) : 28))))) >> (-var_8 - 645161933)));
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {

            for (int i_3 = 4; i_3 < 24;i_3 += 1)
            {
                arr_8 [i_1] [i_1] = ((var_1 ? (((arr_5 [i_1]) ^ (arr_6 [i_1]))) : (arr_6 [i_1])));
                arr_9 [i_1] [i_2] [i_1] [i_1] = (arr_3 [i_3]);
                var_18 = (min(var_18, 29));
            }
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                var_19 += var_2;
                var_20 = (max(var_20, ((((((arr_2 [i_1] [i_1]) ? var_7 : var_4))) || ((((arr_3 [i_1]) ? (arr_2 [i_1 - 1] [i_1 - 1]) : (arr_10 [i_4]))))))));
            }
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                var_21 = (((arr_2 [i_1] [i_1 + 1]) ? (((arr_3 [i_1]) ? 65514 : 65514)) : (var_4 != var_15)));

                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    var_22 *= (((16801 / (arr_3 [i_6]))));
                    arr_19 [i_1] [i_1] [i_5] [i_6] = ((-(arr_14 [i_2 - 2] [i_1 - 1] [i_1 + 1] [i_1 + 1])));
                }
                for (int i_7 = 3; i_7 < 24;i_7 += 1)
                {
                    var_23 = (max(var_23, (((!(((4294967295 ? (arr_20 [i_1] [i_1] [i_1] [i_5] [i_7] [i_7]) : var_14))))))));
                    arr_22 [i_1] [i_1] [i_1] = (((arr_13 [i_1] [i_2 + 2] [i_2 - 2]) ? (arr_5 [i_1]) : (((((arr_18 [i_1] [i_1] [i_1] [i_1 - 1]) + 2147483647)) >> (((arr_13 [i_1] [0] [i_7]) - 216))))));
                }
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        var_24 -= (~29);
                        arr_27 [i_1] [i_1] [i_5] [i_2] [i_1] = var_2;
                    }
                    var_25 = (max(var_25, ((((arr_26 [i_1] [i_5] [i_2 - 1] [i_1] [i_1 + 1] [i_2] [i_5]) && (arr_26 [i_1] [i_1] [i_2 - 2] [i_5] [i_1 - 1] [i_2] [i_1]))))));
                    arr_28 [i_1] [i_1] [i_2] [i_1] = (((arr_14 [i_1] [i_1 - 1] [i_1 + 2] [i_2 + 2]) ? (arr_23 [i_8] [i_5] [i_5] [i_2] [i_1] [i_1]) : (arr_4 [i_1] [i_1] [i_1])));
                    var_26 = ((-((var_8 ? 65502 : (arr_3 [i_1])))));
                    arr_29 [i_1] [i_1] [i_1] = var_6;
                }
                arr_30 [i_1] [i_1] = (arr_18 [i_1 + 1] [i_2 + 2] [i_2 + 3] [i_2 + 3]);
                arr_31 [i_1] = (~1);
            }
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                var_27 = (!var_15);
                var_28 = 1;
                arr_34 [i_1] [i_2 + 1] [i_1] = 22;
            }
            var_29 = ((-(arr_26 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 2] [i_1] [i_1 - 1])));
            var_30 = (arr_12 [i_2] [i_2 + 3] [i_1] [i_1]);
            var_31 = var_4;
            arr_35 [i_1] [i_1] = (((((var_13 ? (arr_20 [i_1] [i_1] [i_1 - 1] [i_2] [i_2] [i_2]) : (arr_15 [i_2] [i_1 - 1] [i_1])))) ? (arr_15 [i_1] [i_2] [i_2]) : (~var_11)));
        }
        for (int i_11 = 1; i_11 < 21;i_11 += 1)
        {
            var_32 = 1;
            arr_39 [i_1] [i_1] = (max((arr_16 [i_1 - 1] [i_11 + 3] [i_11 - 1] [i_11] [i_11]), ((16371 ? -32 : (arr_16 [i_1 - 1] [i_11 + 2] [i_11 + 2] [i_11 + 2] [i_11])))));
            var_33 = var_5;
        }
        arr_40 [i_1] [i_1] = (1 != 65514);
        var_34 = (arr_26 [i_1] [i_1] [i_1] [i_1] [i_1 + 1] [i_1] [i_1 + 1]);
        arr_41 [i_1] = ((!((!(((var_14 ? (arr_11 [i_1]) : 1)))))));
    }
    var_35 = var_4;
    #pragma endscop
}
