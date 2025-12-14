/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        arr_3 [i_0] = (~var_1);
        var_15 = (min(var_15, var_12));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_16 = ((((max(var_2, (arr_5 [i_1])))) ? 3549275498 : (arr_5 [i_1])));

        for (int i_2 = 3; i_2 < 17;i_2 += 1)
        {
            arr_9 [i_2] [i_2] [i_1] = (((((!((((arr_5 [i_2 + 4]) ? var_8 : -100)))))) - ((~(arr_8 [i_2 + 2] [i_2 + 2])))));
            var_17 += 16383;
        }
        for (int i_3 = 2; i_3 < 17;i_3 += 1)
        {
            var_18 = (min(var_18, var_11));
            var_19 = (arr_10 [i_1]);
            arr_13 [i_1] = (max((((((16383 ? 3639130830 : 1))) ? var_10 : (var_10 - var_5))), 264241152));
        }
        /* vectorizable */
        for (int i_4 = 1; i_4 < 20;i_4 += 1)
        {
            arr_18 [i_1] [i_4] [i_4] |= ((var_14 ? var_6 : 99));

            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                var_20 += (((arr_20 [i_1]) | (arr_11 [i_1] [i_4 - 1])));
                var_21 += (((!65) ? 2147483647 : var_7));
            }
            var_22 = ((((arr_16 [i_1] [i_1] [i_4]) | var_4)));
        }
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                {
                    var_23 = ((-((((max(-18, var_6))) ? ((max((arr_7 [i_1] [i_7]), (arr_11 [i_7] [i_6 + 4])))) : (18446744073709535232 - var_11)))));
                    var_24 = (min(((max(12, var_1))), ((((!var_11) || ((!(arr_23 [i_1] [i_6]))))))));
                }
            }
        }
    }
    var_25 = 0;
    var_26 = ((var_0 * 7274027789351491429) | 18446744073709535232);
    #pragma endscop
}
