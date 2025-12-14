/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -1417970304;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            var_17 ^= (var_11 ? ((((~-1417970305) && (1 + -1417970304)))) : ((var_15 ? var_7 : (-1 | 1))));
            var_18 = (min((((((532676608 ? (arr_1 [i_0]) : var_13))) || (((187306658 ? var_1 : (arr_0 [i_1])))))), (max((!0), ((var_7 && (arr_1 [i_0])))))));
        }
        arr_5 [16] = ((432493444 ? (((arr_0 [i_0]) | var_5)) : (arr_1 [i_0])));
        arr_6 [i_0] = var_8;
        var_19 = (min(var_19, ((((((arr_2 [i_0] [i_0]) ? -573604609 : (arr_2 [i_0] [i_0]))) != (var_3 / var_7))))));
    }
    var_20 ^= (((-1704673758 && 1) ? -var_7 : ((2147483647 ? -573604607 : 515399357))));
    var_21 = max(11366, -1417970304);
    #pragma endscop
}
