/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= (((var_8 + 2147483647) >> (var_10 - 3565197167)));
    var_18 |= ((var_0 * (!-56428)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_19 = (max(var_19, (arr_3 [i_1])));
                arr_4 [i_0] [i_0] = var_3;
                var_20 = (((17984915259677407509 ? 56428 : 225)));
                var_21 *= (((((47 ? 37 : -1439022834))) ? (!-6287) : 9107));
            }
        }
    }
    #pragma endscop
}
