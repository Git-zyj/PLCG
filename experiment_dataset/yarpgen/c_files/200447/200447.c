/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 69;
    var_13 = (max(var_13, var_7));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = 3458568720928037414;
        arr_3 [i_0 + 1] = (((arr_1 [i_0 + 2] [i_0 + 1]) ? (arr_1 [i_0 + 2] [i_0 + 2]) : (arr_1 [i_0 - 2] [i_0 + 2])));
        arr_4 [i_0] = (((((arr_0 [i_0]) || (arr_0 [i_0])))) >= (((arr_0 [i_0]) % (arr_1 [i_0] [i_0 + 2]))));
    }
    for (int i_1 = 4; i_1 < 14;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = ((((max(-3458568720928037414, 0) | 3458568720928037414))));
        var_14 = (i_1 % 2 == 0) ? (((((((((arr_0 [i_1]) / (arr_0 [i_1]))) <= (arr_5 [i_1 - 4] [i_1])))) + (((((arr_5 [i_1] [i_1]) ? (arr_0 [i_1]) : (arr_1 [i_1] [i_1]))) >> ((((18565 ? (arr_5 [i_1 - 3] [i_1]) : 18446744073709551608)) - 18807))))))) : (((((((((arr_0 [i_1]) / (arr_0 [i_1]))) <= (arr_5 [i_1 - 4] [i_1])))) + (((((arr_5 [i_1] [i_1]) ? (arr_0 [i_1]) : (arr_1 [i_1] [i_1]))) >> ((((((18565 ? (arr_5 [i_1 - 3] [i_1]) : 18446744073709551608)) - 18807)) - 3301)))))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                {
                    arr_13 [i_1] [i_2] [i_3 - 1] = (((arr_9 [i_1 + 1] [i_1 + 1] [i_1 - 2]) ? ((((min(-78, 3458568720928037432)) <= 5998))) : ((-(((arr_9 [13] [13] [i_3 + 2]) ? -47 : 1))))));
                    var_15 = (max(var_15, (((-((min(16384, (-32767 - 1)))))))));
                    arr_14 [i_1] [i_1] [i_3 + 2] = (arr_9 [i_1] [11] [i_3]);
                    arr_15 [i_1] [i_2 + 1] [i_2 - 1] [i_3] = (((((((0 != (arr_6 [i_1]))) ? (arr_10 [i_1] [i_1] [i_2] [i_2]) : 32767))) ? (arr_10 [i_1] [i_1 - 4] [i_3] [i_2 + 1]) : (((((((-3458568720928037415 ? 11519 : (arr_6 [i_1])))) > (((arr_6 [i_1]) ? (arr_9 [i_1] [i_2] [3]) : 21))))))));
                }
            }
        }
        var_16 = (max(var_16, (arr_11 [i_1 - 1])));

        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            arr_20 [i_1] = (((((arr_5 [i_1] [i_1]) ? ((1 ? (arr_6 [i_1]) : 18565)) : (~42))) | (((arr_12 [i_1 - 2] [i_1] [i_4]) & (arr_12 [i_1 + 1] [i_1] [i_4])))));
            var_17 = -3458568720928037406;
        }
    }
    var_18 = ((var_2 ? (min((var_3 / 10085), (((var_5 ? -28957 : var_10))))) : (((var_3 >= 1) ? (min(1, var_5)) : var_10))));
    #pragma endscop
}
