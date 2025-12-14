/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_19 = (min(var_19, ((var_4 ? var_5 : (arr_0 [10] [10])))));
                        var_20 = (min(var_20, (((var_6 / (arr_4 [0] [0] [i_0 + 2]))))));

                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            arr_12 [i_0] [i_0] = (((!-4162) ^ (arr_1 [i_4] [i_3])));
                            var_21 = (min(var_21, var_18));
                            var_22 -= (!18446744073709551615);
                            var_23 = ((!(((596983848429135709 ? (arr_2 [i_0] [i_0]) : (arr_8 [i_0 + 1] [i_1] [i_2] [i_0] [i_4]))))));
                        }
                    }
                }
            }
        }
        arr_13 [i_0] = var_10;

        for (int i_5 = 4; i_5 < 11;i_5 += 1)
        {
            arr_17 [i_0] = (arr_1 [i_5 - 2] [i_0 + 1]);

            for (int i_6 = 2; i_6 < 13;i_6 += 1)
            {
                arr_20 [i_6] [i_0] [i_6] [i_6] = ((!(((var_7 ? 596983848429135709 : var_16)))));
                var_24 -= (5288533525820017037 ^ 18);
            }
            for (int i_7 = 3; i_7 < 11;i_7 += 1)
            {
                arr_23 [i_0] = var_13;

                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    var_25 = ((var_5 ? (arr_25 [i_5] [i_5] [i_7 + 2]) : var_14));
                    var_26 ^= (!(!238));
                    arr_26 [i_0] [i_0] [i_5] [i_0] [i_0] [i_5] = var_8;
                }
                arr_27 [i_0] = (!18446744073709551613);
            }
        }
        var_27 ^= (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 1]);
        var_28 |= (arr_11 [6] [i_0 + 1] [i_0 - 1] [6]);
    }
    for (int i_9 = 2; i_9 < 12;i_9 += 1)
    {
        var_29 -= ((((!(arr_29 [i_9 - 2] [i_9 - 2]))) ? (((((3 ? (arr_29 [i_9] [i_9]) : var_14))) ? (!var_9) : var_1)) : ((((arr_28 [i_9 - 2]) && -49)))));
        var_30 = (min(var_30, (((127969496 << (1152921470247108608 - 1152921470247108608))))));
        var_31 -= var_16;
    }
    var_32 ^= var_17;
    var_33 *= (~6506096919284702414);
    #pragma endscop
}
