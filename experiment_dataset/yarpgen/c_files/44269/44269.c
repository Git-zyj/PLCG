/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(-1, ((((491556512523187107 ? -1 : -1)) & var_8))));
    var_12 = ((!((max((~var_2), (-491556512523187107 | var_5))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (var_3 & var_7);
                var_13 &= (max(((var_0 ? var_7 : 1)), ((~(arr_1 [i_0])))));
                arr_5 [i_1] = (((arr_1 [i_1]) ? (max((arr_1 [i_0]), (arr_1 [i_0]))) : (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_1])))));
            }
        }
    }
    #pragma endscop
}
