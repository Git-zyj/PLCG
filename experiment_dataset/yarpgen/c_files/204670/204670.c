/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((1 ? var_16 : (((((var_10 >> 1) > 1))))));

    for (int i_0 = 0; i_0 < 0;i_0 += 1) /* same iter space */
    {
        var_21 = (((min((max(var_1, 1)), (((arr_1 [i_0]) ? 0 : 17638712352928737955)))) * (max((14935705000184460351 >> var_2), ((7183009754475213200 ? 1 : 18446744073709551615))))));
        arr_2 [6] [10] = ((-909056498 * ((var_17 * (min(6821031237650516414, var_1))))));
        var_22 &= (max(((min(var_16, (-2098252306 <= 1)))), (((((var_10 | (arr_1 [9])))) ? (909056477 | 125) : 2078512113257837378))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 0;i_1 += 1) /* same iter space */
    {
        var_23 = 17786481176259160941;
        var_24 = (0 / 10847504980150035528);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 0;i_2 += 1) /* same iter space */
    {
        var_25 = (var_15 > 1);
        var_26 = ((!(((0 << (arr_6 [i_2] [1]))))));
        arr_8 [i_2] = 1;
        var_27 = (((arr_5 [i_2 + 1] [5]) ? 1 : (arr_5 [0] [i_2 + 1])));
    }
    var_28 = (((var_14 + 1) ? var_19 : (((!(1 >= var_17))))));
    #pragma endscop
}
