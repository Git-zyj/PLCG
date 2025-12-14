/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_16 | (max(var_16, var_8))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 += var_1;
        arr_2 [15] = ((((((arr_1 [i_0] [12]) * (18446744073709551613 && var_13)))) ? ((max((arr_1 [i_0] [i_0]), 1127076686))) : (((~(arr_0 [i_0]))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_21 = ((!((!(arr_5 [i_0] [i_1])))));
            arr_6 [i_1] [i_1] [i_1] = max(-1127076687, 1127076686);
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        {
                            var_22 = ((((~(arr_8 [i_1] [i_0] [i_0] [i_0]))) & (((var_12 | 166) ^ (((arr_8 [i_1] [i_1] [i_2] [i_4]) | -1127076670))))));
                            var_23 += (((((arr_3 [i_2]) >> (((arr_9 [i_0] [i_1] [i_0] [i_4]) + 988385950)))) & 0));
                        }
                    }
                }
            }
            var_24 = ((!(arr_0 [i_1])));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            var_25 = (((((var_11 / var_10) <= var_5)) ? (((-1127076686 != (((!(arr_14 [i_0] [i_5] [i_0]))))))) : (((!-1) ? (min(var_8, var_17)) : ((((arr_10 [3] [i_0] [15] [i_5] [i_5] [i_5]) != 1)))))));

            /* vectorizable */
            for (int i_6 = 4; i_6 < 17;i_6 += 1)
            {
                var_26 = (((arr_10 [i_6] [i_6] [i_5] [i_0] [i_0] [i_0]) | (arr_13 [i_0] [i_6 + 1] [i_6 - 2] [i_6 - 4])));
                var_27 = (arr_5 [i_0] [i_6 - 1]);
            }
            var_28 -= ((((~(arr_16 [i_0] [i_5] [i_0])))) ? ((~(arr_16 [i_0] [i_0] [i_5]))) : ((1127076695 ^ (arr_16 [i_0] [i_0] [i_5]))));
            arr_21 [i_0] [i_0] [i_5] = ((((((var_5 ? (arr_12 [i_0]) : (arr_14 [i_0] [i_0] [i_0]))) | 124)) & (((~(arr_3 [i_0]))))));
            var_29 = (((max(((-(arr_12 [i_0]))), (((18014394214514688 ? (arr_17 [i_0]) : (arr_8 [i_0] [i_5] [i_0] [i_0])))))) > (((~((((arr_7 [i_0] [i_5]) <= var_16))))))));
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
        {
            var_30 = (min(var_30, ((((((1 ? var_17 : (max((arr_18 [i_0]), (arr_15 [i_0] [i_0] [i_0])))))) ? (((((arr_9 [i_0] [i_0] [i_0] [i_7]) ? -10 : (arr_19 [i_0] [i_0] [i_0]))) % (arr_20 [i_0] [i_7]))) : ((((!(arr_0 [i_0]))))))))));
            var_31 = (arr_17 [i_0]);
        }
    }
    #pragma endscop
}
