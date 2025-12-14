/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0 + 2] = (((26317 ^ 32929) << (((((65535 ? 7806178572892189547 : 247))) - 7806178572892189538))));

        for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
        {
            var_18 = ((((((var_13 % var_0) ? (max(var_8, var_16)) : var_8))) ? (min((7806178572892189546 / var_13), 6105)) : (((7806178572892189547 ? (arr_5 [i_0 - 1] [i_0 + 2]) : 131071)))));
            var_19 = (max(var_19, ((((((arr_4 [20]) ? 7806178572892189556 : (arr_5 [i_0 + 2] [i_0 - 1]))) != (max((arr_4 [10]), (arr_1 [i_0 + 1]))))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_20 += var_13;
                            var_21 *= ((((-297091695 && (arr_11 [i_5]))) ? (-1 && var_5) : (arr_16 [i_0] [i_2] [i_4 - 1] [i_4 - 1] [i_0])));
                        }
                    }
                }
            }
            var_22 = (((arr_16 [i_2] [i_2] [i_2] [5] [i_2]) ? 9223372036854775807 : (((var_15 ? 11 : var_9)))));
        }
        arr_18 [i_0] = ((((var_2 | -8218) ? -32080 : (arr_6 [i_0]))));
        var_23 = ((var_17 == ((max(-7806178572892189538, (((-1 == (arr_16 [i_0] [i_0] [i_0 + 2] [20] [i_0])))))))));
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        var_24 = (!var_13);
        var_25 = ((((arr_1 [i_6]) ? (arr_5 [i_6] [i_6]) : (arr_15 [i_6] [i_6] [i_6]))));
        var_26 -= (((var_11 % var_9) ? ((((arr_6 [i_6]) + (arr_6 [i_6])))) : 2717054646));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_27 = ((252 << (((7806178572892189549 | 44539) - 7806178572892225523))));
        var_28 = 3639389196;
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                {
                    arr_29 [i_7] [i_7] [i_8] &= (min(55608, (((arr_12 [i_7] [i_8]) ? (arr_12 [i_7] [i_7]) : 7806178572892189537))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 12;i_11 += 1)
                        {
                            {
                                var_29 += 1577912672;
                                var_30 = (max(var_30, ((min(((-32070 ? 1782058242 : (arr_12 [i_7] [8]))), -6822)))));
                            }
                        }
                    }
                }
            }
        }
        var_31 = ((-1 ? 20 : (arr_0 [i_7] [i_7])));
    }
    var_32 -= (((32069 ? (!var_11) : var_16)));
    var_33 = ((((((35648 ? 40507 : var_2)) / var_8)) != (!var_9)));
    #pragma endscop
}
