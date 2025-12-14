/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((1 ? (((((0 ? 0 : var_14))) ? var_15 : (!var_14))) : ((var_10 ? var_15 : ((0 ? var_16 : var_9))))));
    var_18 = ((((-((var_16 ? var_14 : 1)))) - var_15));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 += (!(((var_8 ? 1 : 0))));
        var_20 += arr_0 [i_0];
        arr_2 [i_0] = 1;
        arr_3 [1] [i_0] = ((~(~1)));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_21 = (min(var_21, var_11));
        arr_6 [i_1] = ((0 | (((arr_0 [i_1]) ? (arr_0 [i_1]) : (arr_4 [i_1])))));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_22 = 0;
            var_23 &= (((((arr_7 [i_2] [i_2]) && var_10)) ? (((((1 ? 1 : var_5))) ? var_8 : (1 ^ 1))) : 1));
            var_24 = (!var_4);
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            var_25 = (min(var_25, ((((arr_10 [i_1] [i_3 + 1]) ? (arr_8 [i_1] [i_3]) : -var_13)))));
            arr_12 [i_3 + 1] [1] |= (arr_5 [i_3 + 1]);
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 0;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        arr_24 [i_4] [1] [i_4] [i_4] = ((1 ? 0 : 1));
                        arr_25 [i_4] [i_4] [i_6 + 1] = 1;
                        arr_26 [1] [1] [i_7] [i_4] = (((~var_9) ? var_16 : 1));
                    }
                }
            }
        }
        var_26 -= (((arr_21 [i_4] [i_4] [i_4]) ? (arr_17 [i_4] [i_4] [i_4]) : var_0));
        var_27 *= (((((1 ? 0 : (arr_23 [i_4] [i_4] [i_4] [1])))) ? ((-(arr_19 [i_4] [i_4]))) : (((arr_17 [i_4] [i_4] [i_4]) ? 1 : (arr_16 [i_4] [1] [i_4])))));
        arr_27 [i_4] = (!(((var_12 ? (arr_17 [i_4] [i_4] [i_4]) : 1))));
    }
    var_28 = (min(var_28, var_15));
    #pragma endscop
}
