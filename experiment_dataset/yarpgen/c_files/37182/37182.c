/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(0, (max(((18446744073709551615 ? 0 : var_0)), var_12))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_18 = (min((max((min(0, 0)), ((1 ? 18446744073709551615 : 13527920666371620183)))), ((4918823407337931414 ? -28510 : 3))));
                var_19 = (max(var_19, ((min(-28510, 16179585502272289976)))));
                var_20 ^= (-9223372036854775807 - 1);
                arr_5 [i_0] [2] = 128;
            }
        }
    }
    var_21 = 3;
    #pragma endscop
}
