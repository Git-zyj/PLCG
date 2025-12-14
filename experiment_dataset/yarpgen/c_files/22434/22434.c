/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_19 = 1363080836;
                arr_5 [i_0] = (((~4294967293) % (((~var_16) ? (((arr_0 [i_1]) ? 18446744073709551611 : var_10)) : (min(0, 18446744073709551602))))));
            }
        }
    }
    var_20 ^= (max(((var_9 ? ((10336600581588305149 << (-729393388 + 729393390))) : var_16)), ((max((var_0 || 1), (var_10 || var_13))))));
    #pragma endscop
}
