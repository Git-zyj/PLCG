/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] [1] |= 7386316556959100265;
                arr_5 [6] = ((((((max((arr_0 [i_0 - 1] [i_0 - 1]), var_2))) ? 64723 : var_12))) ? (((((max((arr_1 [i_1]), var_4))) << (var_0 - 3611550124)))) : (((~var_5) ? (arr_2 [i_1] [i_0] [10]) : (var_14 | -7386316556959100265))));
                arr_6 [i_0] [i_0] [10] = ((((arr_3 [i_0 + 1]) | var_0)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                arr_11 [i_2] = ((var_3 / ((5253568892196558349 ? var_5 : (arr_7 [i_3])))));
                arr_12 [i_2] [i_3] = (arr_9 [i_2] [i_3]);
            }
        }
    }
    var_17 = (-((var_7 ? 11176988283125978793 : var_3)));
    #pragma endscop
}
