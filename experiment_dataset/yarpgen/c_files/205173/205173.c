/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((~13044639905492594461) ? var_8 : (max(var_3, var_9))))) ? (0 | var_1) : ((((max(var_1, var_4))) ? 1 : var_9))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_12 += ((((max((arr_2 [i_0 + 1] [i_0 - 1] [i_0 + 1]), 18446744073709551610)))) ? var_6 : (arr_3 [i_0] [i_0]));
                var_13 |= (max(5493833660483696167, ((((((arr_1 [i_0 - 1] [i_1 + 1]) ? (arr_0 [i_0]) : (arr_0 [i_1]))) ^ ((min((arr_2 [i_0 + 1] [i_0 - 1] [i_0 - 1]), 0))))))));
                var_14 = (((arr_2 [i_1] [i_0 - 1] [i_0 - 1]) ? var_0 : ((18446744073709551615 ? (0 * var_4) : ((var_0 ? 13 : var_2))))));
                arr_4 [i_0] = (max(((((arr_3 [i_0] [i_0]) ? ((1 ? var_7 : var_8)) : (arr_1 [i_0] [i_0])))), ((var_10 ? 1099243192320 : (arr_3 [i_0] [i_1])))));
            }
        }
    }
    #pragma endscop
}
