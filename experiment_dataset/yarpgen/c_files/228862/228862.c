/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_18 = ((~((((((24683 ? var_3 : var_14)) + 2147483647)) << (((((~40853) + 40869)) - 15))))));
                var_19 |= var_11;
                var_20 = (min(797665444, var_9));
                var_21 = -var_0;
            }
        }
    }
    var_22 = ((max((~var_10), ((40853 ? 40853 : var_14)))));
    #pragma endscop
}
