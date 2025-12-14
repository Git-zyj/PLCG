/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((18014398509481976 ? 129 : 57395))) ? (((min(-1, var_12)) * (114 <= 11212705217031034983))) : var_3);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                var_16 ^= ((((var_10 == 2275113541225950523) >> ((min(var_8, 142))))) * (((((var_5 ? 0 : 1))) ? (!1) : (1 | 111))));
                var_17 = 1;
            }
        }
    }
    var_18 = -108;
    var_19 = (((((37700 ? 3233013288 : (((0 ? -11 : -116)))))) && 1));
    #pragma endscop
}
