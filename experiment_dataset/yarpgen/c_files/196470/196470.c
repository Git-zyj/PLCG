/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196470
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((var_11 <= var_1) ? var_8 : 268369920));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [10] = (-(arr_2 [i_0]));
                var_13 = ((+(((var_4 | 4026597376) * (arr_1 [i_0] [i_1])))));
            }
        }
    }
    var_14 = var_6;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            {
                var_15 = ((~(((max(1675661052, 4026597375))))));
                var_16 -= (((((-(arr_8 [i_3 + 1])))) ? (((arr_8 [i_2]) << (268369920 - 268369901))) : (!4026597371)));
                var_17 = ((+(((~4294967275) >> (88 - 68)))));
                var_18 = var_10;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 18;i_5 += 1)
        {
            {
                var_19 = (max(((var_3 % (arr_0 [i_4] [i_5 - 1]))), (((64 && (arr_0 [i_5 - 2] [i_5 + 3]))))));

                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    arr_21 [3] [i_4] [i_6] = (arr_2 [i_6]);
                    var_20 = (max(var_20, (arr_12 [i_6] [i_5])));

                    for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                    {
                        arr_25 [i_7] [12] [i_4] [i_4] [i_5 + 2] [12] = min((-9223372036854775807 - 1), 4026597361);
                        var_21 = (max(var_21, 0));
                        var_22 = ((((((arr_23 [i_4] [i_4] [i_5 + 1] [i_7]) ? (arr_18 [21] [i_5] [i_5 + 3]) : (arr_18 [i_5] [21] [i_5 + 4])))) ? 4026597378 : ((min(183, var_6)))));

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            var_23 = (arr_26 [i_4] [i_4]);
                            arr_29 [i_5] [i_4] [i_7] [i_8] = (arr_26 [i_4] [i_5 - 1]);
                            var_24 = (((arr_19 [i_8] [i_5 + 3] [i_6]) ? (arr_19 [i_4] [i_5 - 1] [i_6]) : (arr_19 [i_4] [i_5 + 3] [i_6])));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            arr_33 [i_4] [i_4] [i_5] [i_6] [i_4] [i_9] = ((-((((arr_12 [i_4] [i_4]) || (arr_32 [i_4] [i_4] [i_4]))))));
                            arr_34 [i_4] [i_4] = (!8005959684012029595);
                        }
                    }
                    for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
                    {
                        var_25 = (arr_24 [i_10] [i_6] [i_5] [i_4]);
                        arr_37 [i_4] [i_5] [i_4] [i_6] [i_6] [i_10] = (max(((((arr_23 [i_5 + 1] [i_5] [9] [i_5]) % (arr_23 [i_5 - 2] [i_5 + 3] [i_10] [i_10])))), (arr_23 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_4])));
                    }
                    var_26 = (((((var_0 ^ var_11) | ((252 ? (arr_20 [i_6] [i_5] [i_4] [i_4]) : var_10)))) >= ((268369920 ? 2188055805272192810 : 33))));
                }
                var_27 = (max(((var_5 ? var_2 : 268369920)), (arr_23 [i_4] [i_5] [i_5 - 2] [i_5 - 2])));
            }
        }
    }
    #pragma endscop
}
