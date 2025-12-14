/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_11;
    var_18 = ((((((max(30, 95))) ? var_6 : var_1)) % ((((((var_10 ? var_13 : var_2)) + 2147483647)) << ((((((var_8 ? var_0 : var_11)) + 41)) - 16))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = arr_2 [i_0] [i_1];
                var_20 = (max(var_20, (((((min((arr_0 [i_0 + 1]), (arr_0 [i_0 - 1])))) ? (arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1]) : ((-116 ? -60 : 112)))))));
                var_21 = (min(var_21, ((((((arr_0 [i_0]) == var_8)) ? (((arr_5 [i_0 + 1] [i_0 - 1]) ? var_0 : (arr_5 [i_0 + 1] [i_0 + 1]))) : var_2)))));
            }
        }
    }
    #pragma endscop
}
