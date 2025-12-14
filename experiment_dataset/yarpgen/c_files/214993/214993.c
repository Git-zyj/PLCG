/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (arr_0 [i_0] [i_0]);
        var_15 = (max(var_15, (((-122524367 ^ (arr_1 [i_0]))))));
        var_16 = (max(var_16, ((((((arr_1 [i_0]) ? var_8 : var_2)) == (((!(arr_1 [i_0])))))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            {
                                arr_16 [i_2] [i_2] [i_5] [i_4] [i_5] [i_3] [i_5] = ((((23 ? (arr_6 [i_1] [i_2] [i_5]) : var_0)) >= (((((arr_1 [i_1]) && var_8))))));
                                arr_17 [i_1] [i_5] [i_3] [i_4] [i_3] = (!46);
                                var_17 = 4294967265;
                                var_18 = (min(var_18, -83));
                            }
                        }
                    }
                    var_19 = ((!((((((31 ? (arr_12 [i_1]) : 897051136626870085))) ? 4294967275 : (-65 | 7411401088995396580))))));
                }
            }
        }
        var_20 = var_4;
        arr_18 [i_1] [i_1] = (((arr_9 [i_1] [i_1] [i_1]) << (((((arr_1 [i_1]) + 8557976529910542054)) - 22))));
        arr_19 [i_1] = ((((((arr_11 [i_1] [i_1] [i_1] [i_1]) ? (arr_1 [i_1]) : ((3355031795 ? (arr_4 [i_1]) : (arr_11 [i_1] [i_1] [i_1] [i_1])))))) & (arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
        var_21 = (max(var_21, (32746 != 66)));
    }
    var_22 &= var_1;
    var_23 = var_4;
    var_24 = 1;
    #pragma endscop
}
