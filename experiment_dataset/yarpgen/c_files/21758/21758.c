/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (((((-29989 ? 11 : 1385289769461592725))) + ((((!(var_11 <= var_6)))))));
        arr_3 [i_0] [i_0 - 2] = (((((+((-585685357 ? (arr_1 [i_0] [i_0 + 1]) : (arr_1 [i_0] [1])))))) ? (((~(((arr_1 [i_0] [i_0]) & (arr_1 [i_0 - 1] [i_0 + 1])))))) : (-9223372036854775807 - 1)));
        arr_4 [i_0] = ((+(((1511054245079114820 + var_2) ? ((((arr_1 [18] [11]) ? 104 : (arr_1 [i_0 - 3] [i_0 - 3])))) : 4294967272))));
        arr_5 [i_0 - 1] = ((((((arr_0 [i_0 - 1]) - (arr_0 [i_0 + 1])))) || (((((min(var_2, (arr_0 [i_0])))) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_12 = (min(var_12, var_3));
        var_13 ^= -2147483641;
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_14 = 147;
        var_15 = (((((var_1 + ((3 ? 206 : 705289818))))) ? ((((arr_6 [i_2]) ? (8841330108345818681 < 4294967289) : 9))) : (((min(6, -29989)) & (arr_11 [i_2])))));
        var_16 = (min((max(var_3, var_11)), (((!(((arr_11 [i_2]) <= 2199023255551)))))));
        var_17 = (max((arr_6 [3]), (((var_10 + 2147483647) << ((((((29988 ? var_0 : var_10)) + 5923049600263323467)) - 20))))));
    }
    var_18 &= var_1;
    var_19 = (min(var_19, var_1));
    var_20 |= var_4;
    #pragma endscop
}
