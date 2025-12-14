/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    var_14 -= var_6;
    var_15 -= min((max(31, 11478)), 54927);

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_16 = (max(var_16, ((max((max((((-578829952 + 2147483647) >> (((arr_3 [i_0]) - 19878)))), (arr_2 [i_0]))), (arr_2 [i_0]))))));
        var_17 *= (min(var_11, (max((arr_3 [i_0]), (arr_3 [i_0])))));
        var_18 = min((arr_0 [i_0]), (min(((578829952 ? 12099054753994642763 : (arr_1 [i_0]))), -64)));
        var_19 = (min(var_19, (65534 & 3488494033282206300)));
        var_20 ^= min(((min(22407664, (-32767 - 1)))), (max((min((arr_0 [i_0]), -7424580321869284141)), (arr_0 [i_0]))));
    }
    #pragma endscop
}
