/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_6, ((-(min(var_7, var_2))))));
    var_11 ^= ((max((~var_6), var_2)));
    var_12 = ((var_1 ? (((var_5 - -6583139562028493020) - -var_6)) : var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                var_13 = var_3;
                arr_5 [i_1] = ((-(!var_8)));
            }
        }
    }
    var_14 &= var_7;
    #pragma endscop
}
