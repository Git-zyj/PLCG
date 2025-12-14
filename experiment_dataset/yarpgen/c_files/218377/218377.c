/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 1;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_15 = (min(var_15, 4393727804758436789));
        var_16 = -26404;
        var_17 ^= (arr_1 [i_0]);
        arr_3 [i_0] = ((507816290 != (arr_2 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_18 ^= 18446744073709551615;
        arr_6 [i_1 - 1] = var_1;

        for (int i_2 = 1; i_2 < 23;i_2 += 1)
        {
            var_19 = (max(var_19, (arr_8 [i_2 + 2] [i_1 - 1])));
            var_20 ^= 1006632960;
            arr_9 [i_2] [9] = (~1);
        }
        for (int i_3 = 1; i_3 < 24;i_3 += 1)
        {
            arr_12 [i_3] = ((-(-103 < 2514636848169165889)));
            var_21 = (min(var_21, (arr_4 [i_1 - 1] [i_3 + 1])));
            arr_13 [i_1] [i_3] [i_1] = ((var_4 - (arr_8 [i_1] [i_1])));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_22 = (max(var_22, var_9));
            var_23 ^= (-66 ? 0 : 78);
            var_24 = (max(var_24, var_10));
            var_25 ^= ((arr_15 [6] [i_4]) + ((-(arr_11 [i_1 - 1] [i_1 - 1] [4]))));
            var_26 = (((arr_10 [22] [i_1 - 1]) ? 405444413 : ((var_5 ? var_13 : var_11))));
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
    {
        arr_18 [i_5] = var_13;
        var_27 = (max(var_27, ((((((arr_4 [i_5] [i_5]) ^ (arr_1 [i_5]))) << (((arr_16 [i_5]) - 522566790394084442)))))));
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
    {
        arr_21 [i_6] = (min(((~(min(var_3, var_9)))), 0));
        var_28 = (arr_1 [14]);
    }
    #pragma endscop
}
