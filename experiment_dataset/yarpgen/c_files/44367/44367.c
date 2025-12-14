/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (((-(!var_7))))));
    var_12 = (((((-8192 ? 5176892125260563284 : (((1073741824 ? -8192 : 1)))))) || ((min(((2 ? 12 : var_2)), var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_13 *= (min((arr_1 [i_1 + 1] [i_1 + 1]), (((((24 ? (arr_0 [i_0]) : 11)) < (!var_2))))));
                arr_5 [i_0] [i_0] = ((((min(-83, (arr_2 [i_0])))) ? 1040384 : (arr_1 [i_0] [3])));
                var_14 = ((2221967901265743784 ? -964125748701121118 : 3754751242));
                var_15 = ((max(var_0, ((2 ? 268435455 : 11)))));
            }
        }
    }
    #pragma endscop
}
