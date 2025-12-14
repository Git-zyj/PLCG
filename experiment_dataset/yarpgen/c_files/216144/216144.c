/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((-((var_0 ? (var_11 && var_10) : (max(2305843008676823040, 0))))))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        var_16 = (((var_13 ? 64512 : 44484)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 24;i_2 += 1)
            {
                {
                    var_17 = ((!(arr_1 [i_2 - 1] [i_2 + 1])));
                    var_18 = (arr_4 [i_2 - 2] [i_2] [i_2 - 2]);
                }
            }
        }
        var_19 = (arr_1 [i_0] [i_0]);
        var_20 += ((0 & (-2147483647 - 1)));
        arr_6 [i_0] = (arr_2 [i_0] [i_0 + 1] [i_0 + 1]);
    }
    var_21 = (var_7 ? (min((min(1858770212, 18446744073709551608)), var_12)) : ((max(var_10, var_1))));

    /* vectorizable */
    for (int i_3 = 2; i_3 < 16;i_3 += 1)
    {
        arr_11 [i_3] = 203;

        for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
        {
            var_22 = (((arr_13 [i_4] [i_4]) ? (-2147483647 - 1) : (-1956056512 > var_0)));
            arr_15 [i_4] [6] [3] = 18446744073709551600;
        }
        for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
        {
            var_23 -= ((var_4 ? 101 : (!var_7)));

            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                var_24 = (min(var_24, ((((3744365598539056077 * (-127 - 1)))))));
                arr_20 [i_6] [i_3] [i_3] [i_3] |= (arr_8 [i_5]);
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        {
                            var_25 = 83;
                            var_26 &= -18446744073709551603;
                        }
                    }
                }
                arr_27 [i_5] [4] = ((((53 ? var_13 : 13)) & ((((arr_14 [14]) ? (arr_0 [2]) : 52)))));
                arr_28 [i_5] [i_5] [i_6] = ((~(arr_18 [i_3 + 1] [i_5])));
            }
        }
        for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
        {
            arr_31 [i_3] [3] [i_9] = (52 & 151);
            arr_32 [i_9] [i_9] = (var_8 ? (10334977487618731058 || 120) : (((!(arr_9 [i_3])))));
        }
        for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
        {
            var_27 = (min(var_27, (!var_3)));
            var_28 = (((!33550336) ? (~183) : var_2));
        }
        var_29 = ((~(-32767 - 1)));
    }
    #pragma endscop
}
