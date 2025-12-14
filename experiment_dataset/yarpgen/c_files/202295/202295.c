/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, ((((max((-9 + var_5), 60)) >> (48 - 48))))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        arr_2 [i_0] = (var_0 < 8537925904183176703);
        var_13 = (var_10 ? 1 : 1);
        var_14 = (min(var_14, (!var_3)));
        arr_3 [i_0] [i_0] = ((!(arr_0 [i_0 + 3])));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_15 = (min(var_15, (((((max(((72 | (arr_4 [i_1]))), 63))) < (arr_4 [i_1 + 1]))))));
        var_16 = ((+(((arr_4 [i_1 - 1]) ? (arr_4 [i_1 + 2]) : var_4))));
        var_17 -= 1689433575130482201;
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {
        var_18 = (((arr_7 [i_2]) ? ((212 * ((25 ? var_8 : 39)))) : ((((((min(0, 71))) || (arr_7 [0])))))));
        arr_8 [2] &= (((((((min((-9223372036854775807 - 1), ((((((arr_7 [i_2]) + 2147483647)) >> (-587638464 + 587638472)))))) + 9223372036854775807)) + 9223372036854775807)) >> ((((var_2 ? ((var_5 ? var_5 : (arr_6 [10]))) : ((min((arr_6 [2]), 161))))) + 17663))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
    {
        var_19 = (!32766);
        var_20 -= 21;
        arr_13 [i_3] = (arr_12 [i_3]);
        arr_14 [i_3] = ((97 ? 20 : 9223372036854775807));
    }
    var_21 -= ((var_6 == ((((((8796093022207 ? 497891766 : var_11))) && 3906129188395890473)))));
    var_22 = (min(var_22, (var_10 | 9223372036854775807)));
    #pragma endscop
}
