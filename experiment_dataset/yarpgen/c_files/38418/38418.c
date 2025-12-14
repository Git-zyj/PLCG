/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_19 = var_12;
                var_20 = ((var_13 ? (arr_1 [i_0] [i_1 + 1]) : var_7));
                var_21 = 8192;
            }
        }
    }
    var_22 = (var_6 ? 8192 : (112 * 643441244));
    var_23 = var_16;
    var_24 = var_8;
    #pragma endscop
}
