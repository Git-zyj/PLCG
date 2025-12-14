/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 51287;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_20 = (max(var_20, 18446744073709551615));
                var_21 = (max(var_21, 14));
                var_22 = (((((var_11 / (~var_7)))) || (arr_6 [i_0] [i_0] [i_1])));
            }
        }
    }
    var_23 = ((((((~1) % 3149929494622778076))) ? (var_12 && var_17) : var_8));
    #pragma endscop
}
