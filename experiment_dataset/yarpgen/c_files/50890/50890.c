/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((-2181633270595464751 ^ var_3) ? ((var_4 << (var_5 - 414))) : 0))) ? ((2144 ? 2147482624 : 1019584917950241902)) : 5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_14 ^= (((~-2181633270595464769) ? -86 : -13));
                var_15 = (max(18446744073709551615, ((((arr_5 [i_0] [i_1]) ? ((-(arr_3 [i_0]))) : (arr_0 [i_0]))))));
                var_16 = 26043;
            }
        }
    }
    var_17 = (min(var_17, 1984218609));
    #pragma endscop
}
