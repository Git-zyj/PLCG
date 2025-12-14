/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = (max(var_14, (arr_6 [i_1 + 1] [i_1 - 1])));
                var_15 = ((((arr_4 [i_0] [i_1 - 1]) ? (arr_4 [i_0] [i_1 - 1]) : (arr_4 [2] [i_1 - 1]))));
                arr_7 [i_0] = (((((var_11 | (arr_2 [i_1 + 1])))) ? (((~(arr_3 [i_1 - 1] [i_1])))) : ((+((var_11 ? (arr_4 [i_0] [i_0]) : var_0))))));
                var_16 -= (min(-44, 39));
            }
        }
    }
    var_17 = var_7;
    var_18 = (min(var_18, ((max(var_0, var_12)))));
    #pragma endscop
}
