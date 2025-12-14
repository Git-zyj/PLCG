/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 = var_0;

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_18 = (min(var_18, ((((((-252019088 ? var_6 : (arr_9 [i_1 + 1] [i_1 + 1] [i_0 - 1] [i_0])))) ? ((max(1, 209))) : ((((max((arr_7 [i_3] [1] [6] [9]), (arr_9 [i_0 - 2] [i_0 - 2] [i_2] [i_2])))) ? var_4 : (((arr_12 [i_0] [i_0] [i_0] [1] [i_0]) ? (arr_7 [1] [i_2] [i_1] [i_0]) : var_7)))))))));
                        var_19 = (max(47, var_9));
                    }
                    for (int i_4 = 2; i_4 < 8;i_4 += 1)
                    {
                        arr_15 [i_0] [i_1 + 1] [i_1] [i_1] [i_0] [i_4 + 1] = (max(((max((arr_1 [i_0 + 1]), -46))), ((((((arr_13 [i_0 - 1] [i_1] [i_0 - 1] [i_4]) ? 42 : var_9))) ? (arr_8 [i_0 - 1]) : (min((-2147483647 - 1), (arr_7 [1] [i_1 - 1] [i_2] [1])))))));
                        var_20 = (max(-503835670, (max((arr_6 [i_1]), var_13))));
                        arr_16 [i_1] [i_4] [i_1] [i_4 + 2] = (((var_0 ? var_1 : (arr_6 [i_1]))));
                    }
                }
            }
        }
    }
    var_21 = (max(var_0, var_9));
    #pragma endscop
}
