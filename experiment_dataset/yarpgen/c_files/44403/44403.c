/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_7 [i_0] = ((max((arr_1 [i_0 - 1]), var_11)));
                arr_8 [i_0] [i_0] = ((~(((((max(var_1, (arr_0 [i_0] [i_1])))) && -42)))));
                var_16 -= (((((var_0 ? (((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_5 [i_0] [i_1]))) : 49))) ? (~2) : (52658 > 4095)));
                arr_9 [i_0] = (1 / 1);
            }
        }
    }
    var_17 = (18446744073709551615 - var_0);

    for (int i_2 = 3; i_2 < 9;i_2 += 1)
    {
        var_18 -= arr_10 [i_2];
        arr_12 [i_2] = (18446744073709551615 + 6144);
    }
    for (int i_3 = 1; i_3 < 9;i_3 += 1)
    {
        var_19 = (max(var_19, ((((!((((arr_13 [2]) + var_4)))))))));
        var_20 = (min(var_20, ((((((~(max(var_6, var_11))))) ? 52671 : (((((arr_2 [i_3]) / -1531)))))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        arr_19 [i_4] = (((arr_18 [i_4]) & (arr_18 [i_4])));
        arr_20 [i_4] [i_4] = (-4643 <= var_11);
        var_21 = (((arr_17 [i_4] [i_4]) ? (arr_17 [i_4] [i_4]) : 68));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        arr_24 [i_5] [i_5] = 1530;
        arr_25 [i_5] [i_5] = (((((min(var_11, (-1530 * 70))) + 2147483647)) >> ((-331280336 ? (arr_22 [i_5]) : (arr_22 [i_5])))));
    }
    #pragma endscop
}
