/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= (min((max(0, var_16), (min(var_3, var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_21 = (min(var_21, var_19));
                arr_4 [i_0 - 1] [1] = ((((var_4 ? 255 : (arr_2 [i_0 - 4] [2])))) ? (((var_11 ? (var_11 | var_5) : 22088))) : 6393745483406726119);
            }
        }
    }
    #pragma endscop
}
