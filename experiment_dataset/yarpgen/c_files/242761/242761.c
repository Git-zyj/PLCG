/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (((((var_14 ? 10980 : var_14))) ? ((250 ^ (var_12 - var_5))) : 19258));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_17 += ((((var_0 ? var_9 : -1)) & ((2147483647 ? (250 < var_11) : (arr_3 [i_0] [i_1])))));
            var_18 = ((var_13 | ((var_2 ? var_2 : (arr_6 [i_0])))));
        }
        var_19 = (min(var_19, ((((arr_4 [i_0]) << (((arr_0 [i_0]) - 36)))))));
        var_20 = (((742688356 / 5) ? (((arr_4 [i_0]) ? (arr_3 [i_0] [i_0]) : var_14)) : var_12));
    }
    var_21 += 1497200921;

    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        arr_10 [i_2] = (((((-24836 ? -786658594 : 250))) ? (((5297 & var_2) & ((((arr_8 [i_2]) ? 2797766391 : var_6))))) : (arr_9 [i_2])));
        arr_11 [i_2] = (((((((1497200921 / var_8) < (arr_8 [i_2]))))) % (((var_2 + 9223372036854775807) >> (((arr_8 [i_2]) - 26110))))));
    }
    #pragma endscop
}
