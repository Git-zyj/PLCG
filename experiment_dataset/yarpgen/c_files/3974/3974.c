/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= var_9;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 ^= (max((((-(arr_1 [i_0])))), (arr_2 [i_0] [i_0])));
        var_16 = ((((max(647743270, (min(-2147483636, -2147483640))))) ? (arr_0 [i_0]) : (((arr_2 [i_0] [i_0]) ? 9223372036854775808 : (((max(92, (arr_0 [i_0])))))))));
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        var_17 = (((2035073690 - 647743247) ? 647743274 : ((85 ? 12250 : (arr_4 [i_1 + 1])))));
        arr_7 [i_1] [i_1] = ((-(((arr_3 [i_1] [i_1]) ? 152 : var_9))));
        var_18 -= ((+((51477 ? (var_11 < 9223372036854775795) : ((1 ? 4494 : -1))))));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_19 = (max(var_19, (((!(((~(arr_9 [i_2])))))))));
        var_20 -= ((((arr_8 [i_2] [i_2]) ? (((arr_9 [i_2]) ? (arr_8 [i_2] [i_2]) : 1)) : (32 >= var_5))));
    }
    #pragma endscop
}
