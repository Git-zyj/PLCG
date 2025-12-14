/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((((127 ? (arr_2 [i_1]) : (arr_2 [i_0]))) > (arr_2 [i_0])));
                var_18 = (min(var_18, ((((976412934154905772 ? 1692305709 : 1126364061))))));
                var_19 = ((((((var_4 ? 166 : var_6)) >> (5999608495463146982 - 5999608495463146973))) != ((4820780456632393938 << (203 - 158)))));
                var_20 = (arr_4 [i_0] [i_1]);
            }
        }
    }
    var_21 = ((((((23546 ? -1692305710 : var_6)))) ? (((var_3 + var_6) + 100)) : ((1692305713 ? var_12 : 234))));
    #pragma endscop
}
