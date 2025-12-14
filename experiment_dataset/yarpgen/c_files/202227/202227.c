/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_4));
    var_16 ^= (var_8 ? var_14 : var_9);

    for (int i_0 = 2; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_17 = ((((min((arr_1 [i_0 - 1] [i_0 + 1]), (arr_1 [i_0] [i_0 - 1])))) ? (var_14 && var_3) : var_0));
        arr_2 [i_0] [i_0] = (arr_0 [i_0 - 2] [i_0 + 1]);
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 3; i_2 < 11;i_2 += 1) /* same iter space */
        {
            var_18 ^= (max(((var_2 ^ (arr_1 [i_1 - 2] [i_1 + 1]))), (arr_1 [i_1 - 2] [i_1 + 1])));
            var_19 |= var_11;
        }
        for (int i_3 = 3; i_3 < 11;i_3 += 1) /* same iter space */
        {
            var_20 *= var_7;
            arr_14 [7] [i_1 - 1] [i_1] = ((((var_0 ? (arr_0 [i_1] [i_3 + 1]) : (var_9 - var_10))) - (((((arr_0 [i_1 + 1] [i_1 + 1]) + var_11)) + (arr_8 [i_1 + 1] [i_3])))));
            var_21 = ((-(((var_7 + 2147483647) >> (((arr_5 [i_1 + 1]) - 64798))))));
        }

        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            var_22 ^= var_12;
            arr_18 [i_4] [i_4] = ((((max((arr_3 [i_1 - 2]), (arr_3 [i_1 - 1])))) | var_3));
        }
        var_23 = var_3;
    }

    for (int i_5 = 1; i_5 < 8;i_5 += 1)
    {
        var_24 = (((min(var_2, (arr_6 [i_5]))) >> ((((0 % 18446744073709551615) != (((var_2 ? (arr_4 [i_5 + 3]) : (arr_19 [i_5])))))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                {
                    var_25 = ((-(((var_13 && ((min((arr_21 [0]), 562949953421280))))))));
                    var_26 = (max(var_26, (((!((min((((var_9 && (arr_22 [i_7])))), (arr_26 [i_5] [i_5 + 1] [i_7])))))))));
                    arr_27 [i_5] = (min(((((arr_19 [i_5]) * (arr_19 [i_5])))), (((arr_4 [0]) ? (((arr_20 [i_5 - 1]) - 5)) : (((512 >> (((arr_10 [i_6]) - 8363217375565348545)))))))));
                    var_27 &= var_13;
                }
            }
        }
        var_28 = 1;
    }
    var_29 = (((((((max(var_8, var_10))) * var_14))) != var_2));
    #pragma endscop
}
