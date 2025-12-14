/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((((max(var_4, var_2))) ? (var_9 << var_5) : ((min(1, 524287)))))) ? var_0 : ((((var_14 != var_16) != ((var_15 ? var_5 : var_15)))))));
    var_19 &= (min((((((var_1 ? var_0 : var_2))) ? ((var_2 ? var_15 : var_0)) : (var_8 + var_12))), ((((var_14 / var_9) ^ (((var_10 << (((var_11 + 29926) - 7))))))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((((((((max(1, 1))) <= (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0]))))))) <= (((arr_1 [i_0]) ? ((((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))) : ((1 ? 0 : 1137649626))))));
        var_20 = (((157 | 1) >= ((((((98 ? -3511035301963010346 : 65535)) + 9223372036854775807)) >> (((arr_0 [18] [i_0]) - 22679))))));
    }
    var_21 &= (max((~var_9), (((84 >= 7614729748162610634) | ((var_5 ? var_14 : var_14))))));
    var_22 = ((max(((var_11 ? var_4 : var_5)), ((var_3 ? var_16 : var_17)))));
    #pragma endscop
}
