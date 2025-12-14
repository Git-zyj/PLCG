/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((3724304552 ? var_3 : var_4))) > ((var_3 ? (((min(var_12, 32767)))) : 1400136584))));
    var_19 = 32767;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_20 = ((((32736 & 1) ? ((min((arr_1 [i_1]), 60068))) : (((-32767 - 1) * 0)))));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_21 = (min((max(-21, -16457)), -32767));
                    arr_8 [i_2] [i_1] [i_0] = (min(1400136584, 39));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_22 -= (arr_6 [i_0] [i_1] [i_2]);
                                var_23 ^= max((((!(!-28)))), (max(32767, (arr_13 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4]))));
                                arr_14 [i_0] [11] [i_4] = (max(0, ((-32758 ? 1 : 16140901064495857664))));
                                var_24 = (arr_0 [i_1]);
                            }
                        }
                    }
                }
                for (int i_5 = 1; i_5 < 18;i_5 += 1) /* same iter space */
                {
                    var_25 = (((((~(((arr_12 [i_0] [i_1] [i_5 - 1]) % (arr_12 [i_5] [i_1] [i_0])))))) ? var_13 : (~2488199339)));

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        var_26 = (min(var_26, (arr_5 [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5])));
                        arr_20 [i_0] [i_0] [i_0] [i_0] [2] = ((((!(arr_2 [i_6]))) ? ((1 ^ (arr_5 [i_6] [i_5] [i_1] [i_0]))) : (arr_5 [i_5 + 1] [i_5 - 1] [i_5] [i_0])));
                        var_27 -= (arr_5 [i_6] [i_5] [i_1] [i_0]);
                    }
                }
                /* vectorizable */
                for (int i_7 = 1; i_7 < 18;i_7 += 1) /* same iter space */
                {
                    var_28 = ((0 ? ((var_9 ? -32767 : 0)) : (~0)));
                    var_29 = (((arr_15 [i_7 - 1] [i_7 - 1]) ? (arr_12 [i_7 - 1] [i_7 + 1] [i_7 - 1]) : (arr_12 [i_7 + 1] [i_7 + 1] [i_7 - 1])));
                    var_30 = 1;
                }
                arr_24 [5] [i_1] [i_0] = (arr_5 [i_0] [i_0] [i_1] [9]);
                arr_25 [i_1] = ((arr_17 [i_1] [i_1] [i_1] [18] [i_0] [i_0]) != -32767);
            }
        }
    }
    #pragma endscop
}
