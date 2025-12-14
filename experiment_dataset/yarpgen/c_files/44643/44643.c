/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= (max(10546980985730006044, (max((~7899763087979545571), var_12))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [13] [i_1] [i_0] = (((7899763087979545583 ? ((min(-75, -125972319))) : (arr_6 [i_0 - 1] [i_0]))) & (((((arr_0 [i_0 - 1]) != (arr_4 [i_0 - 1]))))));
                            var_20 ^= -2119437584;
                            arr_10 [11] [i_1] [i_2] [i_0] = (arr_6 [i_0 + 1] [i_0 + 1]);
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 2; i_4 < 21;i_4 += 1)
                {
                    var_21 = (max(var_21, var_18));
                    arr_13 [i_0] [16] [i_0] = var_13;
                    var_22 *= (arr_3 [i_1] [i_1]);
                }
                arr_14 [i_0] = (!7899763087979545572);
                var_23 = ((!(((-(arr_8 [i_0 - 1]))))));

                for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                {
                    var_24 -= (((((7899763087979545571 ? (arr_11 [i_0] [i_1] [i_1] [i_1]) : 5553812783853053724)) << (10546980985730006046 - 10546980985730006042))));
                    var_25 = (max(var_25, ((((arr_2 [7]) ? (min(((425610570 ? 10546980985730006044 : 10546980985730006043)), (((1499597342 > (arr_5 [i_0 + 1])))))) : (arr_15 [i_5] [i_1] [i_5]))))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                {
                    var_26 = (max(var_26, (((!(arr_11 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 1]))))));
                    arr_19 [i_0] [i_0] = 2119437588;
                }
                for (int i_7 = 1; i_7 < 20;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 4; i_9 < 18;i_9 += 1)
                        {
                            {
                                var_27 = (min(var_27, ((max(-72, 10546980985730006033)))));
                                var_28 = ((-(arr_3 [i_7 - 1] [i_0])));
                            }
                        }
                    }
                    arr_28 [i_0] [i_0] [i_0] [i_7] = (arr_22 [1] [i_1] [i_1] [i_1] [i_1] [i_1]);
                    var_29 = (max(var_29, 792265166682679050));
                    var_30 = (arr_2 [i_0 + 1]);
                }
            }
        }
    }
    #pragma endscop
}
