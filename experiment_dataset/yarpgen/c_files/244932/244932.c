/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [15] [i_1] = (((((-7871 / (-2147483647 - 1)))) * (((-7871 * 46116) / 4840861777957024815))));
                var_18 = (((((46131 && (86 != var_13)))) != (1 != 1)));
            }
        }
    }
    var_19 |= var_7;
    #pragma endscop
}
