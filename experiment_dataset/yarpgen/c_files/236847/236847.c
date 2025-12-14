/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_15 *= ((((((((((arr_0 [i_1]) ? var_4 : (arr_2 [i_0 - 3] [i_1] [i_1]))) + 2147483647)) >> ((((1054207813 ? (arr_3 [i_0] [i_1] [i_1]) : 127)) - 3836421957))))) | (((~1125899906842622) ? (((arr_1 [i_0] [i_1]) & var_10)) : (((var_6 ^ (arr_3 [i_1] [i_1] [i_0 - 3]))))))));
                var_16 = (max(var_16, (((-(((arr_2 [i_0 - 1] [i_0 + 1] [i_0 + 1]) << (var_14 - 15364876022291068621))))))));
            }
        }
    }
    var_17 = var_8;
    var_18 = (max(var_18, (((-var_12 ? ((((min(var_12, var_7))))) : (min((((0 ? 62 : 32736))), var_6)))))));
    var_19 ^= (max(4285941064, (min(((var_12 ? var_13 : var_12)), ((var_1 ? var_4 : var_0))))));
    #pragma endscop
}
