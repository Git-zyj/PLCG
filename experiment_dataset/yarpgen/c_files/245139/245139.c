/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_4));
    var_19 = (min(var_4, (min((((var_14 ? var_16 : var_10))), var_5))));
    var_20 = var_13;
    var_21 = ((min(((var_4 ? var_3 : var_1)), var_5)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0]) << ((((var_10 >> (((arr_0 [i_0]) - 776969440102888824)))) - 330910852))));
        arr_3 [1] = ((var_0 + 2147483647) >> (((arr_0 [i_0]) - 776969440102888799)));

        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                arr_8 [i_0] = ((-927883956345540304 != ((-240035389 ? -7 : 2147483647))));
                var_22 = (arr_0 [i_0]);
            }
            arr_9 [i_0] = (((arr_4 [i_0]) ? (arr_6 [i_1 - 3] [i_1] [i_1] [i_1 - 2]) : (arr_0 [i_0])));
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
    {
        var_23 = (((arr_5 [i_3] [i_3] [1]) ? (arr_1 [i_3]) : (((arr_0 [i_3]) + var_8))));
        var_24 = ((((((arr_10 [i_3]) ? var_9 : (arr_4 [9])))) ? ((var_12 ? var_5 : (arr_4 [7]))) : (((((arr_7 [8] [8] [i_3] [8]) != var_17))))));
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 12;i_6 += 1)
                {
                    {
                        var_25 = (arr_17 [i_5 + 1] [i_5 - 1]);
                        var_26 = (min(var_26, ((((arr_1 [i_6 + 1]) <= (arr_1 [i_3]))))));
                        var_27 = (((arr_19 [i_3] [i_3] [i_3] [i_3]) + (arr_17 [i_5 + 1] [i_4 - 1])));
                        var_28 = (var_16 ? (arr_17 [i_6 - 1] [i_5 + 1]) : (arr_13 [i_3] [i_4 - 1] [4]));
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
    {
        var_29 = (((((min((arr_6 [i_7] [i_7] [i_7] [i_7]), (arr_20 [i_7])))) ? (((var_3 >= (arr_5 [11] [i_7] [i_7])))) : ((((arr_6 [i_7] [i_7] [i_7] [i_7]) && var_10))))));
        arr_22 [0] |= ((var_10 != (arr_20 [i_7])));
        arr_23 [i_7] = (arr_10 [i_7]);
        arr_24 [i_7] = ((((3409228475 ? 27 : 566854385)) <= (((((-27669 ? 18446744073709551615 : -98))) ? (arr_15 [i_7] [i_7]) : (((arr_13 [3] [i_7] [i_7]) ? var_7 : var_4))))));
    }
    #pragma endscop
}
