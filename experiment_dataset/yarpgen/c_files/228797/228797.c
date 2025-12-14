/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((-4968169553079080532 || 0) ? var_5 : (1 == var_1))) == ((var_6 ? (((-9018592371319325571 ? -1 : var_6))) : ((-32501 ? var_3 : var_5))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_11 = (((((-(1 & var_4)))) == ((var_5 + ((var_0 ? 4364 : 0))))));
                var_12 = (((var_5 != var_3) >> (((((!var_5) ? var_5 : 4095)) - 4076))));
            }
        }
    }
    #pragma endscop
}
