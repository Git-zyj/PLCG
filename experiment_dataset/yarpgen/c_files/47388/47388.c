/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_18 = (max((!-32599854), -0));
                            var_19 = (max(var_19, (((((~(min(32599853, -32599854))))) ? -32599854 : ((var_1 - (((var_14 && (arr_9 [i_0 + 2] [1] [5] [i_3]))))))))));
                            arr_11 [i_0] [i_1] [10] [i_3] [2] &= ((min(177, (arr_7 [i_0 + 2] [i_0 + 2] [4] [i_2]))));
                        }
                    }
                }
                var_20 = (max(10, -32599852));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 14;i_5 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            {
                                var_21 = (arr_14 [i_4 - 2] [i_4 + 1]);
                                arr_27 [i_4] [6] [i_6] [i_7 - 3] [14] [i_4] [i_4 - 2] &= ((-(arr_19 [i_7 - 1] [i_8])));
                            }
                        }
                    }
                }
                arr_28 [3] [1] [i_4] = min((((!155) * ((15811593562274653297 ? 15811593562274653297 : var_10)))), ((max((max(var_15, (arr_17 [i_5 - 1] [i_5 - 1] [i_5 - 2]))), ((min((arr_19 [2] [i_5 - 1]), -32599854)))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 2; i_9 < 21;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            {
                var_22 = ((((min(-16384, (max(var_15, var_7))))) ? ((((((~(arr_32 [i_9 + 3] [i_10] [i_10]))) + 9223372036854775807)) >> (((!(arr_32 [i_9] [i_10] [13])))))) : (((((35032 ? 16401 : 4))) ? (((min(0, 177)))) : (arr_33 [i_9 + 2])))));
                var_23 = (max((((101 >> (15811593562274653297 - 1278993510)))), ((~(max((arr_33 [i_10]), 824633720832))))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        {
                            var_24 = (((max((min(var_7, var_12)), -16384)) * (196 & 4)));
                            var_25 |= ((727632872 ? (((arr_34 [i_9 - 1] [i_9 + 1]) ? (arr_34 [i_9 - 1] [i_9 - 2]) : (arr_34 [i_9 + 2] [i_9 + 2]))) : (((max((arr_36 [i_9 + 1] [i_11] [18]), (arr_29 [i_11])))))));
                        }
                    }
                }
                arr_40 [14] [i_10] = (((-2147483647 - 1) ? 28639 : (arr_32 [i_9] [i_9 + 2] [i_9 - 2])));
            }
        }
    }
    var_26 &= ((((max(((var_11 ? -16365 : var_2)), 0))) && ((((((16373 ? var_10 : 1120518500))) ? (!var_12) : var_6)))));
    #pragma endscop
}
