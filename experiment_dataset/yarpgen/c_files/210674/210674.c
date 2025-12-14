/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 *= ((((max((((arr_0 [11]) ? (arr_0 [i_0]) : (arr_0 [i_0]))), var_15))) ? (((!((max(var_5, 0)))))) : var_12));
        var_17 = 5852741876613867582;
        arr_2 [i_0] = 31;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_18 *= 6620478864076448598;
        var_19 = ((min(7709140622094413168, (arr_3 [i_1]))));
        var_20 += ((var_10 ? ((+((1187825292 ? (-9223372036854775807 - 1) : 710)))) : -var_10));
    }
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        var_21 = ((((!(arr_6 [i_2 - 1]))) ? (min(var_1, (((arr_1 [i_2]) ? 9223372036854775802 : 8544774337138556749)))) : ((((var_5 || var_7) ? (min((-9223372036854775807 - 1), 52536)) : (((248 ? var_1 : var_7))))))));
        var_22 = (max(((!(18446744073709551615 && 1230370377253590349))), (arr_1 [i_2 - 1])));
        var_23 += (-127 - 1);
        var_24 += ((((((arr_7 [i_2 + 2] [i_2 + 4]) ^ var_11))) ? 0 : 3));
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_25 = (min(var_25, 18446744073709551607));
        arr_10 [i_3] = (((((!-110) < (var_7 | 0))) ? ((((-0 != (min(var_4, (arr_1 [i_3]))))))) : ((((((-9223372036854775807 - 1) + (arr_5 [i_3])))) ? (((max((arr_7 [1] [i_3]), 8192)))) : -9223372036854775803))));
        arr_11 [1] = (min((((arr_5 [i_3]) ? ((0 ? (arr_0 [i_3]) : 18446744073709551609)) : (((1 ? var_2 : (arr_1 [i_3])))))), (((((10737603451615138447 >> (754047865 - 754047825)))) ? (max(var_8, 18446744073709551607)) : 32374))));
    }
    var_26 = ((((42573 || (var_10 && var_6)))));
    #pragma endscop
}
