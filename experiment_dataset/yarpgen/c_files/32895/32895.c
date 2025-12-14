/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((((((var_4 ? 9223372036854775807 : var_1))) ? var_8 : var_13)), (((!(((5239108089671386341 ? 22338 : -9223372036854775807))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = ((-(((min(24249, -9223372036854775807))))));
                var_18 += ((13407 ? 0 : 42812));
            }
        }
    }
    var_19 = ((((!(var_2 - 19406))) || var_4));
    #pragma endscop
}
