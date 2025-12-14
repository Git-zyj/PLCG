/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, (((((((arr_7 [i_0 - 1] [i_2 + 2]) ? (arr_7 [i_0 - 1] [i_2 + 2]) : (arr_7 [i_0 - 1] [i_2 + 1])))) ? (((arr_7 [i_0 - 1] [i_2 + 2]) ? var_5 : var_4)) : ((((arr_7 [i_0 + 1] [i_2 + 1]) ? (arr_7 [i_0 - 1] [i_2 + 1]) : var_8))))))));
                    arr_9 [i_0] [i_1] [i_0] [i_0] = var_7;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] = var_4;
                                arr_16 [i_0] [i_1] [i_2] [i_1] [i_4] [i_4] [i_4] = (min((((arr_4 [i_0] [i_0 + 1]) ? var_11 : (arr_4 [i_0] [i_0 + 1]))), ((((arr_10 [i_4]) || ((((-2147483647 - 1) ? -1061386386 : 9223372036854775807))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 11;i_6 += 1)
        {
            {
                var_16 = (((min((((arr_4 [i_6] [i_6]) || var_14)), ((!(arr_7 [i_5 - 1] [i_5]))))) || (arr_19 [i_5 - 2])));
                arr_23 [i_6] [i_6 - 1] [i_5 + 1] = ((((((var_13 ? var_7 : var_10))) ? (arr_7 [i_5] [i_6 + 2]) : -var_2)));
                arr_24 [i_5 + 1] [i_5 - 2] [i_6] = ((((min(9223372036854775807, 2147483647))) || (((arr_14 [i_5 + 1] [i_5 - 3] [i_6 + 3] [i_6] [i_6 - 1]) && (arr_3 [i_6] [i_6])))));
            }
        }
    }
    #pragma endscop
}
