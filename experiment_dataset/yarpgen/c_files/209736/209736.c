/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_13;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] |= (arr_1 [i_0]);
        var_20 = (((arr_0 [i_0]) % 6910));
        var_21 &= (((((-(arr_0 [i_0])))) ? 7585511803996293296 : -1917899104));
        var_22 |= (arr_0 [i_0]);
        var_23 = (max(var_23, (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_24 = (((((arr_5 [i_1]) || ((!(arr_3 [i_1]))))) && ((min((arr_4 [i_1] [i_1]), (((!(arr_3 [i_1])))))))));
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 15;i_3 += 1)
            {
                {
                    arr_10 [i_1] [i_2] [i_3 - 1] = ((!((((arr_5 [i_2 - 2]) ? 6910 : (arr_5 [i_2 - 2]))))));
                    var_25 = (arr_9 [i_1]);
                }
            }
        }
        arr_11 [i_1] = (arr_4 [i_1] [16]);
        var_26 &= ((-((((min(1165023975, 1165023975))) ? (arr_4 [0] [i_1]) : ((0 + (arr_7 [16] [i_1])))))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        arr_15 [16] &= min((arr_13 [2]), (((!(~var_8)))));
        var_27 &= (min(((~(arr_14 [i_4] [i_4]))), (((arr_14 [i_4] [i_4]) ? (arr_12 [i_4]) : (arr_14 [i_4] [i_4])))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        var_28 = (arr_7 [i_5] [i_5]);
        arr_19 [i_5] [i_5] |= (((arr_17 [13] [i_5]) && var_7));
    }
    var_29 = (min(var_29, (-30280 == var_2)));
    var_30 = (((-(var_4 * var_3))));
    #pragma endscop
}
