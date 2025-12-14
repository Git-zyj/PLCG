/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (((-2147483647 - 1) <= ((((63 != 256) != (-2147483647 - 1))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = 2147483639;
        var_17 = (((((((min((arr_0 [i_0]), (arr_1 [i_0])))) / (((arr_2 [i_0] [i_0]) ? 9223372036854775807 : (arr_1 [i_0])))))) ? (((arr_2 [i_0] [i_0]) ? 1 : 3698059686)) : (((arr_1 [i_0]) % (-2147483647 - 1)))));
        var_18 -= (max((((-((~(arr_2 [i_0] [i_0])))))), (((arr_1 [i_0]) ? (arr_1 [i_0]) : ((-1033595261298302230 + (arr_1 [i_0])))))));
    }
    var_19 = var_10;
    #pragma endscop
}
