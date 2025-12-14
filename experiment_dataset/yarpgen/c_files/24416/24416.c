/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_17 = ((+(((arr_2 [i_0 + 3] [i_0 + 3]) ? ((var_3 ? 496776953 : 4294967295)) : (max(863360861, var_4))))));

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            var_18 *= ((((582496590 ? (max(863360864, 863360856)) : 774808328))) ? (((arr_0 [i_0 - 1] [i_0 + 3]) ? var_4 : 312193675)) : 774808338);
            var_19 = (var_2 ? (max(2139095040, (arr_2 [i_0 + 4] [i_0 + 3]))) : (arr_0 [8] [i_1]));
            var_20 = (max(var_20, (((((max(2147483647, (arr_3 [i_0 - 1])))) >= ((3540576633 & (max(var_15, var_4)))))))));
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_21 = (min(var_21, (var_16 >= 0)));
            arr_8 [i_2] = (~var_8);
        }

        for (int i_3 = 2; i_3 < 15;i_3 += 1)
        {
            var_22 = (min(var_22, ((~((~(~77635798)))))));
            arr_12 [i_0] [i_3] = (((((62914560 ? -29897 : 774808328))) ? (min((~774808350), (min(1, var_11)))) : 774808354));
            arr_13 [i_0] [i_3] [i_0] = ((~(((1395107967 && var_15) ? ((12 ? 0 : -8176)) : ((((!(arr_9 [i_3])))))))));
            var_23 = max(((((min(12288, 2147483647))) + (min(1467167104, var_14)))), ((((((arr_9 [i_3]) ? 536870911 : var_9))) ? 143589200 : 4294967289)));
        }
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        var_24 = min(((var_11 / (arr_15 [15] [1]))), (min((((-1 ? 25 : var_7))), ((-1885245926 ? var_6 : var_11)))));
        arr_16 [i_4] = ((((max(((var_7 ? var_5 : 2147483647)), (var_0 || 1936189882)))) ? ((((~var_12) ? 1520786487 : -162423283))) : var_14));
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        var_25 = ((((var_8 ? (arr_17 [i_5]) : var_4))) ? var_6 : (1639365801 || 1467167104));
        var_26 += max(var_2, (((((0 ? -1286464074 : 309430216))) ? (-1297726290 & 2094396452) : (arr_17 [i_5]))));
    }
    var_27 = 471078368;
    var_28 = ((var_3 >= ((((min(22, -25913003))) ? (var_11 != var_15) : var_4))));
    #pragma endscop
}
