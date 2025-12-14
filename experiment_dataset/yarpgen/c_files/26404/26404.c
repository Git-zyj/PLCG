/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= var_14;
    var_17 = var_9;
    var_18 = ((~(((((-2147483641 ? 1028993593 : 9007199254740991))) ? 1633249082 : ((127 ? 2661718215 : 1633249062))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((33911 ? 8417964323407284429 : var_5))));
                arr_5 [i_1] = (min(((((((-2355931610698798615 ? var_15 : var_8))) ? -6691129776114556054 : (33911 | 95)))), ((max((arr_0 [i_0]), -8877352891524841595)))));
                var_19 = ((2355931610698798615 ? (198 && var_4) : (min((arr_3 [21]), (arr_2 [i_0])))));
            }
        }
    }
    var_20 = ((9223372036854775793 ? ((-(var_7 + var_9))) : var_2));
    #pragma endscop
}
