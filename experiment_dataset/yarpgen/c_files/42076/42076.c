/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 = (arr_8 [i_0] [i_2]);

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_13 [i_2] [i_1] [i_2] [i_2] = ((var_3 || (arr_3 [i_0] [i_1])));
                        arr_14 [i_0] [i_1] [i_2] [i_1] [i_3] = ((((((((var_10 ? var_10 : var_5))) ? (arr_10 [i_0] [2] [i_2] [i_1] [i_1] [i_3]) : (((arr_8 [i_0] [i_0]) ^ -3343239078321908691))))) ? (((-(arr_1 [i_1 + 1])))) : (((var_2 ^ var_14) % var_9))));
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_16 = ((((6677495473277860956 * (((arr_15 [i_1] [i_1] [i_1] [i_1]) ? 18446744073709551615 : (arr_9 [i_0] [i_1] [i_0] [i_1] [i_4])))))) ? ((((arr_10 [i_0] [i_1] [i_2] [i_2] [i_4] [i_2]) / (arr_2 [i_0] [i_2])))) : var_9);
                        var_17 = (((((arr_0 [i_1 + 1]) ? var_7 : var_3)) & ((((arr_6 [i_2]) | (var_10 | var_2))))));
                        arr_17 [i_4] [i_1] [3] [i_4] [i_4] = -14;
                    }
                    arr_18 [i_1] = (((arr_16 [i_1] [i_0]) >= ((((arr_10 [i_1 + 3] [i_1 + 1] [i_1 - 1] [i_1] [i_1] [i_1 + 1]) | (arr_2 [i_1 + 3] [i_1 + 3]))))));
                    arr_19 [i_1] [i_2] [i_1 + 2] [i_1] = ((var_14 ? (((((max(0, 912125952))) ? ((var_11 ? (arr_4 [i_0]) : var_7)) : (((1 ? var_12 : 0)))))) : (max((-127 - 1), 1072724569650266354))));
                }
            }
        }
    }
    var_18 = ((((~(var_14 > var_7))) < ((((~var_12) && var_0)))));
    #pragma endscop
}
