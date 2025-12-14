/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [12] = (((~var_7) == ((-(((arr_0 [i_0]) ? var_1 : (arr_2 [i_0] [10] [i_0])))))));
                arr_6 [i_1] = ((((((arr_3 [i_0 - 1]) ? (var_6 / var_5) : (max((-9223372036854775807 - 1), (arr_2 [i_0] [i_0] [i_0])))))) ? (0 > 1) : (arr_1 [i_0 - 1])));
                arr_7 [i_0] = (max(((((((((arr_1 [8]) | var_6)) + 2147483647)) << (((((arr_1 [i_0 - 1]) + 30786)) - 29))))), (((9223372036854775807 - 1) - (((max((arr_3 [i_0]), (arr_1 [i_1])))))))));
            }
        }
    }
    var_11 = (max((max((var_3 - var_0), (var_2 | var_8))), var_7));
    #pragma endscop
}
