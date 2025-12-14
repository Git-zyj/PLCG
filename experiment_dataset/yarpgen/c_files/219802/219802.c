/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_11 = (!1);
                arr_5 [i_0] [i_1] = (min(-39, (((max(1, var_9)) + (((1 ? var_5 : 338774000)))))));
                var_12 = ((!((((((1 ? 1 : 18446744073709551608))) ? (((arr_0 [i_0]) ? 1 : (arr_4 [i_1]))) : 1)))));
                var_13 |= max((((2285 ? 1 : 255))), (!var_6));
            }
        }
    }
    var_14 ^= var_0;
    #pragma endscop
}
