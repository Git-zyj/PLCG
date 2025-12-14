/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= ((var_4 ? var_3 : var_13));
    var_17 = ((~((-(((-127 - 1) + var_10))))));
    var_18 -= ((((~(~2536))) * var_13));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_19 ^= (-2536 ^ 0);

                    /* vectorizable */
                    for (int i_3 = 4; i_3 < 15;i_3 += 1)
                    {
                        var_20 = (max(var_20, 1));
                        var_21 = ((113 ? ((var_6 ? 6535 : var_0)) : (((!(arr_0 [i_2 + 3] [i_1]))))));
                        var_22 = (min(var_22, (var_0 & 127)));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        var_23 = -16202;
                        arr_10 [1] [i_0] [1] [1] [i_2 + 3] [i_4] = 58;
                        var_24 = ((var_13 <= (arr_2 [i_2 - 2] [i_2 - 1])));
                        var_25 = (max(var_25, (-92 == -2536)));
                    }
                }
            }
        }
        var_26 ^= ((var_8 ? ((((arr_4 [i_0] [i_0] [i_0] [i_0]) ? (arr_4 [i_0] [1] [i_0] [i_0]) : -1))) : (((arr_4 [i_0] [i_0] [i_0] [i_0]) ? var_12 : (arr_4 [i_0] [i_0] [i_0] [i_0])))));
        var_27 = 1;
        var_28 -= arr_6 [3] [i_0];
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
    {
        var_29 = ((!(((15447 ? -11679 : (arr_11 [i_5] [i_5]))))));
        var_30 = (max(var_30, (((((arr_11 [i_5] [i_5]) ? -28342 : 0))))));
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
    {
        arr_16 [i_6] [i_6] = (min(((~(arr_15 [i_6] [i_6]))), ((var_1 % (((arr_14 [i_6]) * var_0))))));
        var_31 -= (((-var_6 ^ ((max(-4297, -2))))));
        var_32 ^= (arr_14 [i_6]);
    }
    #pragma endscop
}
