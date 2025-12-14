/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~0);
    var_13 = (min((((min(var_2, var_11)))), (min(var_8, (((var_7 ? var_6 : var_1)))))));
    var_14 = (max(var_14, ((min(((max(var_6, var_2))), ((-((var_8 ? var_7 : var_1)))))))));
    var_15 = (min(var_15, ((((!4433230883192832) ? var_0 : var_2)))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [3] [i_0] = var_1;
        arr_3 [i_0] = ((min(var_2, ((max(var_1, var_11))))));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                var_16 = var_10;

                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    arr_10 [i_0] [i_1] [i_3] [i_3] = var_5;
                    var_17 -= var_4;
                    var_18 = var_7;
                }
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    arr_13 [i_2] [i_2] [i_2] = ((-20 ? var_7 : var_2));
                    arr_14 [i_0] = ((((var_6 ? var_1 : var_4)) >> ((((var_8 ? var_9 : var_5)) - 7790795042869637507))));
                }
            }
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                var_19 |= ((((min(((min(var_8, var_11))), var_4))) ? var_10 : (((!(var_10 & var_8))))));
                var_20 = (((var_10 ? ((min(1, 9617))) : -var_2)));

                for (int i_6 = 2; i_6 < 10;i_6 += 1)
                {
                    var_21 = ((~(((var_6 != var_3) - (min(var_3, var_9))))));

                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        var_22 ^= var_6;
                        var_23 = var_1;
                    }
                    arr_24 [i_0] [i_5] [2] [i_6] [i_6] [7] = ((((((var_1 << (var_3 - 2033512314))) << -var_11)) >> var_5));
                    var_24 = (min(var_24, var_5));
                    var_25 = var_10;
                }
            }
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {

                for (int i_9 = 2; i_9 < 10;i_9 += 1)
                {
                    var_26 = (max(((((min(var_5, var_8))) ? (var_2 >= var_9) : var_0)), var_3));
                    arr_29 [i_8] [i_8] [i_8] [i_8] [i_8] [7] = var_11;
                }
                var_27 = max((((var_5 * var_2) ? -var_4 : var_3)), (var_7 * var_11));
                arr_30 [i_0] [i_0] [i_8] = var_6;
                arr_31 [i_1] [i_8] = ((4294967276 ? 10371782397026449294 : 6));
            }
            var_28 = (min(var_28, ((((((var_10 ? ((var_7 ? var_6 : var_11)) : var_5))) ? var_6 : var_3)))));

            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                var_29 = ((((min(var_6, ((var_10 ? var_7 : var_10))))) ? (min((var_10 - var_6), (var_0 * var_6))) : ((((min(2135372671, 7224957221723456287))) ? var_0 : ((1 ? 226 : 251658240))))));
                var_30 ^= (max(4043309056, 2199022206976));

                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    arr_36 [i_0] [i_1] [i_1] [i_11] [i_1] [i_1] = var_8;
                    var_31 -= var_1;
                    arr_37 [i_0] [i_1] [i_10] [i_1] = ((+((var_5 ? (var_10 == var_0) : var_8))));
                    var_32 &= -6;
                }
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    var_33 = var_0;
                    arr_40 [i_1] [i_10] [i_12] = var_5;
                }
                var_34 = var_5;
            }
            for (int i_13 = 0; i_13 < 11;i_13 += 1)
            {
                arr_44 [i_1] = ((((var_7 ^ ((min(var_10, var_2))))) << ((((min(0, -21216))) + 21225))));
                var_35 |= (!var_2);
            }
            arr_45 [i_1] [i_1] = (((((max(var_2, var_7)))) ? ((min(var_4, var_9))) : var_11));
            var_36 = (var_4 / var_10);
        }
    }
    #pragma endscop
}
