/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((279046284 ? var_17 : var_2));
    var_21 = (min(((max(var_5, var_16))), (18446744073709551615 + var_9)));
    var_22 = (max(var_22, var_2));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_23 = ((var_16 ? (((arr_7 [i_1] [i_1 - 1] [i_1]) * (arr_7 [i_1] [i_1 + 1] [i_1]))) : (~782076201)));
                    var_24 = 2265;
                    arr_11 [i_0] [i_1] [23] = ((((((arr_0 [i_0]) - (arr_7 [i_0 + 1] [i_0 + 1] [i_1 + 1])))) ? ((var_7 ? (arr_0 [i_0]) : var_6)) : (arr_9 [i_0 + 1])));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 23;i_4 += 1)
            {
                {
                    var_25 = 18446744073709551615;
                    var_26 = max(((((var_13 ? (arr_7 [i_0] [i_0] [2]) : 0)) ^ (min(var_4, 18446744073709551615)))), (-1776693142 && 0));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                {
                    var_27 &= ((arr_0 [4]) ? 1 : -87);
                    var_28 -= 766903912;
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 24;i_8 += 1)
                        {
                            {
                                var_29 = (arr_5 [i_0] [i_0] [3]);
                                var_30 = var_17;
                            }
                        }
                    }
                    var_31 = (max(-462910201, (((arr_3 [18] [i_6 - 1]) ? -1 : 1))));
                }
            }
        }
    }
    #pragma endscop
}
