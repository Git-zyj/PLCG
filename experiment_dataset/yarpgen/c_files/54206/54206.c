/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (!var_6);
    var_14 -= (min(((-114 % ((var_3 ? var_4 : var_7)))), ((max((((var_0 > (-127 - 1)))), var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_15 = (((arr_3 [i_0]) ? (arr_2 [i_0]) : (min((((arr_3 [i_0]) ? (arr_2 [i_1]) : (arr_0 [i_0]))), (((-114 ? (arr_1 [i_0]) : (arr_3 [i_0]))))))));
                var_16 = (((arr_1 [i_0]) % (var_6 + var_0)));
            }
        }
    }
    #pragma endscop
}
